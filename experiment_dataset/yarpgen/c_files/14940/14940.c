/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14940
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((10508897521254579524 ? ((((max(var_0, var_0))))) : (min(((var_4 ? var_10 : 0)), var_9))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_12 = (((((((-37 ? var_9 : var_6))) < ((var_3 ? var_5 : var_10)))) ? var_2 : ((max(1, var_8)))));
                            var_13 = ((((((var_10 ? var_6 : 212531726194436527))) ? 5832063607436047569 : (arr_0 [i_0] [i_1]))) | var_4);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 4; i_5 < 19;i_5 += 1)
                    {
                        {
                            var_14 = (min(var_14, 1));
                            var_15 = ((var_1 ? (max((((arr_6 [i_0] [i_1] [i_4] [i_1] [i_5 + 2]) ^ (arr_7 [i_0] [i_1] [i_1] [i_5 - 2] [i_4] [i_1]))), (((12108163473552963076 ? var_2 : var_1))))) : (arr_12 [i_1] [i_1] [i_1])));
                            var_16 = (min(var_16, (~4294967295)));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
