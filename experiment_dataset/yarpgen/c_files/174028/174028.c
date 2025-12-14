/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174028
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((((!-5269521414768875606) ? var_3 : var_17))) ? (var_0 & var_11) : (((var_8 | var_17) ? (32767 | var_8) : (var_10 >> var_13)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] [i_1] = (-615905481702669299 != 7);
                    var_19 = -8;
                    var_20 -= ((0 != (arr_0 [i_0] [i_0])));
                }
            }
        }
    }
    var_21 -= var_2;
    var_22 = (max((max(var_17, (var_7 < var_17))), var_15));
    #pragma endscop
}
