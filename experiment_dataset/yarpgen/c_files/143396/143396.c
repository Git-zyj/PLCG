/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143396
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_11 = (min(var_11, (((-(min((((arr_5 [i_2] [i_1] [i_0]) ? (arr_7 [i_0] [i_0] [i_0]) : var_10)), ((0 ? 1 : 1)))))))));
                    var_12 = ((((var_8 && (arr_4 [i_0] [i_1] [i_2]))) ? ((min(var_5, (arr_4 [i_0] [i_0] [i_0])))) : (arr_4 [12] [10] [i_2])));
                }
            }
        }
    }
    var_13 = (max(var_13, ((var_4 + ((((var_8 ? var_7 : var_8)) - var_6))))));
    var_14 = ((~(((max(var_10, var_4)) - var_4))));
    #pragma endscop
}
