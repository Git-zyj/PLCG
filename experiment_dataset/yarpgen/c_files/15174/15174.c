/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15174
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_12 = ((((((arr_0 [i_0] [i_1]) * (arr_1 [i_0] [i_1])))) / (min(-var_3, (arr_1 [i_1] [i_1])))));
                var_13 ^= (112 || var_8);

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    var_14 = (min((((((~(arr_5 [i_1]))) > var_5))), var_7));
                    arr_8 [i_0] [5] [i_2] = var_0;

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {

                        for (int i_4 = 2; i_4 < 21;i_4 += 1)
                        {
                            var_15 = (((max(1514520825, ((var_7 - (arr_3 [i_2]))))) + (arr_0 [i_0] [i_0])));
                            var_16 = (arr_10 [6] [i_2] [6] [i_4 + 2]);
                            arr_13 [i_4] [21] [i_2] [5] [21] = var_7;
                        }
                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            var_17 = ((+(((arr_0 [i_5] [i_1]) ? var_2 : (((min((arr_11 [i_0] [i_1] [i_1] [i_2] [i_3] [i_5] [i_5]), (arr_6 [i_5] [i_1] [i_1] [i_1])))))))));
                            var_18 = (~11);
                            var_19 = (max(var_19, (min((((~(arr_6 [i_0] [i_0] [i_1] [i_3])))), (854405386 / 555842367592980871)))));
                        }
                        var_20 = ((-(min(((-(arr_1 [i_0] [i_0]))), (arr_11 [i_0] [i_2] [i_2] [i_1] [i_0] [i_0] [i_0])))));
                    }
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        var_21 = -23933;
                        arr_18 [i_0] [i_1] [i_6] = ((-var_7 ? (((((!-3621) < (arr_4 [i_0] [i_1] [i_2]))))) : ((var_2 + ((min(var_0, 191)))))));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {

                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            var_22 = (1514520825 < 1);
                            arr_25 [i_0] [i_0] [i_2] [i_7] [i_8] = ((((-23933 + (arr_19 [i_1] [i_1] [i_1] [i_1] [12] [i_1]))) >= (((var_0 || (arr_17 [i_0] [i_0]))))));
                        }
                        for (int i_9 = 3; i_9 < 22;i_9 += 1)
                        {
                            var_23 = (((arr_26 [i_0] [i_1] [i_9 + 1] [i_9] [7]) ? var_7 : (arr_26 [i_0] [11] [i_9 + 1] [6] [i_9])));
                            arr_28 [i_7] [i_7] = (((arr_24 [12] [12] [i_1] [i_1]) * (arr_1 [i_2] [i_2])));
                        }
                        var_24 = (4611686018427387904 * 1);
                        var_25 = (((-714043051531030544 + 9223372036854775807) >> (var_9 + 1425360458)));
                    }
                }
            }
        }
    }
    var_26 = ((var_6 ? (!var_1) : (((~var_1) / (9223372036854775807 | var_8)))));
    #pragma endscop
}
