/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161564
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_9;
    var_13 = ((-((min(62000, 61993)))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_14 = (min(var_14, ((-3544 ? -61991 : (((!(((61994 ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0] [i_0])))))))))));
        var_15 = ((61991 ? 3531 : -1033086552));
        arr_3 [i_0] &= (max((max(34152, (min(3531, (arr_2 [i_0] [i_0]))))), ((((arr_2 [i_0] [i_0]) ? (max(var_5, 3585585901)) : (!677667790))))));
    }
    #pragma endscop
}
