/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138945
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [i_0] = ((~((var_1 ? 41 : var_5))));
                arr_7 [i_1] = ((-275191374068349642 ? var_8 : (--857)));
            }
        }
    }
    var_16 = (+(min((var_7 ^ var_6), ((857 ? var_11 : var_2)))));
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            {
                var_17 ^= ((((var_6 * (((arr_12 [8]) ? (arr_3 [i_2]) : var_12))))) ? var_0 : (min(var_15, ((var_2 ? (arr_13 [i_2] [i_2] [i_2]) : (arr_11 [14]))))));
                arr_14 [i_2] [i_3] [i_2] = (((((var_9 / (arr_13 [i_3] [i_2] [i_2])) * (((arr_12 [i_2]) ? 857 : var_11))))));
                arr_15 [0] &= -871013908;
                arr_16 [i_2] = ((-var_1 + ((((arr_9 [i_3]) <= (arr_1 [i_2 + 1] [i_3]))))));
            }
        }
    }
    #pragma endscop
}
