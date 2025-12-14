/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146364
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_15 &= (max((arr_4 [i_1] [i_3]), ((((arr_7 [i_1] [i_0] [i_1]) - (arr_7 [i_3] [i_0] [i_3]))))));
                            var_16 = ((arr_1 [i_0] [i_1]) ? (((min(0, (arr_2 [i_0]))))) : (((~162152835) ? 3982585457 : (arr_7 [i_0] [i_1] [i_0]))));
                        }
                    }
                }
                var_17 = (i_0 % 2 == zero) ? ((((((arr_0 [i_0]) << (((arr_0 [i_0]) - 9180)))) - ((((arr_0 [i_0]) >= var_12)))))) : ((((((arr_0 [i_0]) << (((((arr_0 [i_0]) - 9180)) - 5920)))) - ((((arr_0 [i_0]) >= var_12))))));
                var_18 = (min(-var_8, ((((arr_0 [i_0]) & (arr_0 [i_0]))))));
                arr_9 [i_0] [i_1] = (max(((((2147483644 && 3761632192097902024) ^ (((arr_4 [i_0] [i_1]) ? -30379 : (arr_8 [i_0] [i_0] [i_1] [2])))))), -var_2));
                var_19 = ((~((~(arr_6 [9] [i_0] [i_0] [i_1])))));
            }
        }
    }
    var_20 = ((((min(var_2, var_3))) ? ((max((22616 < 0), (~var_7)))) : var_12));
    #pragma endscop
}
