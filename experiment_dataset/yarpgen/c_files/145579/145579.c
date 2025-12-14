/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145579
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_18 = (((min((arr_0 [i_0] [i_0]), (~var_10))) ^ (((arr_5 [i_0]) + (((var_10 ? var_7 : (arr_4 [i_0] [i_0] [i_0]))))))));
                var_19 = (((((max((arr_2 [i_0]), (arr_2 [i_0])))) ? (min(0, var_16)) : ((((arr_5 [i_0]) ? (arr_5 [i_0]) : var_17))))) + (~127));
            }
        }
    }
    var_20 = (max(var_20, ((((var_0 ? (((var_7 ? var_9 : -795713283))) : (max(var_5, var_3))))))));
    #pragma endscop
}
