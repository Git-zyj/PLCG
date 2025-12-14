/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127613
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            var_10 = (((~(arr_0 [i_0]))));
            arr_5 [8] [i_1] = 675636047;
            var_11 = (min(var_11, (((~(arr_2 [i_0] [14]))))));
        }
        var_12 = (max(var_12, ((((arr_2 [i_0 - 3] [i_0 - 1]) & var_3)))));
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        var_13 = (arr_4 [i_2]);
        var_14 = ((-(((arr_1 [i_2]) ? (min((arr_7 [i_2]), 931529508223056662)) : (((max(16, 99))))))));
    }
    var_15 -= 40116;
    #pragma endscop
}
