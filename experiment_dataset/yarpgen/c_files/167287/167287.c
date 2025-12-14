/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167287
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_9 [i_1] [i_3] = (((((arr_4 [i_2] [i_2] [i_2 - 4]) ? ((((var_9 && (arr_8 [i_0] [i_0]))))) : ((255 ? 1 : -6862630101415882278)))) == (-12 + -4)));
                            var_18 = (min((min(-5440462120150237020, 140)), var_12));
                        }
                    }
                }
                arr_10 [i_1] [i_1] = ((var_16 ? (((var_11 ? ((6862630101415882278 ? var_1 : var_2)) : (arr_0 [i_1 + 1])))) : ((-(-1966186827913039573 + -15)))));
                var_19 = (min(0, -5440462120150237022));
                arr_11 [i_1] [i_1] = (max((((((min(1, var_2))) || (~-62)))), ((var_2 * ((max(0, -71)))))));
                var_20 += 1;
            }
        }
    }
    var_21 = (max(var_0, (min(var_7, var_1))));
    var_22 = var_4;
    #pragma endscop
}
