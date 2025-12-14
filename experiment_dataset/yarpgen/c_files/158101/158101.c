/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158101
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_16 = ((-((min((arr_3 [i_0]), 40321)))));
        var_17 = ((((2739733029164036210 != (((~(arr_1 [i_0] [i_0])))))) ? (((((arr_1 [i_0] [i_0]) && -25970)) ? 25970 : (min(807735754, 9520699265696981433)))) : (((185 ? 82 : (var_7 < var_8))))));
        var_18 = (((((min((arr_0 [i_0]), 1124451255)) == (((arr_2 [i_0] [i_0]) ? var_2 : var_15)))) ? ((min((((!(arr_1 [10] [10])))), (arr_0 [i_0])))) : (((((116 ? 807735756 : 807735756))) ? (arr_0 [i_0]) : (33292288 == 11)))));
        var_19 = ((((min((arr_2 [i_0] [i_0]), 16474))) ? (arr_3 [i_0]) : (arr_2 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = 2739733029164036210;
        var_20 = (max((((arr_4 [i_1]) << (((arr_1 [i_1] [i_1]) - 24)))), (-127 - 1)));
        arr_7 [i_1] = ((((((!(arr_2 [i_1] [i_1]))) ? (max((arr_1 [i_1] [i_1]), var_14)) : (23641 > var_0))) & 2235134448));
    }
    var_21 |= ((var_14 ? var_7 : -25970));
    #pragma endscop
}
