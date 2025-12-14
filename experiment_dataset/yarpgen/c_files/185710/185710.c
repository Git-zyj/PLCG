/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185710
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_17 = (min(var_17, (min(((((max(var_15, (arr_4 [i_1])))) ? (arr_1 [i_1]) : (min(var_1, (arr_0 [i_1] [i_0]))))), (!28631)))));
                var_18 = (min(0, (arr_2 [i_0])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_19 = (!4433230883192832);
                            var_20 = (min((max((max((arr_2 [i_0]), 0)), ((min(-21139, 5))))), ((var_13 ? (arr_9 [i_0] [18] [i_0] [i_2] [i_2]) : 18446744073709551609))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            {
                arr_19 [i_4] [i_5] [i_5] = (min(4294967280, (min(1526119607, (arr_9 [1] [i_5] [i_5] [1] [i_4])))));
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 11;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        {
                            var_21 = ((+(((arr_23 [4] [i_5] [11]) / (((arr_22 [i_5] [10] [10] [i_7] [i_7]) ? (arr_0 [i_4] [i_5]) : var_12))))));
                            var_22 = (max((arr_5 [i_7] [i_7] [i_7] [i_7]), ((max((((var_8 || (arr_21 [12] [i_6] [1])))), 0)))));
                            var_23 ^= (!18446744073709551615);
                        }
                    }
                }
                var_24 = (!18446744073709551615);
                var_25 = (arr_9 [0] [i_5] [i_5] [i_5] [i_4]);
                var_26 += ((((((var_7 <= (arr_2 [18]))))) & ((var_0 ? (997706484 ^ var_9) : (((min(54, 165))))))));
            }
        }
    }
    var_27 = var_14;
    var_28 = ((~var_9) + (min((var_11 * var_6), 248)));
    var_29 = 1;
    #pragma endscop
}
