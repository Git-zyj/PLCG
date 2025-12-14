/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144648
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_5;
    var_14 = (((var_11 || var_7) << (((((min(var_3, var_1)))) + 110))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    var_15 = (arr_5 [i_2] [i_1]);
                    arr_7 [i_0] [i_0] [i_0] = min(((((9 || (arr_5 [i_1] [i_1]))) ? (max(var_0, 127)) : (arr_0 [i_0]))), (((9 % var_0) >> ((max(0, (arr_1 [i_1])))))));
                }
            }
        }
    }
    var_16 &= ((var_0 <= (((-(max(var_8, var_5)))))));
    var_17 &= ((min(((max(var_12, var_1))), (var_6 << var_2))) != var_2);
    #pragma endscop
}
