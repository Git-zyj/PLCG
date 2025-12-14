/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158663
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_9;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            arr_7 [i_0] [i_1] [i_1] = (((((arr_3 [i_0] [i_1] [i_0]) ? (arr_3 [i_1] [i_1] [i_0]) : (arr_3 [i_0] [i_1] [i_1]))) + ((-(((arr_4 [i_0] [i_1] [i_1]) ? 172 : 67))))));
            arr_8 [i_0] [i_1] = (min((max((arr_4 [i_1] [i_1] [i_1]), (arr_3 [i_0] [i_0] [i_1]))), 231));
        }
        /* vectorizable */
        for (int i_2 = 1; i_2 < 20;i_2 += 1)
        {
            var_12 -= (((((var_2 ? var_7 : 36))) ? 284732036 : (!var_9)));
            var_13 += ((-32765 ? 4010235255 : 3));
        }
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            arr_17 [i_3] [4] = ((((((arr_3 [i_3] [i_3] [i_0]) / (arr_14 [i_3])))) ? ((-(arr_5 [i_0]))) : ((((arr_0 [i_3]) || var_6)))));
            var_14 += (min(63239, (((!4010235259) ? ((28961 ? 11 : 5263097936256107315)) : ((((arr_2 [i_0]) ? 1 : 4010235283)))))));
            arr_18 [i_3] [i_3] = (1254339674171509924 && 5263097936256107323);
        }
        arr_19 [i_0] = (arr_4 [i_0] [18] [i_0]);
    }
    for (int i_4 = 1; i_4 < 15;i_4 += 1)
    {
        var_15 = (max((arr_6 [0] [i_4] [i_4]), (((((arr_16 [i_4 + 2] [i_4 + 3] [i_4 + 3]) && var_2))))));
        var_16 = (max((max(var_0, (arr_9 [12]))), 1));
    }
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        var_17 = ((+(((arr_14 [i_5]) ? var_10 : (arr_4 [i_5] [i_5] [i_5])))));
        arr_24 [i_5] [i_5] = (arr_14 [i_5]);
        var_18 = -1;
        var_19 += (((-1 + 2147483647) << ((((((~(arr_1 [i_5] [i_5]))) + 8007710331638831676)) - 3))));
    }
    var_20 += (((((var_1 ? 28582 : var_4))) ^ ((10179910949945579235 ? var_5 : var_3))));
    var_21 = (~140);
    #pragma endscop
}
