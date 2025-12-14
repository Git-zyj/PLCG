/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173161
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 3;
    var_21 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_15 [i_4] [i_3] [i_2] [i_0] [i_0] [i_0] [i_0] = (((max((max(8222282792004344629, var_7)), -1)) | 779521065));
                                var_22 = (((((779521064 ? -779521065 : 4169666572)))) ? var_8 : -4389456576512);
                            }
                        }
                    }
                }
                arr_16 [i_0] [7] [i_0] = (((-1533822498 - var_9) ? ((-(arr_8 [i_0] [i_0] [i_0] [i_0]))) : (((arr_8 [i_0] [1] [i_0] [i_0]) ? (arr_8 [i_0] [i_1] [i_0] [i_0]) : (arr_8 [i_1] [i_0] [12] [i_0])))));
                var_23 -= ((((min(var_15, (arr_13 [i_0] [i_0] [i_0] [1] [i_0])))) ? (15232887910163680230 % var_4) : ((((arr_13 [8] [i_1] [i_0] [17] [i_1]) ? (arr_13 [1] [i_1] [i_1] [i_1] [i_1]) : (arr_13 [i_1] [8] [8] [6] [6]))))));
            }
        }
    }
    #pragma endscop
}
