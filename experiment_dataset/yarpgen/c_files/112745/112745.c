/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112745
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= (!((min((((var_7 ? var_6 : var_4))), var_7))));
    var_11 = (((((var_5 <= (max(var_0, var_2))))) ^ var_1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                var_12 = (max((((!((max((arr_3 [i_1 - 1] [i_0]), (arr_2 [i_0]))))))), (max(var_8, ((var_9 ? 511 : 18056648595343757661))))));
                arr_4 [i_1 - 2] [i_1] = ((((min(((var_0 ? 333373550 : (arr_2 [i_0]))), (arr_1 [i_0] [i_1 - 2])))) ? var_1 : ((((max(var_0, (arr_1 [i_0] [i_0])))) ? 45018 : ((var_4 ? 18056648595343757661 : (arr_1 [i_0] [i_1])))))));
                arr_5 [i_0] [i_1 - 2] = (arr_1 [i_1 - 2] [i_0]);
                var_13 *= (min((arr_1 [i_0] [i_0]), (((((var_4 ? (arr_2 [3]) : var_1))) ? (arr_0 [i_0] [i_0]) : (max(390095478365793955, 32755))))));
            }
        }
    }
    #pragma endscop
}
