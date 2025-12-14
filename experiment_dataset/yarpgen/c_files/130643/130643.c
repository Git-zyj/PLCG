/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130643
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((max(var_3, -977384794771218358)) / ((((-127 - 1) * var_4))))));
    var_17 = (max(var_17, ((((var_6 & ((var_3 ? var_4 : var_9))))))));
    var_18 = ((((!(((var_7 ? var_8 : 1))))) ? -1 : var_8));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [5] = (arr_3 [i_0]);
                arr_7 [i_0] [i_0] [i_0] = (((min(var_6, (arr_5 [i_1 + 4]))) > (((~(~1))))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_19 = (max(var_19, (~909241873844460433)));
                            var_20 = (((arr_3 [i_2]) >= 2343160295));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
