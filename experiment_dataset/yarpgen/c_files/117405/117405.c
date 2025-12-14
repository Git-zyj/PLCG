/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117405
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((~(max(var_3, var_14)))));
    var_19 = (max(((((var_6 << (var_4 - 59))) * (var_14 / var_3))), ((min(247, (max(var_12, var_1)))))));
    var_20 &= var_11;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    var_21 = ((((var_8 ? ((var_2 ? (arr_2 [9]) : var_13)) : (((0 ? (arr_7 [i_0]) : (arr_7 [i_0]))))))) ? (max((189706299628230585 < -189706299628230586), (max((arr_3 [i_0] [i_1] [i_2]), (arr_1 [i_0]))))) : (arr_3 [i_0] [i_1] [i_2]));
                    var_22 = (min(var_22, ((max((min((max((arr_6 [i_0]), (arr_3 [i_2] [i_2] [i_2]))), (max((arr_3 [i_1] [i_1] [i_1]), 1265105121)))), (((((var_9 ? var_7 : var_4))) ? ((var_2 << (var_3 + 1254862734))) : (!189706299628230585))))))));
                    var_23 = (max(var_23, ((min(1, (min((65526 - 1265105121), 49051)))))));
                }
            }
        }
    }
    #pragma endscop
}
