/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13102
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [3] [i_1] = (max(((-(arr_3 [i_0] [i_1]))), ((max((-2147483647 - 1), (max(var_9, 1163053016)))))));
                arr_6 [i_0] = (!183);
                arr_7 [i_0] [i_0] = ((-(arr_0 [i_0])));
            }
        }
    }
    var_13 = var_9;
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 23;i_3 += 1)
        {
            {
                var_14 = ((var_5 ? var_0 : ((max((!var_9), (max(var_3, var_4)))))));
                var_15 = ((((((65100 ? -2147483631 : 2147483642)))) << -74));
                var_16 ^= var_1;
                var_17 = (max(var_17, 69));
                arr_13 [i_3] [i_3] [i_3] = (((!(arr_12 [i_2 + 4] [i_2 + 3] [i_2 + 3]))));
            }
        }
    }
    var_18 = ((1 ? var_4 : (59064 & 178)));
    #pragma endscop
}
