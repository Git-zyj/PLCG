/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119774
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((((15 ? var_5 : var_7))) ? ((-1750213273 ? var_9 : 898610171)) : ((14 ? var_11 : 8585477))))) ? (((var_2 ? 15 : -2097152))) : ((-2126998282 ? var_2 : ((-1616873331 ? var_2 : -170107806)))));
    var_13 = var_8;
    var_14 = (var_11 ? ((var_2 ? var_5 : ((2097152 ? var_7 : var_9)))) : var_8);

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [19] [i_0] = (((((2097152 ? -431313415 : -712173574)) + 2147483647)) << (((max(var_9, (-170107805 | 6))) - 2070935520)));
        var_15 = max(((-((-2097152 ? -399141344 : 2097151)))), (max(33554431, (-1140314913 != -712173581))));
        arr_4 [i_0] = (1140314911 ? (-1652241031 - 209778226) : (var_5 > 170107806));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_16 = (max(var_16, (max((((max(-761330808, 2147483647)) - var_11)), (((max(var_1, -172618518)) + -var_11))))));
        var_17 = max(((((max(-15, 2101867673))) ? ((2097147 ? -383948753 : 84714849)) : (((var_4 <= (-2147483647 - 1)))))), ((max(var_11, 2097137))));
    }
    #pragma endscop
}
