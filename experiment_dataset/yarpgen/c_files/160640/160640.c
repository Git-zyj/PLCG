/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160640
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_0] = ((-(((((max(var_4, var_7))) || (1 + 11108669096166755087))))));
                    var_11 ^= (((arr_2 [i_1] [i_0]) ? (((((max((-2147483647 - 1), 6))) > (((arr_5 [7] [i_1] [i_2]) ? (arr_0 [i_0] [i_1]) : (arr_3 [9])))))) : ((((arr_1 [i_1]) <= 3)))));
                    var_12 = ((((((arr_0 [i_0] [2]) ? var_6 : (arr_0 [i_1] [i_1])))) ? (arr_0 [i_0] [i_2]) : ((~(arr_0 [i_2] [i_1])))));
                }
            }
        }
    }
    var_13 |= max((((var_8 ? var_8 : (var_6 || var_8)))), ((((max(var_1, 6))) ? (max(var_4, 250)) : (((var_4 + 9223372036854775807) >> (var_9 - 16280030771133795412))))));
    var_14 = (((-31 ? ((var_3 ? var_9 : 250)) : var_2)) >> (var_5 - 42));
    #pragma endscop
}
