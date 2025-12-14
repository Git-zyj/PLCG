/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174862
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_11 = (((!var_10) <= var_10));
                var_12 = var_1;
                var_13 = ((183 ? (1 * var_4) : var_6));
                arr_6 [i_0] [i_0] [i_1] = (((((-1 ? 1 : 146))) ? (((((var_0 ? var_4 : var_2))) ? var_3 : 654)) : (((((var_6 ? var_4 : var_0)) > var_3)))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 10;i_4 += 1)
            {
                {
                    var_14 = (!var_6);
                    var_15 ^= ((var_6 ^ (!10387)));
                }
            }
        }
    }
    var_16 = var_9;
    var_17 = 1;
    var_18 = -32753;
    #pragma endscop
}
