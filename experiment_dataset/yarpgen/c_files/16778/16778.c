/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16778
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((max(10062326284054824075, (min(17588160604201369263, var_9))))) ? ((((0 ? 1 : 1)))) : 10062326284054824069));
    var_19 = var_2;
    var_20 = (min(var_20, (~8384417789654727529)));

    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            arr_4 [i_1] [i_1] = ((-(((!var_10) ? (max(10062326284054824069, var_0)) : (((max((arr_0 [i_1]), var_14))))))));
            var_21 = 94;
        }

        /* vectorizable */
        for (int i_2 = 3; i_2 < 9;i_2 += 1)
        {
            var_22 = (i_2 % 2 == 0) ? (((var_2 >> (((arr_3 [i_2 + 2] [i_2 + 2] [i_2]) + 83834254621885711))))) : (((var_2 >> (((((arr_3 [i_2 + 2] [i_2 + 2] [i_2]) + 83834254621885711)) - 1833626719361590740)))));
            var_23 &= (((arr_5 [i_0] [1] [i_0]) && (arr_6 [i_0] [i_0] [i_0])));
            var_24 = (604888951 / 114);
        }
        var_25 = (max(var_25, ((min((((((((arr_2 [i_0] [i_0]) ? (arr_0 [i_0 + 2]) : var_17)) + 2147483647)) >> (var_17 - 29))), (max(1737611366, 1737611360)))))));
    }
    var_26 = 1;
    #pragma endscop
}
