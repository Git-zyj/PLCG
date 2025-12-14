/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161612
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_1] = (((((max(9517343035466881885, var_4)) & (((1 / (arr_4 [i_0] [i_0] [i_1])))))) & ((((!(3072127717 ^ 1319097299049966108)))))));
                var_17 ^= var_4;
                arr_6 [i_0 - 4] [i_1] [i_1 + 2] = (arr_0 [i_0] [i_1 + 2]);
                arr_7 [i_1] [i_0] [i_0 - 4] = min(2992324710, ((var_2 ? var_5 : ((1 ? var_16 : 14617796086547904000)))));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_15 [i_1] [i_1] = (((((1 ? 9604518347253591990 : (arr_1 [9])))) << (((15483270231395458849 / 1) ? 1 : 8))));
                                var_18 &= (((((8842225726455959630 ? ((8842225726455959630 ? (arr_9 [i_4] [i_1 - 1] [i_2]) : 7180541694992640567)) : ((((arr_13 [i_0] [i_2 - 1] [i_3] [i_4]) ? 94 : (arr_8 [i_0 + 1]))))))) ? ((2772981755 ? (((arr_11 [i_2] [i_2] [i_3] [i_2]) ? var_5 : (arr_14 [i_3]))) : (((1 ? 59 : -25))))) : 17674054526829322510));
                                var_19 = var_7;
                                arr_16 [i_1] = (~var_16);
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = var_12;
    var_21 = var_11;
    var_22 = (~18446744073709551615);
    #pragma endscop
}
