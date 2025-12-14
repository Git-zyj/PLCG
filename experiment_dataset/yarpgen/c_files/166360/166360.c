/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166360
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((min(4046886427096609626, var_8)))) | var_1));
    var_20 = ((~(((((-9223372036854775807 - 1) ? var_10 : 9223372036854775807)) | var_3))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_21 = ((((min(var_10, var_9))) ? (((1125899906841600 ? 5343495292138634726 : -1))) : var_8));
                var_22 = (4046886427096609626 | 730422723);
                var_23 = ((-(arr_3 [i_0 + 4] [i_1])));
                arr_6 [i_0 + 1] = ((+((var_3 - (((arr_0 [i_0 - 1] [i_1]) ^ var_18))))));
            }
        }
    }
    var_24 = -var_13;
    #pragma endscop
}
