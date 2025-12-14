/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110539
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_8;
    var_17 = (1 > 17448491105358531856);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_12 [14] [i_1] [i_3] [i_1] &= (((arr_8 [i_4]) * -101));
                                var_18 = ((((min((arr_3 [i_1 - 2] [i_2] [i_3]), (arr_2 [i_0] [i_0])))) ? var_11 : (((((!(arr_1 [i_3]))))))));
                                arr_13 [i_1] [i_1] [18] [11] = var_2;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 16;i_6 += 1)
                        {
                            {
                                var_19 = ((-(~var_6)));
                                var_20 = (min((18044958558048204317 - var_6), ((((arr_16 [i_1] [i_5] [1] [i_1] [i_0] [i_1]) > (arr_17 [i_0] [i_1 + 2] [4] [i_0] [i_0]))))));
                                arr_18 [13] [i_1] [i_0] [i_1] [i_0] = ((var_9 ? (min((arr_6 [i_1]), (arr_2 [i_2] [i_2 - 1]))) : (((~(arr_9 [13] [13] [13] [i_2 + 1]))))));
                            }
                        }
                    }
                    arr_19 [i_0] [i_0] [i_1] = (arr_14 [i_0] [i_0] [i_1 - 2] [i_1 - 1] [i_0]);
                }
                arr_20 [4] &= var_6;
                var_21 = (max((max(var_14, (arr_2 [5] [5]))), (min((((var_14 ? var_0 : 54697))), (arr_14 [i_0] [8] [i_0] [i_0] [0])))));
            }
        }
    }
    var_22 = var_8;
    var_23 = ((((((var_9 ? 6 : 0)) ? -var_11 : (3952270 > 1)))));
    #pragma endscop
}
