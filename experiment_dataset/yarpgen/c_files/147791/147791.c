/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147791
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        var_19 = (min(var_19, (arr_8 [i_0] [i_1] [i_0] [i_2 + 1] [i_0])));
                        var_20 = (max(var_20, var_10));
                    }
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        arr_13 [i_0] [i_1] [i_2] [i_4] = (arr_6 [i_0] [i_0] [i_2]);
                        arr_14 [i_0] [i_1] [i_1] [i_2 - 1] [13] [i_4] = (((~(arr_6 [i_0] [i_1] [i_2 + 1]))));
                        var_21 += (((((-((var_8 % (arr_7 [i_0] [i_0] [i_0])))))) && ((((((1330241646 ? (arr_8 [i_0] [10] [i_2] [i_2] [i_4]) : (arr_0 [i_0])))) ? (max((arr_2 [i_2]), (arr_11 [i_4]))) : (((~(arr_3 [i_1] [i_1] [i_2 - 2])))))))));
                        var_22 = (max(var_22, (-2147483647 - 1)));
                        arr_15 [i_0] [i_4] = ((((((min(0, var_16))) ? (arr_9 [i_4] [i_2] [i_1] [i_0]) : (((arr_4 [i_4] [i_2] [i_0]) ? (arr_6 [i_1] [i_1] [i_1]) : var_11))))) ? (((((max(var_4, var_6))) ? (((0 ? -3946 : -1404767007))) : (min(37, (arr_10 [i_0] [11] [i_0] [i_0])))))) : (((((arr_10 [i_0] [i_1] [i_1] [i_1]) || var_17)) ? (((arr_3 [i_0] [i_1] [i_2]) ? var_5 : (arr_10 [i_0] [i_2 - 1] [i_1] [i_0]))) : ((((120 || (arr_2 [i_2 + 1]))))))));
                    }
                    arr_16 [i_1] = (max((arr_7 [i_2 - 1] [i_2 - 2] [i_2 - 2]), ((max(var_15, var_3)))));
                }
            }
        }
        arr_17 [i_0] [i_0] = (((((-25164 ? 0 : 3946))) ? ((((max(var_17, var_14)) ? var_11 : var_13))) : (max(18446744073709551615, -4448702060729161349))));
        var_23 = (max(var_23, ((((((((42 ? var_5 : var_6))) ? (((4398046511103 ? 0 : (arr_11 [17])))) : (arr_2 [i_0])))) ? ((var_18 * ((((arr_2 [i_0]) ? 30382 : 2147483647))))) : (((~-123) & (((arr_12 [i_0]) + (arr_10 [i_0] [i_0] [i_0] [i_0])))))))));
        var_24 = (min(var_24, (((((((-5 > var_0) ? (((arr_5 [i_0]) ? (arr_7 [i_0] [i_0] [i_0]) : var_4)) : (arr_3 [i_0] [3] [i_0])))) && (~8174484191625126908))))));
        var_25 = (min(var_15, ((1 ? (((arr_6 [i_0] [20] [16]) ? -88 : (arr_11 [i_0]))) : var_15))));
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
    {
        arr_22 [i_5] [i_5] = (((13296906105551684560 ? 3946 : 0)));
        arr_23 [i_5] = (max((arr_21 [i_5]), (((arr_20 [i_5]) ? (arr_18 [1]) : var_16))));
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
    {
        var_26 = (max(17754, 1));
        var_27 = (max(var_15, 127));
    }
    var_28 += ((var_6 ? var_14 : ((max(90, (min(65535, var_11)))))));
    #pragma endscop
}
