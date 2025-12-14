/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152781
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_1 ? (max(var_0, (1588380561 * 0))) : (((14663 - 1) & var_10))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_13 ^= ((!(arr_1 [i_0] [i_0])));
        var_14 = ((((1 & (17060 & -2768820297513296135))) != ((((min(-57, 71)))))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 16;i_3 += 1)
            {
                {
                    arr_10 [i_3] [i_1] = (1 * var_5);
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 14;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            {
                                arr_15 [i_1] [i_1] [i_1] [i_4] [i_4] [i_5] = ((+((((2257662885 && 18751) >= 61785)))));
                                arr_16 [i_1] [i_1] [i_3] [i_4] [i_3] |= 52;
                                arr_17 [i_1] [i_4] [i_2] [i_4] [i_5] [i_2] [i_1] = (((((var_0 ? 4294967295 : (arr_11 [i_5] [i_5] [i_3] [i_5] [i_4 + 3])))) || (229 & var_0)));
                            }
                        }
                    }
                }
            }
        }
        var_15 = (max(var_15, var_4));
    }
    var_16 &= var_3;
    #pragma endscop
}
