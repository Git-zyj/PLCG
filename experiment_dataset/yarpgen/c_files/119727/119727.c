/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119727
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_6;

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] = min((((~(arr_1 [i_0 - 1] [i_0 + 4])))), (((!23852) ? ((min(9223372036854775807, -23853))) : 4067449184807817427)));
        var_13 = var_0;
        var_14 = (min(var_14, ((((max(-0, 26)) | var_8)))));
    }
    for (int i_1 = 1; i_1 < 24;i_1 += 1)
    {
        arr_7 [i_1 - 1] = (min(78, ((~((var_11 & (arr_6 [i_1 - 1])))))));
        var_15 = ((-(((((var_0 ? var_6 : (arr_5 [i_1])))) ? (arr_6 [i_1 + 1]) : (arr_6 [i_1 - 1])))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            arr_20 [i_1] [i_2] [i_3] [i_3] = (arr_13 [i_5] [i_3]);
                            var_16 = (arr_10 [i_1 + 1]);
                        }
                        var_17 = (!((min(var_4, var_8))));
                    }
                }
            }
        }
        var_18 -= (arr_12 [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]);
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 19;i_8 += 1)
            {
                {
                    arr_31 [i_8] [i_7] = var_7;
                    var_19 = (max(((min(0, -23853))), (~-57)));
                    var_20 |= (min(var_1, ((max(((max(23853, 116))), (((arr_1 [i_6] [i_6]) ? var_2 : (arr_1 [i_6] [i_6]))))))));
                }
            }
        }
    }
    #pragma endscop
}
