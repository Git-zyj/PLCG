/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171107
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (var_0 < var_8);
    var_19 = (((0 | (((min(0, 1)))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 1; i_2 < 19;i_2 += 1) /* same iter space */
                {
                    var_20 = (min(var_20, ((((var_0 ? 16958 : 3584082608))))));
                    var_21 -= (!var_16);
                }
                for (int i_3 = 1; i_3 < 19;i_3 += 1) /* same iter space */
                {
                    arr_10 [i_1] = ((!(((-19877 ? 3584082583 : 20700)))));
                    var_22 = (min(((-18004 ? ((-18017 ? 18222837330286303937 : 0)) : -var_15)), (((((var_5 ? 3584082632 : var_13)) % (~var_0))))));
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        {
                            arr_15 [i_0] [i_0] [i_1] [3] [i_5] = var_10;
                            arr_16 [i_0] [7] [i_4] [i_1] = ((12 / (max(var_8, (!var_14)))));
                            var_23 = (~1);
                        }
                    }
                }
                var_24 -= ((-(12918 / 12)));
            }
        }
    }
    #pragma endscop
}
