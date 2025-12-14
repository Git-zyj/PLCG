/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122584
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_19 = (((min(((92 - (arr_3 [i_0]))), ((max(10, -17))))) + -17));
                            arr_8 [i_0] [i_0 + 3] [i_2] [i_0 + 3] [i_0 + 2] = -91;
                            arr_9 [i_0] [i_0] [i_2] [i_0] [i_0] [i_0] = (min(3181507423453639892, ((max((arr_7 [i_2] [i_2 + 1] [i_2 + 2] [i_2]), 0)))));
                        }
                    }
                }
                var_20 = (((arr_1 [i_0 + 3]) != (max((max(1, 3181507423453639892)), 1))));
                arr_10 [i_1] [i_1] [i_1] = ((5333783620684486644 & (max(-6, 1179928258))));
            }
        }
    }
    var_21 = min(-4392821854751951361, (max(-8612934339153590392, (max(var_3, 6767028002161622806)))));
    var_22 = (max(1, -10));
    var_23 = var_18;
    var_24 = ((((max((max(10, 31)), 0))) << (-6 || 1)));
    #pragma endscop
}
