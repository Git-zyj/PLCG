/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163353
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_14 [i_0] [i_1] [i_0] [i_0] [i_1] = ((-(((40163 && (-15462 && 1))))));
                            arr_15 [13] [i_1] [i_2] [i_3] = ((1 << (10698685521824616732 - 10698685521824616718)));
                            var_17 = ((~(arr_7 [i_1] [i_1] [i_1])));
                        }
                    }
                }
                var_18 = (max(var_18, ((min((((-var_2 && ((!(arr_12 [i_0] [i_0] [i_1] [i_0])))))), var_13)))));
            }
        }
    }
    var_19 = var_13;
    #pragma endscop
}
