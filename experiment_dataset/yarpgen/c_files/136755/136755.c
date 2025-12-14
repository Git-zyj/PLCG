/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136755
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_10, ((((255 || 2547568911) ? var_13 : (~var_0))))));
    var_16 &= var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_17 &= (min(var_14, (min(var_0, var_10))));
                var_18 = ((((max(var_0, var_7))) ? var_8 : ((((var_10 % var_0) || (~var_13))))));
                var_19 = (((-((-1737465699 ? 248 : 26)))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_20 = ((-((-(~var_2)))));
                                arr_14 [i_0] = -var_3;
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_4] = ((!((min(var_2, (min(18114, 2805)))))));
                                arr_16 [i_0] [i_2] [i_2] [i_1] [i_0] = ((-(var_8 == var_2)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
