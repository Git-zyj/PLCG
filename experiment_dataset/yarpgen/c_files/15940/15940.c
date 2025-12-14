/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15940
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        var_18 = (((((var_8 ? (arr_1 [i_0 - 1]) : (arr_0 [i_0])))) + -6384139563630799129));
        arr_3 [i_0] = ((+(((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_2 [1] [16])))));
    }
    for (int i_1 = 3; i_1 < 10;i_1 += 1)
    {
        var_19 = ((var_13 ? (min(var_9, (254 || var_8))) : -440311081));
        arr_8 [i_1] = 485806753;
        var_20 = ((+(((arr_5 [i_1 + 2] [1]) - (arr_5 [i_1 - 1] [i_1 - 2])))));
        var_21 = 14389771720090098280;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 0;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        for (int i_5 = 4; i_5 < 11;i_5 += 1)
                        {
                            {
                                arr_18 [i_1] [11] [11] [11] [i_1] = (arr_4 [i_1] [i_1]);
                                var_22 = (-111 && 76);
                                var_23 = ((-(arr_2 [i_1] [i_1])));
                            }
                        }
                    }
                    var_24 = (max(((!((max(var_17, 1))))), (((arr_1 [i_1 + 1]) || var_0))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            {
                                var_25 = ((var_15 > (arr_4 [i_1] [i_7])));
                                var_26 = ((-(!var_16)));
                                var_27 = var_17;
                                arr_24 [i_1] [i_2] [i_6] [i_7] = 13;
                                arr_25 [i_1] [i_1] [i_1] [i_6] [i_1] [i_7] = (((max((!-6384139563630799129), (arr_17 [i_1] [i_1] [i_1] [i_6] [i_1]))) || ((((((arr_1 [i_1]) ? var_15 : 3809160542))) && (!469762048)))));
                            }
                        }
                    }
                    var_28 = (min(var_28, ((min(((!(var_1 || 6384139563630799128))), 1)))));
                }
            }
        }
    }
    var_29 = ((-(((var_3 ? var_9 : -32744)))));
    #pragma endscop
}
