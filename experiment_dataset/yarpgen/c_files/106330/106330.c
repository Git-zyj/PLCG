/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106330
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_7 [i_1] &= ((5240020629017475784 << (((-67 + 68) - 1))));
                var_12 = (((arr_1 [i_0] [i_1]) >= ((-(arr_3 [i_0] [i_1])))));
                var_13 = (arr_6 [i_0] [i_0]);
            }
        }
    }
    var_14 = -var_4;
    var_15 = (max(var_15, -var_3));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                {
                    arr_15 [i_4] [i_4] [i_3] [i_2] = ((-(arr_2 [5] [i_3 - 1])));
                    var_16 = (min(((-(((arr_13 [i_2] [i_4] [i_4] [i_4]) ? var_5 : (arr_12 [i_4]))))), (arr_3 [i_4] [i_2])));
                    var_17 = ((((((-1841084095 ? (arr_2 [i_3] [i_3]) : (arr_2 [i_2] [17]))))) ? (((1841084095 | (arr_0 [i_3 + 1] [i_3 + 1])))) : 3056088579));
                }
            }
        }
    }
    var_18 = (min((((var_9 ? (var_0 != -93915463) : (min(var_9, var_6))))), var_4));
    #pragma endscop
}
