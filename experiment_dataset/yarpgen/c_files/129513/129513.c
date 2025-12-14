/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129513
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((4294967295 <= (((~1) ? (arr_0 [i_0]) : 10))));
        arr_4 [i_0] = ((((max((arr_1 [i_0] [i_0]), var_1))) ? -var_1 : 12));
        var_14 &= (((((~(12 % 4294967274)))) ? (((~(arr_2 [8])))) : (max((12 << 21), var_12))));
        var_15 = ((((arr_2 [i_0]) ? (arr_2 [i_0]) : var_2)));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = (((min(var_1, var_2)) != ((((!(arr_5 [i_1] [i_1])))))));
        arr_8 [i_1] = (min((min((arr_2 [0]), ((-(arr_5 [i_1] [i_1]))))), ((((max(var_9, 4294967283))) ? 4294967274 : var_7))));
        arr_9 [i_1] [i_1] = ((((((min(4294967274, 22))) ? var_8 : (min((arr_5 [i_1] [i_1]), 2)))) != (arr_1 [10] [10])));
        var_16 = (((((~(4294967293 || 22)))) ? ((((max(33, 51))) ? (((arr_0 [2]) ? (arr_0 [2]) : var_13)) : (var_13 || 4294967250))) : ((min((4294967244 != 21), 4294967295)))));
        var_17 = (max((4294967294 - 4294967283), ((((1 && (arr_5 [i_1] [i_1])))))));
    }
    var_18 = var_4;
    var_19 = (min(var_19, var_11));
    #pragma endscop
}
