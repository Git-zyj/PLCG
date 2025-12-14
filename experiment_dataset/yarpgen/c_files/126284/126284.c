/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126284
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (var_2 ? ((((((3412885437 ? 18446744073709551602 : var_16))) ? var_13 : ((var_3 ? 227 : 2145))))) : var_8);
    var_19 = ((((min((1277661843 & 102), 368961622))) * (((((var_8 ? 9542166503346641858 : var_4))) ? (min(287868098, var_1)) : (((var_13 ? -1384362299 : -52)))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_20 = (arr_0 [15] [i_0]);

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            arr_5 [6] = ((var_2 ? ((var_1 ? var_16 : (arr_0 [i_0] [i_0]))) : (arr_3 [i_0] [i_1])));
            var_21 = ((var_16 - ((var_9 ? 15072 : var_16))));
        }
        var_22 = ((var_10 ? -102 : (9542166503346641858 >> var_13)));

        for (int i_2 = 2; i_2 < 23;i_2 += 1)
        {
            var_23 = ((2079 ? 87470869 : (arr_3 [2] [2])));
            arr_9 [i_0] = var_14;
            arr_10 [i_0] [i_2] [i_2] = var_5;
            arr_11 [i_0] [3] = ((29 ? var_11 : var_7));
        }
        for (int i_3 = 2; i_3 < 23;i_3 += 1)
        {
            var_24 = (((var_9 > var_8) / ((534773760 ? var_9 : 0))));
            arr_15 [1] = 15072;
            var_25 = var_17;
            var_26 = ((var_15 * ((((18807 != (arr_3 [18] [18])))))));
        }
        arr_16 [15] = ((-8 | ((var_9 << (((arr_2 [i_0] [i_0]) - 2604747207))))));
    }
    var_27 = (max(var_27, ((-((var_3 ? (min(var_14, 2680971763)) : (~1)))))));
    #pragma endscop
}
