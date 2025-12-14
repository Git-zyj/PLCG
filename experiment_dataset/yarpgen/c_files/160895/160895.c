/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160895
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= -2377480833612535613;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_21 = ((!(((10034768284919405382 ? (((var_17 * (arr_4 [i_0] [6] [6])))) : ((var_16 ? (arr_8 [i_0] [i_1]) : 1380174975)))))));
                                var_22 = ((((min((arr_3 [i_1 - 1] [i_2 - 1]), (arr_3 [i_1 - 1] [i_2 + 1])))) ^ ((~(arr_3 [i_1 - 1] [i_2 - 1])))));
                            }
                        }
                    }
                }
                var_23 = ((((((((7809 ? var_6 : 4294967295))) ? -var_10 : -var_14))) ? 10461022167387545768 : (((~(~-320880631408522181))))));
                var_24 = 7985721906322005851;
            }
        }
    }
    var_25 = (min(var_25, (((var_1 ? var_3 : ((((max(var_5, var_11)) > var_10))))))));
    #pragma endscop
}
