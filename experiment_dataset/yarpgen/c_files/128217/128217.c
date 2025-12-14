/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128217
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_19 = (((12 ? 127 : 123)));
        var_20 *= (-133 ? var_12 : (arr_1 [i_0]));
        arr_2 [1] = (max((min((arr_1 [i_0]), (arr_0 [i_0 + 3]))), (arr_1 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_1] = (max((arr_3 [i_0] [i_0] [i_2]), (((-6 >= (arr_0 [i_2]))))));
                    var_21 = (min(var_21, (min((((-(((arr_4 [i_0 - 1] [i_1] [i_2]) ? (arr_3 [i_0] [i_1] [i_1]) : var_12))))), ((max(var_2, var_5)))))));
                    arr_8 [i_1] [i_2] = ((((max(((-(arr_4 [9] [i_1] [i_2]))), var_6))) ? ((((!((min((arr_1 [i_0]), (arr_4 [i_0] [i_1] [i_2])))))))) : var_2));
                    arr_9 [20] [i_1] [20] = (max(((max((arr_6 [i_0 + 1] [i_0 + 3]), (arr_1 [i_0 - 3])))), ((((max((arr_0 [i_1]), var_4))) ? var_7 : (arr_1 [14])))));
                    arr_10 [8] [i_1] [i_2] = (max((max((min((arr_5 [i_0 - 2] [i_1] [i_1]), (arr_0 [i_2]))), ((((arr_0 [i_0]) ? (arr_3 [22] [i_1] [i_0]) : var_5))))), ((max((min((arr_0 [i_0 + 1]), (arr_1 [i_1]))), (arr_3 [i_0 + 2] [i_0] [i_0]))))));
                }
            }
        }
    }
    for (int i_3 = 4; i_3 < 20;i_3 += 1) /* same iter space */
    {
        var_22 *= (max(133, 264949990));
        var_23 = max((arr_12 [10]), (arr_3 [i_3] [i_3] [i_3]));
    }
    var_24 = var_3;
    var_25 = ((var_12 >= ((((min(var_14, var_1))) ? var_8 : var_11))));
    #pragma endscop
}
