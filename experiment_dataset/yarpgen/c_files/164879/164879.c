/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164879
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_1;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_11 = (arr_1 [i_0]);
        var_12 = (((!var_3) % (arr_1 [5])));
        arr_3 [i_0] = (arr_2 [i_0]);
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_13 = min((arr_4 [i_1] [i_1]), (min(1725945284, 5533)));
        var_14 = (min(var_14, 7839936292627962090));
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
    {
        var_15 = (((((-(arr_4 [i_2] [i_2])))) ? (((((!(arr_6 [i_2])))))) : (min(((1424 ? (arr_7 [i_2]) : 4929116585205930653)), (((17769901675911267443 ? (arr_4 [i_2] [i_2]) : 1725945282)))))));
        var_16 = (min(var_16, (676842397798284172 / 11650081214097503656)));
    }
    var_17 = (~var_0);
    var_18 -= (((var_5 * (var_3 > var_1))));
    var_19 = (min(var_19, (((5519 * ((var_3 + (min(var_7, 676842397798284172)))))))));
    #pragma endscop
}
