/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119948
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_4 << ((((((((min(117, (-9223372036854775807 - 1)))) - -9223372036854775803)) + 32)) - 6))));

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_11 = (arr_2 [i_0 - 2]);
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_8 [i_0] [1] [0] [i_0] &= (arr_6 [4] [4] [i_2] [i_2]);
                    var_12 = (min(var_12, (arr_2 [i_2])));
                }
            }
        }
        var_13 = (((14034783898044816615 + 9223372036854775807) >> ((min(1, (arr_0 [i_0 - 1] [i_0 + 2]))))));
    }
    for (int i_3 = 1; i_3 < 1;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    {
                        var_14 = ((min(8070450532247928832, 1944049304164210673)) == (arr_14 [i_5]));
                        arr_18 [i_4] [i_3] = (((!127) * 39));
                        var_15 = (min(((((~(arr_16 [i_3]))))), ((~(arr_9 [i_3 - 1])))));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_7 = 4; i_7 < 18;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 19;i_8 += 1)
            {
                for (int i_9 = 2; i_9 < 17;i_9 += 1)
                {
                    {
                        var_16 = (max(18446744073709551615, 6));
                        arr_27 [i_3] = (((min((-2147483647 - 1), (arr_15 [16] [i_3] [i_7] [i_7 - 2]))) != (((((117 ? (arr_10 [i_8] [i_8]) : 13893758203410648655)))))));
                    }
                }
            }
        }
        arr_28 [i_3] [i_3] = 1;
    }
    #pragma endscop
}
