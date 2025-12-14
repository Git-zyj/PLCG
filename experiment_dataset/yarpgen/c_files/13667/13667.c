/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13667
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_8;
    var_20 -= ((min(var_4, ((var_10 << (var_0 - 1923192023))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_21 = ((((((((arr_4 [i_0]) ? (arr_2 [i_0] [i_0 - 2]) : var_9))) ^ (((arr_3 [i_0 + 1]) & var_5)))) | ((((arr_1 [i_1]) | (arr_1 [i_1]))))));
                var_22 += (((((arr_3 [i_0]) / (arr_3 [i_1]))) >= ((~(((arr_3 [i_0]) - var_2))))));
                var_23 ^= arr_1 [i_0 - 2];
            }
        }
    }
    var_24 = (max(var_24, (((var_0 && (((((max(var_14, var_13))) ? var_1 : ((var_16 << (var_6 - 17018)))))))))));
    #pragma endscop
}
