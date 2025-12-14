/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153942
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= (-13580 && -26128);
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_9 [i_2] [0] [0] |= ((((var_7 + var_5) << ((((min(var_4, (arr_2 [i_1])))) + 16669)))));
                    arr_10 [i_0 + 1] [i_1] [i_1] = arr_1 [4];
                    var_13 &= ((~((((~(arr_7 [14])))))));
                    arr_11 [i_0] [i_1] [i_2] [i_2] = (((arr_3 [i_0] [3] [3]) | var_5));
                    arr_12 [i_0] [i_0] [i_0] [i_1] = (((((((-(arr_0 [i_0]))) - (arr_5 [i_0] [i_1] [i_2])))) ? ((-(arr_6 [i_1] [i_0 - 3]))) : ((var_11 ? (arr_5 [i_0 - 3] [i_0 + 1] [i_0 + 1]) : var_8))));
                }
            }
        }
    }
    var_14 = min(var_1, var_6);
    var_15 |= max(-var_0, (((min(var_5, var_8)) - var_11)));
    #pragma endscop
}
