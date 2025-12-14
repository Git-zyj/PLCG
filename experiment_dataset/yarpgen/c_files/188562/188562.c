/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188562
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 14974685065916562707;
    var_20 = var_12;
    var_21 = (((((min(var_10, (max(var_0, var_2)))) + 9223372036854775807)) >> (var_2 + 2686154051606777738)));

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_22 = ((((~(max(var_10, (arr_2 [19])))))) ? ((((min(53974, var_5))) ? (~65535) : 15206537573151972348)) : ((((~2335402161) & (arr_2 [i_0])))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            arr_5 [i_0] = var_16;
            var_23 = ((10563362683083310616 ? var_12 : (~9)));
            arr_6 [i_1] [i_1] |= (-108 || 160);
        }
        for (int i_2 = 4; i_2 < 24;i_2 += 1)
        {
            arr_11 [i_0] [i_0] = ((~((+(((arr_1 [17] [17]) ? 9223372036854775807 : (arr_7 [i_2 - 3] [i_0] [i_2 - 3])))))));
            arr_12 [i_0] [i_0] = (arr_4 [i_0] [i_0]);
        }
        var_24 = 9115967308002515540;
        var_25 = (((115 ? 27196 : 1)));
    }
    #pragma endscop
}
