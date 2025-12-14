/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189082
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= (-(((15 >= 18446744073709551600) ? var_2 : (var_6 <= var_9))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_19 = (min(var_19, 18446744073709551607));
        var_20 = var_3;

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {

            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                var_21 = (!var_13);
                var_22 = (((arr_0 [i_0]) ? (arr_8 [i_0] [i_1] [i_2 + 1]) : (arr_6 [i_1])));
            }
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                var_23 = ((248 ^ (59786 ^ 251)));
                var_24 &= ((((((arr_2 [i_1] [i_3]) ? var_17 : 5))) ? 255 : 3237428851));
            }
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                var_25 = (max((((((arr_16 [i_0] [i_0] [i_1] [i_4]) ? var_5 : (arr_7 [i_0] [i_1] [i_4]))) != (arr_10 [i_0] [i_0] [i_1] [i_4]))), ((var_1 > (min(15156126953351763608, var_14))))));
                var_26 = ((((((-((var_2 ? (arr_13 [i_1]) : (arr_11 [i_4] [i_1] [i_0]))))) + 2147483647)) << (((((arr_8 [i_4] [i_1] [i_0]) ? 5 : ((((arr_14 [i_0] [i_1]) && 1539168687))))) - 5))));
            }
            arr_17 [i_0] = var_2;
        }
        for (int i_5 = 3; i_5 < 10;i_5 += 1) /* same iter space */
        {
            var_27 |= var_15;
            var_28 = (arr_19 [i_0] [i_5] [i_5]);
            var_29 &= ((((!(((3237428840 ? 38397 : (arr_4 [i_5 - 3] [i_0])))))) ? (((!(arr_3 [i_0])))) : (!var_9)));
            arr_21 [i_0] [i_0] [i_5 - 1] = (arr_5 [i_5 - 3] [i_5 + 1] [i_0]);
        }
        for (int i_6 = 3; i_6 < 10;i_6 += 1) /* same iter space */
        {
            var_30 = (min(var_30, (arr_16 [i_0] [i_6 - 2] [i_6 - 1] [i_6])));
            var_31 = -1708154746;
        }
    }
    for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
    {
        var_32 = (min(var_32, ((((var_17 << (((arr_22 [i_7] [i_7]) - 44725))))))));
        arr_30 [i_7] [i_7] = 1057538443;
        var_33 *= ((var_2 <= ((~(arr_0 [i_7])))));
        arr_31 [i_7] [i_7] = (arr_10 [i_7] [i_7] [i_7] [i_7]);
    }
    #pragma endscop
}
