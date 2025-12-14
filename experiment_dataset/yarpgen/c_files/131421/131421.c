/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131421
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, (max(var_0, (((((var_5 ? var_3 : var_6))) ? (var_9 && var_8) : (min(var_5, var_2))))))));
    var_11 = (((((max(54880, -1236652917)) / -1236351681))) ? ((1 ? (min(-20930755, 10655)) : ((1 ? 61462 : 54851)))) : (-1036562051 * 1));

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_12 = ((((min((min(1, 1932511988)), (((arr_1 [8] [8]) ? (arr_1 [1] [i_0]) : (arr_1 [i_0] [i_0])))))) ? (max((((arr_1 [i_0] [1]) ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0]))), (((arr_1 [i_0] [i_0]) / (arr_1 [i_0] [10]))))) : ((((((arr_1 [1] [i_0]) / (arr_0 [4])))) ? (((arr_1 [i_0] [i_0]) / (arr_1 [i_0] [3]))) : (min((arr_0 [i_0]), (arr_1 [i_0] [0])))))));
        var_13 = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = max((((((0 ? 1 : 1))) ? 1 : -900489359)), (((1932511988 / 1) ? 62838 : (max(28006, 278673245)))));
        arr_7 [0] [i_1] |= (((((max((arr_0 [i_1]), (arr_3 [i_1])))) && ((((arr_4 [i_1] [i_1]) ? (arr_3 [i_1]) : (arr_4 [i_1] [1])))))) ? (((52292996 && 9404) ? 1725651213 : ((6137 ? -410830453 : -382707855)))) : (((((((arr_2 [i_1]) ? (arr_1 [i_1] [i_1]) : (arr_3 [i_1])))) && (arr_3 [i_1])))));
        var_14 = (min(var_14, ((max((arr_2 [i_1]), ((((max((arr_0 [i_1]), (arr_5 [i_1])))) ? ((((arr_1 [i_1] [i_1]) && (arr_3 [i_1])))) : ((((arr_1 [i_1] [i_1]) && (arr_2 [i_1])))))))))));
    }
    #pragma endscop
}
