/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146652
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((var_7 >= var_0) && (~var_10)));

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        var_12 = ((var_9 > (var_8 >= var_3)));
                        arr_12 [i_1] [i_1] [i_1] [i_3] [11] = (((arr_5 [i_0] [i_1] [i_2]) + ((((arr_7 [i_1]) % var_4)))));
                    }
                }
            }
            arr_13 [i_1] [i_0] [i_0] = (((arr_6 [i_1] [i_1] [i_0]) ^ var_9));
            var_13 += (arr_1 [i_0]);
            var_14 += (arr_7 [i_0]);

            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                arr_17 [i_0] [i_1] [i_4] = ((((var_1 ? var_10 : var_8))) ? (arr_16 [i_4] [i_1]) : ((16458180454260685357 ? 14415748672331360865 : 16458180454260685357)));
                arr_18 [i_1] [i_1] [i_1] = (((arr_14 [i_0] [i_0]) && ((((arr_1 [i_0]) >> (((arr_0 [7]) + 697564718)))))));
            }
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 18;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        {
                            var_15 = var_3;
                            arr_28 [i_1] [i_1] [i_1] [i_5] [i_6] [5] = (1988563619448866259 > 1988563619448866259);
                        }
                    }
                }
                arr_29 [i_1] [i_1] [i_1] = (((!var_2) && var_4));
            }
            for (int i_8 = 0; i_8 < 20;i_8 += 1)
            {
                var_16 = (((((var_4 == (arr_1 [i_8])))) / var_5));
                arr_33 [i_1] [i_8] = (((arr_24 [i_0] [i_0]) > var_0));
            }
        }
    }
    var_17 = min((14636224480992019502 || 16458180454260685357), ((((min(var_8, var_4))) || (var_3 && var_0))));
    #pragma endscop
}
