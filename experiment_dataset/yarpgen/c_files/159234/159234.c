/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159234
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max((max(((var_3 ? var_8 : 70368744144896)), 0)), var_2));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 24;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [4] [i_0] = (max(4115049871, (((var_8 ? var_2 : -5353)))));
                    arr_8 [i_0] = ((((((arr_2 [i_0 - 2] [i_2 - 2]) ? (arr_2 [i_0 - 2] [i_2 - 2]) : var_8))) ? var_8 : (max(var_2, (arr_1 [i_0])))));
                }
            }
        }
    }
    var_14 ^= var_5;
    #pragma endscop
}
