/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150921
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0 - 1] = ((((0 << (var_16 - 63768))) << ((min(1, 0)))));
        arr_4 [i_0] [i_0] = (45810 / 4);
        var_20 = (min(((-(arr_2 [i_0 + 1] [i_0 + 1]))), ((((max((arr_2 [i_0 + 2] [i_0]), (arr_0 [i_0])))) >> ((((var_15 ? (arr_1 [i_0]) : (arr_0 [i_0 + 1]))) - 12333))))));
        var_21 = ((!(var_1 <= var_13)));
    }
    var_22 = var_9;
    var_23 &= var_12;
    /* LoopNest 3 */
    for (int i_1 = 1; i_1 < 11;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                {
                    var_24 = (((111 <= 43635) ? (((arr_12 [i_1] [i_3] [i_1 - 1]) + var_14)) : -0));
                    var_25 = (min(((-1 | ((min(145, (arr_9 [3] [3])))))), ((((min(var_10, (arr_6 [i_1])))) ? var_19 : ((1 ? var_13 : (arr_1 [10])))))));
                    arr_13 [i_3] [i_2] [i_3] = ((-((111 ? 88 : 0))));
                    arr_14 [i_3] = ((+(((var_5 - 1) ? (((arr_11 [i_3]) + var_9)) : (arr_5 [i_1 - 1] [i_3])))));
                }
            }
        }
    }
    #pragma endscop
}
