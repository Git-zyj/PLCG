/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11889
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, (((((min((((var_0 ? var_1 : 2649323803))), (min(var_8, -13))))) && (((var_6 ? (max(255, var_12)) : var_12))))))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_14 = (var_3 ? (min(1018699107, var_12)) : (8395246725621023423 >= var_11));
        var_15 = ((799399565 ? (0 <= 1230401827) : 6266709679018318540));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_16 = (max(var_16, var_3));
                    var_17 = (((((max(var_9, var_6)) ? 15 : (((var_9 ? var_3 : 6053)))))));
                }
            }
        }
    }
    for (int i_3 = 2; i_3 < 16;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 15;i_5 += 1)
            {
                {
                    var_18 = (((((var_2 ? var_7 : var_9))) ? (((-(-127 - 1)))) : (((((var_8 ? var_0 : var_12))) ? -48 : 3))));
                    var_19 = (((1 % -1258734092) ? 265043228 : (var_9 + var_12)));
                    var_20 = (((1922383271 ? ((var_3 ? 1 : var_11) : (481010564 * var_3)))));
                    arr_15 [i_3] [i_4] [i_5] = ((((((max(2, 25))) ? (var_2 / var_0) : (~12502618502993615181))) >= (((max(var_11, 14))))));
                }
            }
        }
        var_21 = ((((var_3 ? var_7 : var_0)) % (~var_4)));
        var_22 += ((~((-31 ? 3697148152306029539 : var_12))));
        var_23 = (max((min((min(var_3, -669462125)), 2117747183)), (65535 | 1)));
        arr_16 [i_3] = (max(5604024423715690528, 1792));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 23;i_6 += 1)
    {
        arr_19 [i_6] [i_6] = ((var_0 ? 9245831273350054284 : 3447738443));
        var_24 = -1920;
    }
    var_25 = ((((var_1 << ((((max(85, var_3))) - 248)))) > (((!(var_6 + var_4))))));

    for (int i_7 = 0; i_7 < 10;i_7 += 1)
    {
        arr_22 [i_7] [i_7] = ((max(2, 1)));
        var_26 = ((((((var_7 + 9223372036854775807) << (((-1080198306 + 1080198353) - 47))))) ? (((max(1, var_3)))) : -var_7));
    }
    #pragma endscop
}
