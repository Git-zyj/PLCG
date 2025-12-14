/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170554
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [i_0] = var_7;
                arr_7 [i_0] [i_0] = (max(28274, 2985613941905388243));
                arr_8 [i_0] [i_1] [i_0] = ((~(min((arr_1 [i_1]), (1 ^ var_6)))));
                var_15 = ((((arr_1 [i_0]) && (arr_5 [i_1]))));
            }
        }
    }
    var_16 = (var_0 == (((((26 ? 2147483630 : 2522300384899506169))) ? var_10 : var_14)));
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 9;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            {
                arr_15 [i_2] [i_3] [i_2] = (min(2522300384899506166, ((min((arr_1 [i_2 - 1]), var_13)))));
                arr_16 [i_2] = (!(((var_6 ^ ((min(var_2, var_14)))))));
                arr_17 [i_2] [i_3] [i_3] = ((((arr_2 [i_2]) < (arr_11 [i_2 + 4] [i_3]))) ? ((~(arr_12 [i_2] [i_2 + 1]))) : (arr_3 [i_2 + 2] [i_3]));
                var_17 = (((((-2147483644 > (arr_13 [i_2] [i_2])))) == ((-(((var_3 || (arr_0 [i_2] [i_3]))))))));
            }
        }
    }
    var_18 = 6998160902373385966;
    #pragma endscop
}
