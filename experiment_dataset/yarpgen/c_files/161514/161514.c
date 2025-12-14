/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161514
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    var_12 = ((-401294568664298042 ? ((var_8 ? ((var_1 ? -401294568664298042 : var_11)) : -401294568664298042)) : (min((min(401294568664298020, 3171664666)), -401294568664298045))));
                    var_13 = ((401294568664298045 ? 401294568664298026 : 897539663));
                    var_14 = ((((((((var_0 ? var_11 : var_7))) ? ((var_3 ? var_9 : var_0)) : -740440011))) * (min(var_10, ((min(var_8, var_11)))))));
                    arr_9 [i_0] = (min((((var_11 ? var_11 : var_3))), ((var_0 ? (min(-6085754819859981725, 5794974133938927170)) : var_9))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_1] [i_2] [15] [i_4] = ((!((max(((min(var_6, var_8))), ((var_1 ? var_10 : var_9)))))));
                                arr_17 [i_0] [i_0] [i_0] [15] [i_0] = var_10;
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 = (var_5 ? var_11 : ((((max(3174585399, -4725318264980429758))) ? ((max(var_5, var_5))) : ((var_3 ? var_2 : var_7)))));
    var_16 = 3719579023;
    var_17 = (var_2 ^ var_5);
    #pragma endscop
}
