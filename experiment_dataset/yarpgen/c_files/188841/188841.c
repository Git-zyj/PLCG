/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188841
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_0 ? var_8 : var_6));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_11 &= ((!((((max((arr_1 [i_0]), -32645))) || 2147483647))));
        var_12 = ((7961870663392644586 ? -277348282 : 1));
        var_13 = ((32634 ? 531114292266174551 : (max((arr_0 [i_0]), 32628))));

        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            var_14 -= ((-(52 ^ 19936)));
            var_15 += (max((((((var_8 ? -371397379 : (arr_0 [i_1])))) ? var_6 : (((arr_4 [i_0] [i_1] [i_0]) ? var_4 : 95)))), (((((var_7 && (arr_0 [i_1])))) - ((max(var_9, var_6)))))));
            var_16 |= (arr_2 [i_1]);
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                var_17 -= (~2147483647);
                var_18 = ((~(arr_5 [i_0])));
                var_19 -= (!var_5);
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_20 = -var_5;
                            var_21 = (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])));
                        }
                    }
                }
            }
            arr_17 [i_0] [i_2] [i_2] = ((1 - (arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_2] [1])));
        }
        for (int i_6 = 1; i_6 < 18;i_6 += 1)
        {
            var_22 = ((((min((arr_10 [i_6 - 1] [i_6]), (var_3 | -11413)))) ? ((max(var_9, var_2))) : 1));
            arr_21 [i_0] [i_0] = ((((1 % -22) ? (var_1 > var_6) : 50216)));
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 1; i_7 < 1;i_7 += 1)
    {
        for (int i_8 = 3; i_8 < 10;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 13;i_9 += 1)
            {
                {
                    var_23 = (max(var_23, ((min(((-11413 ? (arr_1 [i_8 + 2]) : (arr_2 [18]))), (((arr_1 [i_8 + 2]) + (arr_1 [i_8 + 2]))))))));
                    arr_29 [i_7] [1] [1] [1] = (min((!var_0), (((arr_6 [1] [i_8 + 1]) | ((~(arr_23 [i_9])))))));
                }
            }
        }
    }
    #pragma endscop
}
