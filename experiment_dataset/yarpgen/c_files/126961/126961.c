/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126961
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            {
                var_16 = ((-((max(4678, 20183)))));
                var_17 = (((~var_3) ? (((var_11 ? var_10 : var_7))) : ((4678 ? 5382363003753426248 : 14663305184563211994))));
                var_18 = (min((((~89) ? ((-5586248573219270576 ? 5586248573219270576 : 0)) : (((9223372036854775804 ? var_2 : -5586248573219270573))))), ((((((-5586248573219270573 ? var_13 : 76))) ? 0 : ((var_1 ? var_1 : var_13)))))));
                var_19 = ((((15840261313318232605 ? (!var_15) : ((-4501492532282153113 ? -21901 : var_7)))) != ((var_12 ? ((max(var_7, var_11))) : ((min(var_2, var_13)))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            {
                var_20 = 10;
                var_21 = ((((((125 < var_11) ? -18429 : 0))) ? (min((-11437 <= 21335), (~var_14))) : 0));
            }
        }
    }
    #pragma endscop
}
