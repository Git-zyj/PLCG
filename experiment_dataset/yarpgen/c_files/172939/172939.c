/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172939
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    var_17 = ((((max(((min(var_6, var_5))), ((~(arr_6 [i_2] [i_0])))))) ? var_2 : ((min(var_10, var_13)))));
                    arr_9 [i_0] = ((((((arr_7 [i_2 + 2] [i_2] [i_2]) | (arr_7 [i_2 + 2] [i_2] [i_2])))) ? ((~(9223372036854775807 - 3584))) : var_13));
                }
            }
        }
    }
    var_18 = var_3;
    var_19 = (((~((max(var_4, var_7))))));
    var_20 = (((var_15 > var_5) % var_2));
    #pragma endscop
}
