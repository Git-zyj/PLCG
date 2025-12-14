/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175165
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                var_20 = (((!1280379684) ? ((((((35641 ? (arr_0 [i_0]) : (arr_5 [i_0] [8] [i_0])))) && ((((arr_3 [10]) ? (arr_1 [i_0]) : 17686491252096531472)))))) : ((min(1, 1)))));
                arr_6 [i_0] [i_1] [i_0] = var_7;

                for (int i_2 = 3; i_2 < 17;i_2 += 1)
                {
                    arr_10 [i_0] [i_0] [i_0] [8] = (~35641);
                    arr_11 [i_0] [17] [i_0] = 3340398503110606496;
                    arr_12 [i_0] [16] [i_1 - 2] [i_0] = ((((var_8 ? var_4 : (arr_8 [i_2 - 3] [i_2] [i_1]))) ^ (arr_2 [i_0])));

                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        var_21 *= (arr_7 [i_3] [9]);

                        for (int i_4 = 4; i_4 < 17;i_4 += 1)
                        {
                            arr_18 [17] [i_0] [i_2] [i_3 - 2] [i_3] [i_4 + 1] = var_2;
                            var_22 *= (((((((min((arr_17 [i_0] [i_0] [i_3 + 1]), var_3))) ? (arr_16 [i_3 + 2] [i_2 - 3] [i_2 - 2] [i_1 - 3] [i_3 + 2] [i_3 + 2] [i_0]) : 760252821613020144))) ? (((arr_4 [i_2 - 2]) + 159)) : (arr_13 [i_2 - 3] [3] [i_2 - 1] [14] [i_2 - 1] [i_2 - 3])));
                        }
                        var_23 = var_4;
                    }
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        var_24 = 9223372036854775807;
                        var_25 ^= (((((9223372036854775807 ? (arr_22 [i_1 - 3] [i_1 - 3] [i_1] [i_2 - 1] [i_5]) : (arr_3 [i_1 + 1])))) ? 2147483647 : (((arr_19 [1] [i_1] [i_2] [10] [i_5] [i_5]) ^ (arr_17 [5] [i_1] [i_2])))));
                    }
                }
            }
        }
    }
    var_26 = 37588;
    var_27 = ((((((1 ? 1 : var_14)) > var_9)) ? var_17 : var_2));

    for (int i_6 = 2; i_6 < 19;i_6 += 1)
    {
        arr_25 [i_6] [i_6] = ((-4098449622292077326 ? 1258643186 : 0));
        var_28 += 0;
        arr_26 [i_6] = (arr_23 [i_6 + 1]);
    }
    #pragma endscop
}
