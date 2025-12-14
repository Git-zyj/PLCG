/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18026
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            var_14 |= ((arr_2 [i_0]) ? (((arr_2 [i_0]) / 134518960566401960)) : (-134518960566401941 >= var_6));
            arr_5 [i_0] [i_0] = ((+(((arr_0 [i_1 + 1]) << (((arr_1 [i_0]) - 170512469))))));
        }
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 0;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        {
                            var_15 = (max(var_15, ((((((-134518960566401969 ? (arr_11 [11] [i_5] [1] [i_5] [i_5]) : (arr_2 [i_2])))) ? (((arr_3 [i_5]) ? (arr_13 [i_0] [i_0] [i_0]) : (arr_8 [14]))) : ((((-4678724338446738672 || (arr_1 [i_3]))))))))));
                            arr_15 [i_0] [i_2] [i_2] [i_4] [i_5] = (((((29112253 ? (arr_6 [i_0] [i_0] [i_0]) : (arr_3 [i_5])))) ? (-134518960566401955 <= 32766) : ((~(arr_9 [i_0] [1] [1] [i_0])))));
                            arr_16 [5] [5] [i_3] [5] [i_5] [5] = (((~46) ? (arr_6 [i_2] [i_2] [i_5]) : (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])));
                            arr_17 [i_0] [i_2] [i_0] [i_4] [i_5] = (76 * -103);
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 14;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {
                        var_16 |= arr_12 [i_0] [i_0] [1] [i_0] [i_0] [i_0];

                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            arr_24 [i_0] [i_2] [i_0] = (((arr_0 [i_7]) > ((((arr_1 [i_0]) ? 16128 : var_4)))));
                            arr_25 [i_0] [i_0] [1] [2] [i_0] [1] [i_0] |= ((0 ? (((arr_20 [i_0] [i_0] [1] [i_0]) ? (arr_0 [i_0]) : 2514668819170320267)) : (arr_7 [i_6 + 1] [i_6 + 1])));
                        }
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            var_17 |= (((((arr_7 [i_2] [i_2]) ? (arr_23 [i_0] [i_0]) : (arr_26 [i_2] [i_2] [i_7] [i_7]))) % (((var_13 | (arr_21 [i_0]))))));
                            var_18 -= (((75 << 1) ? ((1328377016 ? (arr_9 [13] [i_2] [i_7] [1]) : (arr_19 [i_0]))) : (~4294967273)));
                        }
                        var_19 = ((!(((var_4 ? var_11 : (arr_4 [i_0] [i_7]))))));
                        arr_28 [i_0] [i_2] [i_6 + 2] [i_7] [i_7] = ((arr_7 [i_6 + 2] [i_6 + 1]) + (arr_7 [i_6 - 1] [i_6 + 2]));
                    }
                }
            }
        }
        var_20 |= 0;
    }
    var_21 = (max((((((var_13 ? var_11 : -117))) ? (((min(var_10, var_3)))) : ((var_12 ? var_2 : var_0)))), ((min((((var_2 ? var_7 : var_10))), (min(var_5, 52)))))));
    var_22 = var_10;
    var_23 -= ((var_1 - (max(0, (18446744073709551601 + 67104768)))));
    #pragma endscop
}
