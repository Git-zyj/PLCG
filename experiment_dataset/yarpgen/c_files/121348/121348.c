/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121348
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((18446744073709551612 >> (6486798182691728112 - 6486798182691728058)));
    var_18 |= 113;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_9 [i_1] |= ((((var_8 ? (17460 * 11143386387983495794) : ((max(773550205445922288, var_6))))) >= (((((var_15 ? var_10 : var_9)) >> (((6063263244708032474 | var_2) - 6263820900212125646)))))));
                    var_19 = ((((((((var_13 ? var_10 : 6486798182691728116))) ? (~var_13) : var_9))) ? ((((!((min(var_1, var_6))))))) : 6486798182691728084));
                }
            }
        }
    }
    #pragma endscop
}
