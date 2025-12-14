/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145736
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = var_2;
                var_19 = (min(var_19, ((min(var_12, (((!(4095 & var_13)))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            {
                var_20 *= (((((((min(4294963201, var_1))) ? (arr_5 [i_2] [i_2] [i_2]) : (var_15 & var_11)))) - (((arr_2 [i_2]) ? (min(112, 4294963201)) : var_4))));
                var_21 ^= ((~(((var_0 != (min(4666376108084058885, var_5)))))));
                arr_12 [i_2] = (arr_4 [i_3]);
            }
        }
    }
    #pragma endscop
}
