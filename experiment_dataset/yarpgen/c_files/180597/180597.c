/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180597
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, (((((~(min(var_17, var_6)))) > var_8)))));
    var_21 = (max(var_21, var_15));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_22 ^= ((!((((arr_0 [i_2]) * 0)))));
                    var_23 += ((((((arr_8 [i_2] [i_1] [8]) ? (((arr_0 [18]) ? var_19 : (arr_4 [i_0] [i_1]))) : (arr_6 [i_2] [i_1])))) ? var_7 : (arr_0 [i_0])));
                }
            }
        }
    }
    #pragma endscop
}
