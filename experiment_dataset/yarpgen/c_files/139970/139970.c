/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139970
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, var_1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_13 *= (max((max((!var_10), (min(46, 42606)))), var_11));
                            var_14 = (max(var_14, (max(var_11, (((arr_9 [i_0] [i_3]) - (((var_5 ? (arr_8 [i_3] [20] [i_3]) : 22930)))))))));
                            var_15 ^= ((((((arr_4 [i_0] [i_1] [i_2]) ? -116 : (((min((arr_1 [i_0]), var_9))))))) ? ((max(((22940 ? 812 : 80)), ((var_8 ? var_3 : var_9))))) : ((~(arr_4 [i_3] [1] [i_0])))));
                        }
                    }
                }
                var_16 = ((((-(((arr_4 [4] [i_1] [i_0]) ? (arr_1 [i_0]) : -117)))) - ((-16 + (((arr_7 [i_1] [i_0] [i_0] [i_1]) - var_9))))));
                var_17 -= (min((--144114088564228096), ((((!22940) ^ (arr_9 [i_0] [i_1]))))));
            }
        }
    }
    #pragma endscop
}
