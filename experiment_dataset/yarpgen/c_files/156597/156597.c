/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156597
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= ((~((var_4 ? var_10 : var_8))));

    /* vectorizable */
    for (int i_0 = 4; i_0 < 7;i_0 += 1)
    {
        arr_3 [i_0 + 2] = ((-(arr_0 [i_0 + 1] [i_0 + 2])));
        arr_4 [i_0 + 3] = 6683330222917523549;
    }
    var_12 = (max(var_12, var_6));

    for (int i_1 = 4; i_1 < 18;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            var_13 = ((~((3030 ? ((max(523970582, -3427))) : 9731901285027508817))));
            var_14 -= ((((((-3427 + 2147483647) >> (var_10 - 30807)))) ? (max((((-3423 ? 3427 : var_0))), (arr_8 [i_1]))) : 1));
            var_15 = (min(var_15, (((!((max(-828244240, ((max(3030, 1)))))))))));
        }
        var_16 = (min(var_16, ((((~4196843909770874061) ? (min(62506, 1282638055)) : (((arr_5 [i_1 - 1] [i_1]) + 62506)))))));
        var_17 += var_9;
    }
    #pragma endscop
}
