/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132605
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(((var_18 ? (((var_10 ? 91 : var_9))) : ((3369198794 ? 925768501 : var_17)))), (((1235134049 ? (max(20283, var_5)) : ((var_10 ? var_10 : var_8)))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    var_20 = (max(var_20, var_17));
                    var_21 = ((((max(var_12, (var_7 != var_13)))) ? ((min((max(var_1, 925768502)), 4133114941))) : (max((422050757 || var_4), (max(1, var_11))))));
                }
            }
        }
    }
    #pragma endscop
}
