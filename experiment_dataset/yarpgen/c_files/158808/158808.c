/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158808
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_17 = ((((((arr_0 [i_0]) && (((var_13 ? var_9 : 5100440969388696596)))))) - -var_10));
                var_18 = max(((min(var_4, -3255978591501256155))), (((!((min(var_9, var_4)))))));
                arr_4 [i_0] [i_0] [i_1] = ((((~(arr_2 [i_0]))) << (!var_7)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            {

                for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
                {
                    var_19 ^= (((max(-var_6, 3255978591501256155))) ? (((!(arr_8 [i_4])))) : ((var_15 + (arr_7 [i_4]))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 0;i_6 += 1)
                        {
                            {
                                var_20 = (max((~2164663517184), (144 && 4294967295)));
                                var_21 = (((((var_14 & (arr_6 [i_2])) >> (var_13 / var_9)))));
                                arr_17 [i_6] [i_4] [i_4] [i_4] [i_2] [i_4] [i_2] = (min((min(var_0, var_1)), var_9));
                                arr_18 [i_2] [i_3] [i_4] [i_5] [i_4] [i_6] = var_13;
                            }
                        }
                    }
                    var_22 = (max(var_22, ((!((((min(3255978591501256148, var_2)) | (((~(arr_15 [i_2] [i_4] [i_2] [i_2] [i_2] [i_2] [i_2])))))))))));
                }
                for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
                {

                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        var_23 = ((+((min((arr_13 [i_8] [3] [i_3] [i_3] [i_2] [i_2]), (arr_20 [i_2] [i_2]))))));
                        var_24 = (min(var_24, (~var_1)));
                    }
                    var_25 ^= (max((arr_16 [1] [i_2] [i_2] [0] [i_7]), (~var_0)));
                    var_26 = (min(((((((arr_13 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) | var_7)) <= (min(var_16, var_7))))), var_8));
                    arr_24 [i_2] [3] [8] [i_2] = -3255978591501256151;
                    arr_25 [i_2] [i_3] [i_7] = (((+(min((arr_23 [i_7] [i_3] [14]), var_7)))));
                }
                var_27 = (max((max(((1 ? 1071644672 : 7)), (((!(arr_9 [i_3])))))), (arr_11 [i_2] [i_2] [i_2] [i_2])));
                var_28 ^= (max(var_10, var_5));
            }
        }
    }
    var_29 = (max(var_29, ((((((max(31601, var_2)) ? var_1 : (~1))))))));
    #pragma endscop
}
