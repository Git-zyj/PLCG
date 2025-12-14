/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137502
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (((min(-4893497321086076938, 0))) & ((((!((max(6541871669591980112, -6541871669591980112))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_0] [i_2] [17] = 7830428895269699080;
                    arr_10 [i_1] [i_1] [i_1] [i_0] = max((((arr_5 [i_0 - 1] [i_0 - 1]) / -6541871669591980112)), (((arr_8 [i_0] [i_0]) ? ((-8150155138880915978 ? (arr_2 [i_0]) : var_1)) : -5174254278560699204)));
                    var_12 = ((!((min((var_0 & var_0), (arr_8 [i_0 + 1] [i_0]))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 3; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                {
                    var_13 = (max(var_13, ((((((((min(var_2, 9164276114367803216))) ? (arr_2 [i_0]) : (!var_3)))) || (((var_7 ? (!var_1) : var_9))))))));
                    arr_15 [i_0] = (8150155138880915977 & (max((((arr_5 [i_4] [i_0]) ^ var_11)), (arr_12 [i_3 - 2] [i_0] [i_3 - 2]))));
                    arr_16 [i_0] = (-(min((((arr_6 [i_0] [i_0]) ^ (arr_8 [1] [i_0]))), var_3)));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 24;i_7 += 1)
            {
                {
                    var_14 = (min(var_14, ((~(arr_26 [i_5] [i_6] [i_5] [i_6])))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 25;i_9 += 1)
                        {
                            {
                                var_15 = (3517859046733596114 ? (arr_30 [i_5] [i_5] [i_5] [i_8] [i_5]) : (arr_25 [i_5] [i_5] [i_9] [i_8]));
                                var_16 = (~(max(-256, ((-4906816458796129016 ? var_6 : -8423253968802501764)))));
                                var_17 = (~65528);
                                arr_33 [i_5] [i_6] [0] = ((!((((arr_27 [i_7 + 1] [22] [i_7] [i_8]) ? 6541871669591980106 : (arr_25 [i_7 - 1] [i_6] [i_5] [i_9]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
