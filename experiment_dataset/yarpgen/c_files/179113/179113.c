/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179113
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [i_0] = var_2;

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    var_15 -= ((((((arr_1 [i_0]) ? -630789928 : (arr_0 [i_0] [i_2]))) >= (arr_6 [i_2] [i_1] [i_2]))));
                    var_16 = (max(var_16, (((((((var_10 + 0) ? (max(2147483638, 4542)) : (var_11 > var_6)))) > ((((min(var_2, var_1))) ? (var_8 <= 0) : 0)))))));
                    var_17 |= ((~(arr_6 [i_0] [i_1] [i_2])));
                }
            }
        }
    }
    #pragma endscop
}
