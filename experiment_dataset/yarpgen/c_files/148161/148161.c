/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148161
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_11;
    var_13 = (((!var_1) ? 12 : 65524));
    var_14 = ((var_6 ? ((1229013373 ? var_10 : 65528)) : var_7));

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = (~var_11);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        var_15 = (!((min((min((arr_8 [i_0]), 0)), var_2))));

                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            arr_13 [i_0] [i_0] [i_2 - 2] [i_3] [i_0] = -42;
                            arr_14 [i_0] [i_0 + 3] [i_1] [i_0] [i_2] [i_3] [i_0] = 1229013373;
                        }
                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            arr_18 [i_0] [i_0] [i_1] [i_2] [i_3] [i_0] [i_0] = (min((((18446744073709551601 != ((((arr_7 [i_5] [i_3] [i_2] [i_0]) ? 26711 : (arr_1 [i_5] [i_5]))))))), ((((max((arr_5 [9] [i_3]), 12609))) ? (arr_0 [i_0]) : ((min(var_11, var_7)))))));
                            var_16 = (max((((arr_3 [i_0] [1]) >> (var_5 + 119))), (((arr_1 [3] [i_1]) & ((-7181380997830156387 ? 65524 : var_10))))));
                            arr_19 [16] [i_0 + 3] [i_1] [i_3] [i_0] [i_3] [i_1] = (!var_10);
                        }
                        for (int i_6 = 2; i_6 < 15;i_6 += 1)
                        {
                            arr_23 [2] [9] [i_0] [i_1] [i_1] = 33;
                            var_17 = var_11;
                            arr_24 [i_0] [i_1] [15] [i_3] [i_3] [14] [i_2 - 4] = (((((((min((arr_4 [i_0] [i_1] [i_1]), var_4))) ? ((32748 ? var_8 : (arr_9 [i_3] [i_6]))) : var_5))) != (min((max((arr_6 [i_2 - 1] [i_1] [17]), (arr_11 [i_3] [i_1] [i_2] [i_3] [i_6 + 3] [i_2]))), ((8 ? (arr_7 [i_2] [i_2] [i_2] [i_2 - 3]) : (arr_0 [i_0])))))));
                        }
                        /* vectorizable */
                        for (int i_7 = 1; i_7 < 16;i_7 += 1)
                        {
                            var_18 = (arr_20 [i_0] [i_0] [10] [i_3] [i_2] [10]);
                            var_19 = var_11;
                            var_20 += (65502 - var_5);
                            var_21 = (((arr_8 [i_0]) ? var_7 : (arr_8 [i_0])));
                        }
                        var_22 ^= ((!(!11)));
                        arr_27 [i_0] [i_1] [i_2 - 3] [i_0] = ((((min((((var_0 ? (arr_7 [i_0 + 1] [i_0 + 1] [i_0] [i_1]) : (arr_21 [17] [15] [i_2] [i_2 + 1] [0])))), ((-(arr_11 [i_0 + 1] [i_0 + 2] [i_1] [i_2] [i_3] [1])))))) ? (((max((arr_1 [i_1] [i_1]), (arr_5 [3] [i_1]))) + ((((arr_20 [i_1] [i_1] [i_0] [i_0] [1] [i_1]) > -384787036))))) : ((((max((arr_6 [9] [i_0] [i_0]), (arr_3 [i_0] [i_2]))) != (((min(32746, var_0)))))))));
                    }
                }
            }
        }
    }
    var_23 = (((((-(2937690004 * 148)))) ? var_4 : (((var_7 <= (max(var_0, 0)))))));
    #pragma endscop
}
