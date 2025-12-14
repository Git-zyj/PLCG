/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165055
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= (((((4294967295 ? var_3 : ((-2137207270 ? -1 : var_2))))) ? var_8 : (((var_5 ^ var_1) | var_4))));
    var_11 = ((var_8 ? var_9 : var_4));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_0] = -0;
                var_12 = var_2;
            }
        }
    }
    var_13 ^= var_5;

    for (int i_2 = 3; i_2 < 20;i_2 += 1)
    {
        var_14 = (((arr_6 [i_2]) ? ((((((2120 ? (arr_6 [i_2]) : 2977573995))) >= (arr_8 [i_2] [i_2 - 2])))) : (arr_9 [i_2])));
        var_15 = (max(var_15, (arr_6 [i_2])));
    }
    #pragma endscop
}
