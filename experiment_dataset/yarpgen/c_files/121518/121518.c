/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121518
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += ((((((((var_12 + 2147483647) << (1945743975 - 1945743975))) - 25))) ? ((min(var_7, (var_3 / var_12)))) : var_13));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_15 = ((((max((min(var_6, (arr_1 [i_0] [i_1]))), ((min(2147483647, var_7)))))) != (arr_8 [0] [1] [0])));
                    arr_9 [i_2] [i_0] [i_2] = (min((((!((max(var_6, var_1)))))), (max(((min(var_1, var_10))), var_13))));
                }
            }
        }
        arr_10 [i_0] [i_0] = ((((1 ? var_3 : (2349223320 >= 1945743971))) / 1945743956));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 8;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 8;i_6 += 1)
                        {
                            {
                                var_16 = 2349223321;
                                arr_19 [i_0] [9] [i_4] [i_5] [8] = (((!var_12) >= (((arr_4 [i_5 - 3] [i_0]) ? ((var_7 ? (arr_7 [8] [i_3] [i_6]) : 1759077489)) : (2349223326 - 1945743981)))));
                                var_17 = ((-var_11 || (((((max(var_10, 11487289148306921132))) ? (var_7 && var_8) : 6959454925402630480)))));
                            }
                        }
                    }
                    arr_20 [i_0] [i_0] [i_0] [i_0] = ((((min(((((arr_11 [i_4] [i_4] [i_4]) || var_0))), ((2349223343 ? 2250709955 : (arr_12 [10])))))) ? ((((min(var_11, var_3))) ? 2535889787 : (((147 / (arr_11 [i_3] [i_3] [i_3])))))) : (min((((arr_2 [4] [9]) % (arr_1 [i_0] [8]))), -46502))));
                    arr_21 [i_0] [i_3] [i_3] [i_0] = -var_8;

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        var_18 = (~3075486488911352538);
                        var_19 += (((arr_4 [i_3] [i_3]) != 0));
                        var_20 += (!1854);
                        arr_25 [i_0] [i_0] [1] = (((((var_7 & (arr_8 [i_0] [3] [6])))) ? (arr_12 [i_0]) : (arr_12 [i_0])));
                    }
                    /* vectorizable */
                    for (int i_8 = 2; i_8 < 9;i_8 += 1)
                    {
                        var_21 = (((arr_23 [i_0] [i_0] [i_0] [i_0] [3]) ? (arr_15 [i_8 - 2] [i_8 - 2] [i_8 + 1] [i_8 - 1]) : (arr_14 [i_8 - 1])));
                        var_22 = (1 ? var_5 : (var_1 & var_4));
                        var_23 += 63677;
                        var_24 *= 0;
                    }
                }
            }
        }
        arr_28 [i_0] [i_0] = var_9;
    }
    #pragma endscop
}
