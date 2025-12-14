/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185110
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 9223372036854775804;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0] [7] = 17592184995840;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_0] [0] [i_3] = (max(((-(!-19099))), (arr_8 [i_0] [i_1 + 1] [i_2] [0])));

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 17;i_4 += 1)
                            {
                                var_11 = (max(var_11, (((arr_6 [i_0] [i_3] [i_3] [i_2]) ^ ((var_6 + (arr_7 [i_2] [i_1 + 1])))))));
                                var_12 = ((4294967295 ^ (arr_6 [i_0] [i_1 - 1] [i_1 - 1] [16])));
                                var_13 = (max(var_13, 287948901175001088));
                                var_14 = (((-76 + 2147483647) << (2678 - 2678)));
                            }
                            var_15 &= ((var_0 ^ ((var_8 << ((((~(arr_7 [i_0] [i_0]))) + 5426691251936816688))))));
                            var_16 = (max(var_16, (arr_11 [i_0] [i_2] [i_2] [8] [i_0])));
                        }
                    }
                }
                var_17 ^= (((arr_0 [i_1 + 1]) / (arr_0 [i_1 + 1])));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 16;i_6 += 1)
                    {
                        {

                            for (int i_7 = 2; i_7 < 15;i_7 += 1)
                            {
                                var_18 = (max(var_18, var_8));
                                var_19 -= ((((var_5 & (!6))) == (((min(14, 12103))))));
                                var_20 = 165;
                                var_21 -= (min((!-7275154381130804953), var_1));
                            }
                            arr_22 [i_0] [i_0] [9] [i_6 + 1] = 48;
                            var_22 = 29708;
                            arr_23 [i_1 + 1] = arr_21 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1] [0] [i_1 - 1] [i_1];
                        }
                    }
                }
            }
        }
    }
    var_23 = var_2;
    #pragma endscop
}
