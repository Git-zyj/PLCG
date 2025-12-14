/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139811
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((max(2047, ((-2048 ? var_4 : var_3))))) ? (-8034153954772274654 & var_2) : (((!var_17) ? (~var_5) : 2047)));
    var_19 *= var_17;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_20 = (min(var_20, ((((0 & (((max((arr_0 [i_0] [i_1]), (arr_0 [i_0] [i_0])))))))))));
                    arr_6 [i_0] = ((((85 >> ((((max((arr_2 [i_0]), (arr_0 [i_0] [i_1 - 1])))) - 245)))) > 0));
                    var_21 = (max(var_21, var_0));
                    var_22 = (min(var_22, (~1)));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 14;i_4 += 1)
        {
            {
                var_23 = 186;
                var_24 *= (max((arr_10 [i_4 - 1]), ((((arr_7 [i_4 - 1] [i_4 + 2]) * 29225)))));
            }
        }
    }
    #pragma endscop
}
