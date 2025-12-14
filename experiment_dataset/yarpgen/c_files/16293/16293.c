/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16293
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, ((((min(var_18, (var_2 & -3508279188293727367))) | ((var_5 | ((var_6 ? 1 : -3508279188293727367)))))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = (((((0 ? ((3 ? (arr_1 [i_0]) : (arr_1 [i_0]))) : (arr_0 [i_0])))) ? (arr_1 [i_0]) : ((((min((arr_0 [i_0]), (arr_0 [i_0])))) ? (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0]))) : (arr_0 [i_0])))));
        var_21 = (min(var_21, (((10192421411235609353 ? 1159416237 : 5787831183779899709)))));
        arr_3 [i_0] = (((((21389 >> (var_4 - 144))) & var_2)));
        arr_4 [10] [i_0] |= (arr_1 [2]);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_22 = (max(var_22, var_17));
        var_23 |= ((((((arr_5 [i_1]) * 124))) ? var_14 : (((-127 - 1) ? (min((arr_1 [6]), var_12)) : (((min((arr_6 [i_1] [1]), 127))))))));
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        var_24 = ((((((var_4 / (arr_7 [7]))) << (7953910206333927113 >= var_9))) != (min(((3973910598 ? (arr_9 [i_2]) : (arr_8 [i_2]))), (((arr_7 [11]) ? (arr_8 [3]) : (arr_9 [15])))))));
        var_25 = (min(var_25, ((+((((-296840381 % 1134690242) >= -2010660115495154020)))))));
    }
    var_26 = (136 ? 1134690255 : ((34 & ((21389 ? -1134690243 : -3508279188293727352)))));
    #pragma endscop
}
