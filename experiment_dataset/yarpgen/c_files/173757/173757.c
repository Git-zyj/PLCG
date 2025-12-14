/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173757
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_2, 0));
    var_20 = (max((!var_17), 890399661505146838));
    var_21 = 31916111;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            {
                arr_8 [i_1] = (max((~4263051184), ((1283145238 ? (-9223372036854775807 - 1) : (((var_12 ? 31916136 : var_1)))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_22 = ((((min(var_18, 93))) ? -28 : ((-4 ? var_18 : 2097151))));
                                var_23 = (((177 ? var_16 : ((3 ? 7895004446181382180 : var_9)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
