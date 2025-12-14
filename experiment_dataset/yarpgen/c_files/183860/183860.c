/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183860
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_3;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_13 = (min(var_13, var_3));
        arr_3 [i_0] [i_0] = var_11;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    arr_8 [i_2] = (var_10 * 1);
                    arr_9 [3] [i_1] [i_2] [i_2] = var_1;
                    arr_10 [i_2] [i_0] = var_7;
                    arr_11 [i_0] [i_1] [i_2] = (min(((((min(var_1, var_9))) ? (((arr_1 [i_1] [i_2 - 1]) ? (arr_6 [i_0] [i_0] [i_0] [i_0]) : var_8)) : var_8)), (min((arr_6 [i_2] [i_2] [i_2] [i_2 - 1]), (min(var_2, var_0))))));
                }
            }
        }
        arr_12 [4] = (arr_0 [i_0]);
    }
    for (int i_3 = 1; i_3 < 22;i_3 += 1)
    {
        var_14 |= (((var_3 >= var_11) ? ((((~6284915256760282756) ? var_0 : var_4))) : ((((min(var_5, var_10))) ? (((var_1 ? var_3 : 8271363193287057371))) : (arr_13 [i_3 + 2])))));

        for (int i_4 = 2; i_4 < 23;i_4 += 1)
        {
            arr_18 [i_4 + 1] [i_3] = (!var_10);
            arr_19 [i_3] [i_3 - 1] = var_4;
            arr_20 [i_3] [i_3] [i_4] = var_10;
            arr_21 [i_4] = var_7;
        }
        arr_22 [i_3] = (((((min(var_3, var_0)) / (~var_7)))) != (min((((arr_16 [i_3 + 1] [i_3] [i_3]) ? var_11 : (arr_16 [i_3] [i_3] [i_3]))), var_0)));
    }
    var_15 &= (((var_9 % var_11) % var_1));
    var_16 *= ((!((min((var_1 || var_9), ((var_11 ? var_1 : var_2)))))));
    var_17 = ((((((!var_1) ? (min(-6284915256760282756, -6284915256760282745)) : var_6))) ? var_8 : (((((255 ? 161 : -3))) ? (var_11 != var_8) : (var_4 >= var_4)))));
    #pragma endscop
}
