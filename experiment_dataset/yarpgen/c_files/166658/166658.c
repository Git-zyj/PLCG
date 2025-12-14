/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166658
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_16;
    var_20 = ((((((var_14 % 13) ? var_3 : var_17))) ? var_15 : ((((((var_15 ? var_10 : var_10))) || 93517932)))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0 + 1] = ((~(arr_1 [i_0] [i_0 + 2])));
        var_21 = ((((var_4 - (arr_1 [i_0 + 1] [i_0]))) / (arr_1 [i_0 + 1] [i_0])));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = (min(((((1027242837 * var_7) >= (((arr_0 [i_1]) ? 1 : var_11))))), (arr_1 [i_1] [i_1])));
        arr_6 [i_1] [i_1] = (max((((arr_1 [i_1] [i_1]) ^ -var_11)), (!-29016)));
        var_22 = (((((max(var_14, var_18))) <= 11479590544599031330)));
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] [0] = ((((var_3 || ((max(var_1, 1027242837))))) ? (((((arr_1 [i_2] [i_2]) != (var_17 == 93517929))))) : (min((arr_1 [i_2] [1]), (max(var_17, var_0))))));
        var_23 = (arr_7 [i_2] [i_2]);
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 23;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            {
                var_24 *= var_15;
                var_25 -= (arr_10 [i_3] [i_4]);
            }
        }
    }
    #pragma endscop
}
