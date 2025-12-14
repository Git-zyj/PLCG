/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13017
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= ((var_6 ? var_5 : 0));
    var_11 -= (~((~(min(var_3, var_6)))));

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {
                        arr_10 [i_3] [i_3] = var_9;

                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            arr_14 [i_4] [i_3] [i_2] [i_1 - 1] [i_0] = (((((~((min((arr_11 [i_0] [i_0] [i_3] [i_3] [i_3]), (arr_11 [i_0] [i_0] [i_0] [i_3] [i_4]))))))) | (((arr_12 [i_0 - 1] [i_2 + 2]) ? (arr_12 [i_0 - 1] [i_2 - 1]) : 3880225119))));
                            var_12 = ((!((((arr_13 [i_0] [i_0] [i_0]) ? (min(var_5, (arr_8 [i_0] [i_1] [i_3] [i_4]))) : ((((!(arr_0 [11]))))))))));
                            var_13 = (min(var_13, ((((3880225119 & (arr_9 [i_0] [i_0]))) ^ (((arr_9 [i_1 - 1] [i_2 + 1]) & 1))))));
                            var_14 -= ((-(((arr_7 [i_2]) ? 5544618507270856074 : (arr_0 [i_3])))));
                            var_15 = ((16828509682466847536 + -7219664123758593737) - var_1);
                        }
                        var_16 = (min(((~((~(arr_2 [i_0] [i_0] [i_3]))))), ((~(((arr_9 [i_2] [i_2]) ? var_2 : (arr_13 [i_0 + 2] [i_0] [i_0])))))));
                        var_17 = ((414742177 & ((var_9 | (var_7 | var_3)))));
                    }
                }
            }
        }
        arr_15 [i_0 - 1] = (max(((((max(414742166, 31)) >> (((((-127 - 1) & 384)) - 360))))), (((((arr_7 [i_0]) ? (arr_0 [i_0]) : var_5)) << (((arr_2 [i_0 + 2] [i_0 + 1] [i_0 - 1]) - 1765647330692468088))))));
        var_18 = ((+(min((arr_1 [i_0 + 2]), (arr_1 [i_0 + 2])))));
    }
    for (int i_5 = 1; i_5 < 10;i_5 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 9;i_7 += 1)
            {
                {
                    var_19 = (min((arr_7 [i_7 + 3]), (arr_7 [i_5])));
                    var_20 = max((((!(arr_18 [i_5])))), (((!4294967253) ? (arr_2 [i_5] [13] [i_7]) : (arr_17 [i_5]))));
                }
            }
        }
        arr_25 [i_5] [i_5] = (min(var_3, (arr_21 [i_5] [i_5 + 1])));
    }
    for (int i_8 = 1; i_8 < 10;i_8 += 1) /* same iter space */
    {
        var_21 += (arr_23 [i_8 + 2] [2]);
        arr_30 [i_8] = (((((arr_2 [i_8 - 1] [11] [i_8]) ? (arr_5 [i_8 + 2]) : (arr_9 [i_8 + 2] [i_8])))));
        arr_31 [i_8] [i_8] = (~(arr_12 [i_8] [i_8]));
    }
    #pragma endscop
}
