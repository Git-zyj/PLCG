/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184013
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, ((((((64197 + 13086) + 16384)) + ((((var_1 - -2216418473394884050) || var_19))))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                var_21 = (((((-244500239 ? -244500256 : (-2147483647 - 1)))) ? 1 : (18446744073709551615 - 1049394842)));

                for (int i_2 = 4; i_2 < 13;i_2 += 1)
                {
                    arr_9 [i_1] [i_1] [11] [i_1] = 18446744073709551615;

                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        var_22 = 21640;
                        arr_13 [i_0] [i_1] [i_1] [i_2] = (arr_8 [i_1 - 3]);
                        var_23 = (min(var_23, (((((min((arr_4 [i_2 - 3] [i_2 - 1] [12]), (arr_4 [i_2] [i_2 - 4] [i_2])))) ? (((arr_4 [i_2] [i_2 - 4] [i_2]) ^ (arr_10 [i_2 - 4] [i_2 - 1] [i_2] [i_2]))) : (((32 ? -630636048 : 1))))))));
                    }
                    for (int i_4 = 0; i_4 < 0;i_4 += 1)
                    {
                        var_24 = (min(var_24, (((-((var_7 ? 6190031247094263480 : var_0)))))));
                        var_25 = (min(((min(-33784752, (((arr_10 [2] [i_1] [i_4] [i_4 + 1]) + 226))))), (min(var_2, 403171339618431846))));
                        var_26 = (min(var_17, ((10924170635190147636 ? var_15 : 1))));
                    }
                    arr_17 [7] [i_1] = 1;
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 12;i_6 += 1)
                    {
                        {
                            arr_23 [i_0] [i_1 - 3] [i_1] [i_6] [i_1 - 1] [i_1 - 2] = (min((((!(23927 > 20008)))), ((((arr_10 [i_0 + 1] [2] [i_5] [i_6 + 4]) == -1505121575)))));
                            var_27 = (min(((-2135237385 ? 1 : -562949953421312)), (~var_2)));
                            var_28 = (min(var_28, ((((arr_1 [i_6]) ? ((max(var_12, (arr_18 [i_0 - 2] [i_0] [i_0])))) : ((~(min(4294967295, 0)))))))));
                        }
                    }
                }
            }
        }
    }
    var_29 *= ((((min((~var_1), var_12))) ? var_13 : var_15));
    var_30 = (max(var_30, (min(1, 65523))));
    #pragma endscop
}
