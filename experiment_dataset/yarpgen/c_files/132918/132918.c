/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132918
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((~((-32380 ? var_10 : ((min(var_17, var_12)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_21 &= (14950946147628165360 != 34991);
                var_22 = (((!(arr_5 [i_1] [i_1 + 3] [i_1 + 1]))));
                var_23 = (min(var_23, (((((((var_14 ? (arr_7 [i_0] [i_1]) : 544497681192804568))) ? var_10 : var_16))))));
            }
        }
    }
    #pragma endscop
}
