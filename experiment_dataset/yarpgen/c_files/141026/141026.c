/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141026
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((var_5 % 2) * var_1)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] = ((~(min(32874, 4709046348000057380))));

                for (int i_2 = 2; i_2 < 8;i_2 += 1)
                {
                    var_15 = ((((arr_5 [i_2 - 2] [i_2]) ^ var_2)));

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        var_16 -= 23703;
                        var_17 = ((arr_0 [i_3] [i_2]) ? (arr_12 [9] [i_0] [i_0] [i_0] [i_3] [i_3]) : var_5);
                    }
                    arr_13 [i_0] [i_2] = (min(((((min((arr_10 [6] [i_1]), var_6))) ? (var_0 * var_6) : (min(-4709046348000057380, (arr_12 [i_0] [i_0] [i_0] [i_1] [i_2] [i_1]))))), (((((arr_8 [i_0] [i_0] [i_0] [i_0]) >> (var_11 - 13536868106860383864)))))));
                    var_18 = (min((((((17800557013447163981 ? var_1 : 3662201889242871142))) && (arr_12 [i_1] [i_2 + 3] [i_2] [i_2 + 3] [1] [i_2 + 3]))), ((((16383 ? 3662201889242871135 : 32857)) >= ((min(var_0, (arr_1 [1]))))))));
                }
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    var_19 = var_2;
                    var_20 = (~-3662201889242871119);
                }
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    arr_18 [i_5] = 4294967278;
                    var_21 = ((((min(var_3, (((arr_11 [7]) ? var_13 : (-9223372036854775807 - 1)))))) ? ((-(arr_3 [i_0] [i_0] [i_0]))) : 6));
                }
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 11;i_8 += 1)
                        {
                            {
                                arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = var_9;
                                var_22 = (((!var_3) * (((min(var_0, var_0)) ? (arr_26 [i_6]) : var_7))));
                            }
                        }
                    }
                    var_23 = (202 && 65530);
                    arr_29 [i_0] [1] |= (((~0) ? (min(var_12, (arr_19 [i_6] [i_6] [i_1] [i_0]))) : 3662201889242871129));
                    var_24 = ((5127570425536190371 ? 4294967295 : 215));
                    arr_30 [3] [i_6] = (arr_6 [i_6] [i_1] [i_6]);
                }
                var_25 += ((((((!(~156))))) * (((min(var_3, 0)) * (((((arr_9 [i_0] [i_0] [i_1]) && var_5))))))));
            }
        }
    }
    var_26 += ((((((54238 ? var_11 : var_2)))) ? -1709789240 : var_2));
    #pragma endscop
}
