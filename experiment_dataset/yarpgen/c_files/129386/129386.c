/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129386
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_10;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 = 2917312419;
        var_19 = (min(var_19, (((~((var_7 ? 8219618882257055906 : (arr_1 [i_0] [2]))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_20 = (max(var_20, (arr_1 [i_1] [i_2])));
                    var_21 = ((((3638428186 ? var_4 : 0)) & (arr_7 [i_2])));
                }
            }
        }
    }
    var_22 += (((((max(var_13, var_12)) - var_12))) ? (max((~var_13), (min(var_13, var_2)))) : ((((((0 ? -32756 : var_5))) ? (max(var_12, var_7)) : ((var_3 ? var_15 : var_14))))));

    /* vectorizable */
    for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
    {
        var_23 = (1 && (arr_6 [i_3] [i_3] [1]));
        var_24 = (((((arr_4 [i_3] [i_3] [i_3]) + 9223372036854775807)) >> (((arr_6 [i_3] [i_3] [0]) + 962294337))));
        var_25 = ((((((arr_5 [10] [i_3]) ^ 32969))) ? var_9 : (var_1 + 13)));
    }
    for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
    {
        var_26 = ((59774 ? (arr_6 [2] [i_4] [14]) : ((((max(170, 1))) ? (max(var_13, 10)) : (((18446744073709551607 ? 5770 : var_2)))))));
        var_27 = (((((var_12 ? var_12 : (arr_3 [i_4])))) ? ((max(((var_16 ? 0 : -50)), ((max(59782, var_11)))))) : (arr_4 [i_4] [1] [i_4])));
        var_28 = ((-(arr_11 [i_4])));
    }
    #pragma endscop
}
