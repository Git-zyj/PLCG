/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144997
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (~-var_8);
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = (min(217, (min(49, 1111519596))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_20 ^= (((((-(!var_12)))) ? var_15 : ((((max(var_0, var_3))) ? var_3 : var_2))));
                                var_21 = (!2817974218268208866);
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 &= ((max(var_17, var_5)));
    #pragma endscop
}
