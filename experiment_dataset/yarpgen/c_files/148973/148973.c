/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148973
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        var_10 = (min(var_10, 1749634816577119812));
        arr_3 [i_0] = 1;
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_6 [i_1] = (((~1918584400) ? (((arr_1 [i_1] [i_1]) | (arr_1 [i_1] [i_1]))) : (arr_1 [i_1] [i_1])));
        var_11 = ((((((arr_5 [i_1]) ? (arr_2 [i_1] [i_1]) : 1918584414))) ? (!var_2) : (((!(arr_2 [14] [i_1]))))));
        var_12 = (((!var_8) ? (!var_0) : (((!(((1 ? 1 : -26))))))));
        var_13 = ((!((!(((85962528977069812 ? var_1 : (arr_0 [i_1]))))))));
    }
    var_14 = (!var_2);
    #pragma endscop
}
