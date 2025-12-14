/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129966
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((((var_2 < var_7) % ((var_0 ? var_4 : var_2))))) && (((0 ? ((var_5 ? var_4 : var_4)) : var_4)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_2] = (((((!(((var_9 << (var_2 - 31))))))) >> (((var_0 - var_6) - 1413302542))));
                    var_12 = (min(var_12, (((((((-25243 ? 18 : -4010900784782059906)) >> (65535 - 65485)))) ? ((var_6 ? (arr_6 [i_0 + 1] [i_0 + 2]) : (arr_0 [i_0 + 1]))) : (((((arr_5 [i_0 - 1]) || (arr_5 [i_0 + 1])))))))));

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 23;i_3 += 1)
                    {

                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            arr_12 [i_0] = ((~(arr_8 [i_3] [i_3 - 1] [i_3] [i_3 - 1] [i_3])));
                            var_13 = (max(var_13, (((var_4 >> (((arr_10 [i_0 - 1] [i_0 - 1] [i_3 - 2] [i_3 - 1]) + 1199438185)))))));
                        }
                        arr_13 [i_0] [i_1] [i_2] [i_3 - 2] = (1 % 21415);

                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            arr_16 [i_3 - 2] [i_3] = var_9;
                            var_14 = ((380910364 ? (arr_11 [i_0 + 2] [i_0 - 1] [i_0] [i_0 - 1] [i_3 + 2]) : (arr_5 [i_0 - 1])));
                            var_15 = (max(var_15, ((((arr_11 [i_0 - 1] [8] [i_2] [i_3 + 1] [i_5]) + (arr_11 [i_0 + 1] [i_1] [i_2] [i_1] [i_1]))))));
                            var_16 = (arr_1 [i_0 + 1]);
                        }
                        var_17 -= (arr_1 [i_0]);
                        arr_17 [i_0 - 1] [i_3 + 1] = (arr_11 [i_0] [i_1] [i_2] [i_2] [i_3 + 2]);
                    }
                }
            }
        }
    }
    var_18 = (max(var_18, var_2));
    var_19 = (((1 >> (673615442 - 673615394))));
    #pragma endscop
}
