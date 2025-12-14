/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132981
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((var_2 | (((var_1 ? var_5 : var_10)))))) ? var_7 : var_5));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                arr_7 [8] = ((var_2 ? ((-((var_10 ? var_2 : var_7)))) : ((min(((var_0 ? var_9 : (arr_1 [i_0]))), ((var_0 ? var_0 : (arr_3 [i_1 + 1] [i_1 + 2] [i_0]))))))));
                arr_8 [i_1] = (((~var_2) ? ((max((arr_1 [1]), (arr_1 [i_1 + 2])))) : ((-(arr_1 [i_0])))));
            }
        }
    }
    #pragma endscop
}
