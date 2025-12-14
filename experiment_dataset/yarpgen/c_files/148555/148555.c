/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148555
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((!(1 <= 14227141229520975115)));
    var_17 = var_14;
    var_18 = ((~((~(~var_7)))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [12] = ((-(arr_0 [i_0])));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_19 &= ((((min((arr_1 [i_1]), (arr_4 [i_1] [i_0] [i_0])))) ? ((var_2 ? (arr_1 [i_0]) : (arr_0 [i_0]))) : var_14));
            var_20 = ((-var_2 ? (min((((127 ? 74 : 1390167653))), var_8)) : var_9));
        }
        var_21 = (min(var_21, ((((32375 && -1731270201) ? (max(77, (11655420154939759228 - 1390167674))) : (arr_3 [0] [i_0]))))));
        var_22 = (126 - 78);
    }
    var_23 = (((var_2 - var_5) ? (max(3290144070779254695, 11655420154939759240)) : ((1 ? 1390167651 : 5725478693365388341))));
    #pragma endscop
}
