/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176265
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_12 = ((!(((~(!var_8))))));
        arr_2 [i_0] = var_5;
        var_13 = ((((min(((-(arr_0 [i_0] [i_0]))), (((var_9 != (arr_1 [i_0] [i_0]))))))) ? ((((3914495012 ^ (arr_1 [i_0] [i_0]))))) : var_8));
        var_14 = 3914495012;
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_15 = -var_9;
        var_16 = (max(((((3914495012 ? var_11 : var_4)) / ((max(380472280, (arr_3 [i_1])))))), (((!(!var_0))))));
        arr_5 [i_1] = 3687799026;
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                {
                    var_17 = (((607168269 ? (arr_4 [i_2 - 2] [i_2 - 2]) : var_0)) | (arr_1 [i_2 - 2] [i_2 + 1]));
                    var_18 = (var_1 ? (!var_2) : (max(21859, 3687799026)));
                    var_19 = ((43676 >> (-583022846 + 583022870)));
                    var_20 = ((((min((arr_3 [i_1]), var_7))) ? (((min(21858, (arr_3 [i_1]))))) : var_10));
                    var_21 ^= (arr_11 [i_1] [i_1]);
                }
            }
        }
        arr_12 [i_1] = ((~(((~380472283) ? ((max(var_0, (arr_11 [i_1] [i_1])))) : (arr_8 [10] [i_1] [8])))));
    }
    var_22 = (max(((((!3914495006) != var_7))), var_5));
    #pragma endscop
}
