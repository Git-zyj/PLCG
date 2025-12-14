/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143019
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        var_17 = 496891493076109921;
        var_18 = (((~((496891493076109925 ? 496891493076109922 : 17949852580633441668)))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_19 = ((((min(17949852580633441711, 17949852580633441680))) ? (((!(!4312736369082388727)))) : ((~(arr_2 [i_1])))));
        arr_5 [2] [i_1] = (arr_0 [i_1] [i_1]);
        var_20 = ((17949852580633441663 ? (((min(3584, 17949852580633441680)) + 17949852580633441690)) : (((~(arr_4 [i_1] [i_1]))))));

        for (int i_2 = 2; i_2 < 9;i_2 += 1)
        {
            var_21 = (!810032821385225791);
            var_22 = (((!(~810032821385225795))) ? ((((arr_0 [i_2 - 1] [i_2 + 1]) ? (arr_4 [i_1] [i_2 - 1]) : (arr_2 [i_2 - 1])))) : (((arr_3 [i_2]) * (var_2 && var_8))));
            arr_8 [i_2 - 1] [i_1] = var_10;
            var_23 = 17949852580633441669;
        }
    }
    var_24 = var_6;

    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        var_25 = var_1;
        arr_12 [1] = (min(-2147483621, 17636711252324325803));
        var_26 = (min((min(496891493076109935, -var_9)), ((min((((1 ? 213 : 58668))), -134086656)))));
    }
    for (int i_4 = 1; i_4 < 1;i_4 += 1)
    {
        arr_15 [i_4] = (~49152);
        arr_16 [i_4] = var_2;
        arr_17 [i_4 - 1] = (((arr_13 [i_4]) ? -1 : ((+(((arr_11 [i_4 - 1]) - var_0))))));
    }
    #pragma endscop
}
