/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113072
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, var_4));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_21 -= (max((max((min(var_14, var_15)), var_18)), ((min(var_2, var_19)))));
                            var_22 = min((min((min(var_16, var_17)), ((max(var_16, var_6))))), var_10);
                            var_23 = (min(((max((max(var_19, var_6)), (min(var_13, var_11))))), (max(var_7, (min(var_15, var_16))))));
                        }
                    }
                }
                var_24 = min(((max(((min(var_5, var_19))), (min(var_12, var_11))))), (max(((max(var_6, var_5))), (min(var_1, var_17)))));
                var_25 = max(var_5, var_6);
                var_26 = (max(var_26, ((min((max(((max(var_1, var_5))), (min(var_2, var_17)))), ((max(var_11, var_9))))))));
            }
        }
    }
    #pragma endscop
}
