/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176195
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = (min(45, (min((arr_1 [i_0]), (max(var_2, (arr_1 [i_0])))))));
        var_20 = (min(var_20, ((max(45, (!-47))))));
        var_21 *= ((-(min((arr_0 [i_0]), (min(var_8, var_12))))));
    }
    var_22 = (max(var_22, 26));
    var_23 = (max(var_23, (((var_5 <= (((((min(var_2, var_2))) != var_19))))))));

    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_24 = (min((min(-40, (var_9 && -28))), (-40 ^ -35)));
        var_25 = min((max(((-(arr_0 [i_1]))), ((35 ? -17 : -25)))), ((((max((arr_0 [i_1]), (arr_1 [i_1])))) ? var_13 : ((27 ? (arr_0 [i_1]) : var_15)))));
        arr_7 [i_1] = (~var_11);
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
    {
        var_26 = (min((((var_4 ^ (arr_9 [i_2] [i_2])))), ((max((arr_3 [7]), (arr_3 [i_2]))))));
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 7;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    var_27 = ((+(((((((arr_10 [6]) ? 39 : 44))) && (arr_10 [i_3 + 3]))))));
                    var_28 = -49;
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
    {
        var_29 = ((28 * (min(47, (((arr_0 [10]) ? -36 : (arr_5 [i_5] [i_5])))))));
        var_30 = (min(((max((arr_5 [i_5] [i_5]), (((arr_12 [i_5] [i_5] [i_5]) ? (arr_3 [i_5]) : (arr_9 [i_5] [i_5])))))), ((~(arr_4 [i_5] [i_5])))));
        var_31 = (arr_8 [i_5]);
    }
    for (int i_6 = 0; i_6 < 15;i_6 += 1)
    {
        var_32 = (min(((max(-49, 49))), ((-26 ? (arr_4 [i_6] [i_6]) : var_13))));
        arr_21 [i_6] &= (min((min((max((arr_0 [i_6]), (arr_4 [i_6] [i_6]))), (max(-27, var_12)))), var_15));
        var_33 |= (~45);
    }
    #pragma endscop
}
