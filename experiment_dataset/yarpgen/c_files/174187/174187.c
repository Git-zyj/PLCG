/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174187
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = (max(((((var_14 + var_2) || var_5))), ((-(max(32767, var_3))))));
                var_15 = ((((((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0])))) ? (((arr_2 [i_1]) * (arr_2 [i_0]))) : ((9223372036854775807 ? (arr_2 [i_0]) : var_12))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                {
                    var_16 -= (~1);
                    var_17 = var_11;
                    var_18 = (arr_7 [i_2]);
                }
            }
        }
    }
    var_19 = (max(var_19, (~8172514404248552166)));
    var_20 |= 1;
    #pragma endscop
}
