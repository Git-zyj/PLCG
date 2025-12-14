/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159305
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] |= (!-1451766892);

                for (int i_2 = 1; i_2 < 1;i_2 += 1) /* same iter space */
                {
                    var_13 = ((1451766892 | ((1451766894 ? 181 : 33))));
                    arr_7 [i_0] [i_0] [i_1] [i_1] = ((1 ? 55 : -11));

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        arr_10 [i_3] [i_0] [i_0] |= ((((!(((-48 ? -10752 : 7805467445243839241)))))));
                        arr_11 [i_3] [i_2] [i_1] [13] |= var_5;
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        var_14 = (((~-1612997475794419383) ^ ((((arr_9 [i_0] [i_1] [i_2] [i_1] [i_4]) ? 1 : 1)))));
                        arr_14 [i_2] [i_2] [i_0] [i_0] = -128669103717346611;
                        arr_15 [i_0] [i_2] [7] [i_4] |= ((1 ? 33 : 158));
                        var_15 = (398948740 | 136);
                    }
                }
                for (int i_5 = 1; i_5 < 1;i_5 += 1) /* same iter space */
                {
                    arr_19 [i_5] = (arr_9 [i_0] [i_0] [i_0] [i_1] [i_5]);
                    var_16 |= (17955278952624990543 & 6483158688340645200);
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    var_17 |= (((75 - 44302) / var_10));
                    arr_22 [i_0] [i_0] = var_0;
                    var_18 |= (!20546);
                    var_19 = ((1759406237 ? 715 : 74));
                    arr_23 [i_0] [i_0] |= (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]);
                }
                var_20 |= (max(-24027, 108));
                arr_24 [i_0] = 184;
            }
        }
    }
    var_21 |= var_12;
    #pragma endscop
}
