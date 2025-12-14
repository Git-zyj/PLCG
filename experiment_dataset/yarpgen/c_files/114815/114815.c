/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114815
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= (-(min(var_16, ((-383510298 ? 761525172 : var_8)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            {
                var_20 = (arr_3 [i_0 - 2]);
                var_21 &= (min((((var_17 != var_16) ? var_9 : (arr_3 [2]))), ((((arr_0 [i_0 + 1]) < (arr_0 [i_1 - 2]))))));
                arr_4 [i_0 + 1] [i_1] = ((-((((max(var_10, (arr_3 [i_0 - 2])))) ? var_16 : (((var_18 + 2147483647) >> 0))))));
                var_22 += (((((~((-7220 ? var_18 : 0))))) ? 224178677 : (((var_2 < (arr_3 [i_1 - 2]))))));
                var_23 = (max(var_23, ((max((arr_1 [7]), 133693440)))));
            }
        }
    }
    #pragma endscop
}
