/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143907
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_17 = var_7;

                /* vectorizable */
                for (int i_2 = 1; i_2 < 9;i_2 += 1) /* same iter space */
                {
                    var_18 = ((!(arr_8 [i_2 + 1])));
                    arr_10 [i_0] [i_0] [i_0] |= (arr_6 [i_0] [i_1] [i_2 + 1]);
                    arr_11 [i_2] [i_2] [i_2 - 1] [1] = ((-33 ? 2054053462 : ((((arr_1 [i_1] [i_1]) ? 12 : -25033)))));
                }
                for (int i_3 = 1; i_3 < 9;i_3 += 1) /* same iter space */
                {

                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        arr_17 [i_0] [i_0] [5] [i_0] = ((((7980362534185291743 ? 12 : 2068982489))) ? (((((min(var_9, 8506446386836163376))) ? ((~(arr_12 [i_0] [i_0] [i_4]))) : var_9))) : ((-(min(3489246774, 16)))));
                        arr_18 [8] [9] = (min(51756, (min(192, (max(2150323951, var_10))))));
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 6;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_19 = (min((arr_21 [i_0] [i_1] [6] [i_5 + 2] [i_6]), var_10));
                                var_20 = (max(var_20, -4643487470461020732));
                                arr_25 [i_0] [i_1] [i_3] [i_3] [i_5 - 2] [i_6] = 1572864;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 10;i_8 += 1)
                        {
                            {
                                var_21 = (!4094);
                                arr_32 [i_0] [4] [4] [i_1] [i_3] [i_7] [i_8] = ((~(min((max(-261748116268850119, 5813206757954726945)), (((7 ? 0 : var_12)))))));
                            }
                        }
                    }
                    var_22 = (arr_28 [i_0] [i_1] [i_1] [i_3 - 1] [i_3 - 1] [i_1] [i_0]);
                }
                var_23 = (max(var_23, ((min((23 ^ var_14), (max((((var_15 ? var_9 : var_12))), var_2)))))));
            }
        }
    }
    #pragma endscop
}
