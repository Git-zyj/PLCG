/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125015
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= var_12;
    var_21 = ((var_8 ? var_14 : ((var_1 << ((((max(var_18, var_18))) - 67))))));
    var_22 ^= (min((-1 - -6778252128495292030), var_12));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                var_23 |= ((((((var_18 - var_3) ? (((var_15 - (arr_2 [i_0])))) : ((var_11 - (arr_4 [i_0] [12] [8])))))) ? (arr_2 [i_1]) : (((arr_4 [i_1 - 2] [i_1 + 2] [i_1 + 2]) + (arr_4 [i_1 + 1] [i_1 + 2] [i_1 + 2])))));
                var_24 = ((var_13 ? ((((var_9 ? var_11 : var_12)) << (((((arr_1 [i_0]) ? (arr_3 [i_1 + 1] [i_0]) : (arr_2 [i_0]))) - 27717)))) : (((var_5 ? (arr_1 [i_1 - 2]) : (max(var_5, var_1)))))));
                var_25 ^= (min(((-(arr_4 [i_1 + 1] [i_1 + 2] [i_1 + 2]))), -6778252128495292030));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 12;i_4 += 1)
            {
                {
                    var_26 *= var_19;
                    var_27 -= (!1);
                }
            }
        }
    }
    #pragma endscop
}
