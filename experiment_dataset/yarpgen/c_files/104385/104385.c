/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104385
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_8 ? 0 : (!1)));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 20;i_1 += 1) /* same iter space */
        {
            var_20 = (min(((var_9 ? var_8 : (arr_3 [i_1 + 1] [i_1 - 1]))), (arr_3 [i_1 - 1] [i_1 - 2])));
            var_21 = var_12;
        }
        for (int i_2 = 3; i_2 < 20;i_2 += 1) /* same iter space */
        {
            var_22 = (max(var_22, ((((((((((var_15 == (arr_1 [i_0]))))) ^ (arr_5 [i_2 - 3])))) ? (((var_10 != (arr_6 [i_2 - 2] [10])))) : 251658240)))));
            var_23 = ((!((max((arr_6 [i_2] [i_0]), (var_12 || var_1))))));
            var_24 = (max(var_24, ((((((23606 ? 1 : 44) + 16384)))))));
            arr_7 [i_2] [i_2] = (arr_5 [i_2]);
        }
        var_25 *= ((((var_9 ? 63 : 17686486827342526344)) != (((var_15 > 1850993754) ? (~var_18) : ((-14090 ? 18446744073709551594 : (arr_3 [i_0] [i_0])))))));
        var_26 = (min(var_26, (((((max(16, (arr_3 [i_0] [i_0])))) <= ((1037341951620558713 | (arr_0 [21]))))))));
    }
    for (int i_3 = 1; i_3 < 16;i_3 += 1)
    {
        arr_10 [i_3] = ((((min(((~(arr_9 [i_3] [i_3]))), ((((arr_3 [i_3] [i_3]) | 38625)))))) ? ((((arr_4 [i_3 - 1] [i_3 + 2]) && 115))) : 86));
        arr_11 [i_3] = (((((var_9 ? 5624193090478566330 : var_17)) != -2318528127)) ? ((((var_9 || (var_3 && 1))))) : (arr_4 [i_3 + 1] [i_3 + 2]));
        var_27 = (max(((var_3 != ((26 ? (arr_2 [i_3 + 1]) : var_4)))), (((arr_3 [i_3] [i_3 - 1]) || (arr_3 [i_3 - 1] [i_3 - 1])))));
        var_28 = var_3;
    }
    for (int i_4 = 2; i_4 < 15;i_4 += 1)
    {
        var_29 ^= var_6;
        var_30 = ((((((41 <= 194) % 1))) ? ((((arr_13 [i_4]) ? var_0 : var_17))) : (~-var_6)));
        var_31 = (((arr_0 [3]) * ((((var_6 ? 112 : var_1)) & (var_11 & var_2)))));
        arr_14 [i_4] [i_4] = 67;
        arr_15 [i_4] [i_4] = ((var_10 ? 1 : ((((arr_3 [i_4] [7]) == ((449720890 ? (arr_2 [6]) : -25802)))))));
    }
    var_32 = var_11;
    var_33 = var_18;
    #pragma endscop
}
