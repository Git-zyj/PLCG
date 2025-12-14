/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1818
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        arr_2 [i_0 + 3] = (min(((((max(var_1, (arr_0 [i_0]))) <= (!var_10)))), var_0));

        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            var_12 = ((~((-(!var_8)))));
            arr_5 [6] [i_1 + 3] [i_1] = (arr_1 [i_0 + 2]);
        }
    }
    var_13 = (min((~var_0), (max(((var_3 ? var_7 : var_10)), var_2))));
    #pragma endscop
}
