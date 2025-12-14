/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17400
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(6725724124025474666, ((min(-2147483647, 9223372036854775803)))));
    var_11 = (max(var_11, -4388650095283030892));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_12 = 101;
                    arr_8 [i_0] [i_0] [i_2] = (arr_4 [i_0] [i_1]);

                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        var_13 = (arr_1 [i_0]);
                        var_14 = arr_7 [i_3] [i_2] [i_1] [i_0];
                    }
                    for (int i_4 = 2; i_4 < 10;i_4 += 1)
                    {
                        arr_13 [i_0] [i_0] [i_0] [i_4] [i_4] = (min(-4308, 6));
                        arr_14 [i_0] [i_0] [i_2] [i_4] [i_4] = (max(32522, -3863013654338039610));
                    }
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        var_15 = (max((min((arr_15 [i_0] [i_0] [i_2]), (arr_7 [i_0] [i_1] [i_0] [i_5]))), (min((max((arr_15 [i_1] [i_1] [i_1]), (arr_7 [i_5] [i_1] [i_5] [i_5]))), (arr_3 [i_2])))));
                        arr_17 [i_0] [i_0] = min((min((arr_2 [i_1]), (max(0, 200092881603122653)))), (arr_3 [i_0]));
                        var_16 *= ((min((min((arr_3 [i_2]), (arr_6 [i_5] [i_2] [i_0]))), (arr_6 [i_1] [i_2] [i_5]))));

                        for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
                        {
                            var_17 = (min((((max(5098154118733038314, -5731726536273603504)))), (arr_0 [i_2])));
                            var_18 = (min(((min((arr_1 [i_2]), (arr_6 [i_0] [i_0] [i_0])))), (max((min((arr_4 [i_0] [i_0]), (arr_11 [i_0] [i_5]))), ((min(-15, 0)))))));
                            arr_20 [i_0] [i_1] [i_2] = (max(((min(((max(44848, 253))), (arr_0 [i_1])))), (min((min((arr_1 [i_0]), (arr_15 [i_0] [i_6] [i_2]))), (min(8498251672980966055, 1554136979940095901))))));
                            var_19 = (min((max((arr_9 [i_2] [i_6]), ((min(2147483636, 4388650095283030891))))), ((max(((max((arr_18 [i_0] [i_0] [i_1] [i_2] [i_5] [i_6] [i_6]), (arr_18 [i_0] [i_0] [i_6] [i_5] [i_0] [i_0] [i_1])))), (arr_12 [i_6] [i_5] [i_1] [i_1] [i_0]))))));
                            var_20 += (min((arr_2 [i_0]), (arr_2 [i_0])));
                        }
                        for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
                        {
                            var_21 = min((arr_1 [i_7]), (arr_5 [i_5]));
                            var_22 = (arr_2 [i_7]);
                        }
                    }
                    var_23 = 61556;
                }
            }
        }
    }
    var_24 = (max(0, var_4));
    #pragma endscop
}
