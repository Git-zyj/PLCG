/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159597
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((-(--37)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_17 = ((-(--140)));
                                arr_14 [i_0] [i_4] = (~-var_8);
                            }
                        }
                    }
                }
                var_18 = ((-((~((-(arr_0 [i_0] [i_1])))))));
                var_19 = -52776558133248;
            }
        }
    }
    var_20 = ((!((!(!var_1)))));
    var_21 |= (!((!(!var_13))));
    #pragma endscop
}
