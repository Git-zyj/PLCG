/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150902
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((~(((((var_2 ? var_9 : var_1))) ? var_6 : ((min(315200955, -1133980948)))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            var_17 = (max(var_15, ((var_9 ? (arr_0 [i_0] [i_0]) : var_2))));
            var_18 = (((max(((var_2 ? (arr_2 [i_0] [i_0]) : 2216317647)), ((((arr_0 [i_0] [i_1]) ? var_11 : (arr_1 [i_0])))))) << (((((arr_3 [i_1 + 1] [i_0]) ? (((var_3 / (arr_3 [i_0] [i_0])))) : ((68 ? var_6 : (arr_3 [i_0] [i_0]))))) - 73))));
            var_19 = var_1;
            arr_4 [i_0] [i_0] = var_7;
            var_20 = (min((min((arr_0 [i_1 + 1] [i_0]), (arr_0 [i_0] [i_1 - 1]))), (min(-var_10, ((-1 ? (arr_0 [i_0] [i_0]) : (arr_2 [i_0] [i_0])))))));
        }
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 22;i_4 += 1)
                {
                    {
                        var_21 = (arr_0 [i_0] [i_2]);
                        var_22 = (!var_1);
                    }
                }
            }
        }
        arr_12 [i_0] [i_0] = ((((arr_0 [i_0] [i_0]) < (arr_0 [i_0] [i_0]))));
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 21;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    var_23 = 1;
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 21;i_9 += 1)
                        {
                            {
                                var_24 = (((-(arr_20 [i_5] [i_5] [i_5] [i_8]))));
                                arr_25 [i_5] [i_7] [i_8] [i_8] = 1;
                            }
                        }
                    }
                }
            }
        }
        var_25 = ((!((min(var_10, var_10)))));
        var_26 = var_3;
        arr_26 [i_5] [i_5] = (((((var_7 ? (arr_20 [i_5] [i_5] [i_5] [i_5]) : var_14))) ? 214 : (((arr_7 [20]) ? 8388608 : (arr_13 [i_5])))));
    }
    var_27 = ((((((var_11 ? 1 : var_3)))) ? 1 : ((var_7 ? var_11 : (max(var_2, var_5))))));
    #pragma endscop
}
