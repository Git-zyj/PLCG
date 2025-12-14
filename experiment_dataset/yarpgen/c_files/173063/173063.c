/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173063
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((3 || ((max((min(1, var_15)), var_14)))));
    var_21 = var_19;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = var_1;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_22 = (min(var_22, ((max((((arr_1 [i_2]) * (0 / -4))), ((((-30 ? -30 : var_18)))))))));
                                var_23 = (max(var_23, ((min(var_10, var_11)))));
                            }
                        }
                    }
                }
                var_24 += var_15;
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 0;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 10;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 9;i_7 += 1)
                        {
                            {
                                var_25 = (max(var_25, (((var_11 * ((((3985651756 > (min((-9223372036854775807 - 1), 6465381351105862136)))))))))));
                                arr_21 [10] |= 4294967283;
                            }
                        }
                    }
                }
            }
        }
    }
    var_26 = 29;
    #pragma endscop
}
