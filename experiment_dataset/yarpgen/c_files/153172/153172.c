/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153172
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                arr_4 [i_0] = var_17;
                arr_5 [i_0] [i_1] = var_7;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            {
                arr_12 [i_3] [i_3] = (arr_11 [i_2] [i_3] [i_3]);
                var_20 += ((((((((-(arr_7 [i_2])))) ? (min(var_8, 0)) : (arr_6 [i_2] [i_3])))) != ((var_4 ^ (max((arr_10 [i_2] [i_2] [0]), var_13))))));
            }
        }
    }
    var_21 |= ((((((((var_13 ? var_1 : var_2))) && ((max(var_4, var_6)))))) << var_10));
    #pragma endscop
}
