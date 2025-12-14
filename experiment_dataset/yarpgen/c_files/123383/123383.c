/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123383
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 18446744073709551605;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    var_14 = 18446744073709551615;
                    var_15 = (((((((min(1780102923, 3696276474))) ? (arr_6 [i_0] [i_1] [i_2 - 2] [i_0 + 1]) : (max((arr_2 [i_0]), 3696276467))))) >= (((!var_5) ? 8077720826356136663 : (arr_5 [i_0 + 1])))));
                    var_16 = ((((((min((arr_6 [i_0] [i_0] [i_2] [i_1]), 2514864373)) / (arr_1 [i_1])))) ? (~2623657271020403474) : ((min(1780102923, 1780102923)))));

                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        var_17 &= ((6192560282416180228 ? 32767 : 3696276474));
                        arr_11 [2] [i_3] [i_2 + 1] [i_3] = -353861004;
                        var_18 = (max(var_18, 6192560282416180225));
                        var_19 = (min(var_19, ((max(16190472218801307131, 1780102923)))));
                    }
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        var_20 = (max(var_20, ((max(((0 % (arr_10 [3] [1]))), (((max((arr_14 [i_4] [i_4] [i_4] [i_1] [i_1] [i_0 + 1]), 11570636771338541795)) + -var_0)))))));
                        var_21 = (max(var_21, ((((arr_5 [i_4]) ? 18446744073709551615 : (min((arr_8 [i_2]), (arr_2 [i_0 + 1]))))))));
                        var_22 = ((!((((arr_9 [i_1] [i_1] [i_2] [i_4]) ? ((((!(arr_7 [i_4] [i_1] [i_2]))))) : ((-(arr_14 [10] [i_1] [i_2] [i_4] [i_4] [i_4]))))))));
                        arr_15 [i_0] [i_1] [i_2] [i_4] [i_0] = (arr_6 [i_0] [i_0] [i_0] [i_4]);
                        arr_16 [i_0] [i_1] [i_2] = arr_7 [i_0] [i_0] [i_4];
                    }
                }
            }
        }
    }
    #pragma endscop
}
