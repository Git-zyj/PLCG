/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151361
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_1] = (((((arr_5 [i_0] [i_2] [i_0] [i_0]) < (var_2 + 13))) ? (arr_5 [i_0] [0] [i_1] [i_2]) : (min(7, -1457780706092038492))));
                    var_19 = ((((max(9223372036854775807, 15))) ? -65528 : ((9223372036854775807 | (~var_15)))));

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            var_20 = (-(((arr_10 [i_4] [i_3] [9] [8] [8] [i_0]) / 2408458157899758895)));
                            var_21 = var_3;
                            var_22 = (~((65535 | (arr_0 [i_2]))));
                            var_23 = (min(var_23, (arr_11 [i_0] [i_0] [i_0] [i_0] [19])));
                        }
                        arr_14 [i_0] [i_0] [i_1] [i_0] [i_0] = (((((var_7 - (arr_13 [i_3] [i_1] [i_2] [i_2] [i_1] [i_1] [1])))) ? ((-(arr_9 [i_3]))) : ((-(arr_9 [i_0])))));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        var_24 = (((arr_18 [i_5] [i_2] [i_1] [i_0]) | 2452109169819168933));
                        var_25 = 31;
                        var_26 = (arr_4 [i_2] [i_1] [i_1]);
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            var_27 = (arr_11 [i_0] [i_1] [i_2] [i_1] [i_7]);
                            arr_23 [i_0] [i_1] [i_0] [i_0] [i_0] = (max((arr_8 [i_1] [i_1] [i_2] [i_0]), 9105640523849348953));
                            arr_24 [i_1] [i_7] [i_7] [i_7] = -6407974527502286845;
                            arr_25 [i_6] [i_1] [i_0] = (max((((arr_15 [i_0]) ? (!var_15) : ((((arr_20 [i_0] [i_0] [19] [i_6] [19]) || (arr_8 [i_1] [i_6] [i_2] [i_1])))))), ((((arr_12 [i_0] [i_1]) < (arr_15 [i_0]))))));
                        }
                        /* vectorizable */
                        for (int i_8 = 1; i_8 < 1;i_8 += 1)
                        {
                            arr_29 [19] [i_0] [i_1] [i_1] [i_0] = var_13;
                            arr_30 [i_0] [i_1] [4] [i_1] [i_8 - 1] = ((((var_13 ? var_11 : -9057469574073867358)) < -9223372036854775807));
                            var_28 = (!67108863);
                            var_29 = (min(var_29, 15994634903890382689));
                        }
                        var_30 = ((-(arr_28 [1] [17] [i_6] [i_2] [i_1] [i_0])));
                    }
                }
            }
        }
    }
    var_31 = (min(var_31, (((((134217712 ? -9112690807098038166 : 65505)))))));
    #pragma endscop
}
