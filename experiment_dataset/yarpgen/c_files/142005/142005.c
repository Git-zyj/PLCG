/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142005
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_11;

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_21 = ((~(((((var_7 ? var_1 : 65535))) ? (((var_1 ? 0 : var_2))) : var_10))));
            arr_7 [i_0] [i_1] [i_1] = 0;
            arr_8 [i_0] = 0;
            arr_9 [i_0] [i_0] = (((((-126 + 2147483647) << (((arr_6 [i_0 - 1] [i_0 - 1] [i_1]) - 35918)))) ^ (((arr_4 [i_0 - 1] [i_0 - 1] [i_0 - 1]) / (arr_4 [i_0] [i_0 - 1] [i_0 + 1])))));
        }
        arr_10 [i_0 - 1] = (max((3 && var_15), (((((~65535) + 2147483647)) << (((var_9 + 82) - 31))))));
        arr_11 [i_0] = ((((max(67108863, (arr_6 [i_0 + 1] [i_0] [14])))) && (var_0 && var_8)));
        var_22 = var_1;
        var_23 |= (!var_6);
    }
    for (int i_2 = 1; i_2 < 17;i_2 += 1)
    {
        var_24 = (~var_17);
        arr_14 [i_2] = (max((~var_10), (arr_3 [i_2] [i_2] [i_2])));
        var_25 = ((((var_5 && (((var_10 ? 65535 : 2147483647))))) ? ((min((min((arr_3 [i_2] [i_2] [20]), 0)), (arr_1 [i_2 + 1] [i_2 - 1])))) : (((arr_6 [i_2 + 1] [i_2 + 1] [i_2 + 1]) - 0))));
        var_26 = ((((((arr_4 [i_2 + 1] [i_2] [i_2]) ? (arr_3 [i_2] [i_2] [i_2]) : (arr_3 [i_2] [i_2 + 1] [0])))) && (max((((arr_6 [i_2] [5] [5]) && var_12)), (((arr_6 [i_2] [i_2] [i_2]) && var_17))))));
    }
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        var_27 = (min(var_27, (((((((arr_0 [i_3]) ? (arr_0 [6]) : (arr_0 [i_3])))) || (((arr_0 [i_3]) || var_8)))))));
        arr_17 [i_3] = ((((((0 >= (arr_5 [i_3] [i_3] [i_3])))) >= 0)));
    }
    var_28 = (((var_14 ? (-32767 - 1) : 0)) % var_0);
    var_29 |= (((((var_12 ? ((var_13 ? var_0 : 16383)) : var_8))) ? ((min((~0), 65535))) : (((var_17 | var_15) ^ ((min(2147483647, var_14)))))));
    #pragma endscop
}
