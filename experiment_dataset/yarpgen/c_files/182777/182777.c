/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182777
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max((((var_12 ? (min(var_0, var_7)) : ((min(var_6, 32767)))))), var_13));
    var_16 = 33554431;
    var_17 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_18 = (max(var_7, ((15 ? 4294967295 : 4294967295))));
                var_19 += 4176281734601067769;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 8;i_3 += 1)
                    {
                        {
                            var_20 = 34335;
                            var_21 += (max(var_10, -1));
                        }
                    }
                }
                var_22 = ((((max((arr_1 [i_0]), (min((arr_1 [i_0]), 8117517747039182643))))) ? (((var_13 ? 1 : (arr_4 [1] [i_1] [i_1])))) : (max((arr_6 [i_0] [i_1] [i_0] [9]), 4294967295))));
            }
        }
    }
    #pragma endscop
}
