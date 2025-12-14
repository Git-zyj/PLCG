/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180035
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] [i_0] [i_0] = (max((arr_4 [i_0] [i_0]), ((((arr_4 [i_0] [i_0]) && (arr_4 [i_0] [i_0]))))));
                    var_17 += ((var_16 <= (((((arr_5 [i_0] [i_0] [i_1] [i_2]) && (arr_1 [i_0] [i_2])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_18 = 254225614105680609;
                                arr_13 [i_0] [i_0] [i_2] [i_3] [i_4] = (max(((var_3 >> ((32 ? 1 : 9780558943382722220)))), (150 % 1)));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 2; i_5 < 16;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 4; i_7 < 16;i_7 += 1)
            {
                {
                    var_19 += (max(var_10, 9223372036854775807));
                    var_20 = ((~(((((2059067447 << (((arr_2 [i_5] [i_7 - 2]) - 10121087903251601414))))) ? ((var_16 ? (arr_4 [i_7 - 2] [i_5]) : -6)) : var_12))));
                }
            }
        }
    }
    var_21 = var_0;
    var_22 = 9209652370759144990;

    for (int i_8 = 1; i_8 < 12;i_8 += 1)
    {
        var_23 = (min(-1401475342, (~-3)));
        arr_24 [i_8] [i_8 - 1] = var_11;
        var_24 = (~((min(6, 1))));
    }
    #pragma endscop
}
