/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101341
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_7 [1] [i_1] = -9066797195094177704;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_17 = (((((6165540634214336863 ? -9066797195094177704 : 15603))) < var_7));
                            var_18 = (((arr_4 [i_0 + 1] [i_1] [i_2]) ? (min((arr_2 [i_0 + 3] [i_1]), (arr_2 [i_0 + 3] [i_1]))) : (arr_0 [i_0])));
                        }
                    }
                }
                arr_12 [i_0 + 2] [i_1] = (min((arr_8 [i_0 + 2] [i_0 + 2] [i_0 + 2]), (arr_2 [i_0] [i_0])));
            }
        }
    }
    var_19 = ((!((((var_1 ? var_5 : var_10))))));
    #pragma endscop
}
