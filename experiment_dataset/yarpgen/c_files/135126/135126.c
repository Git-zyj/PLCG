/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135126
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((var_5 ? var_4 : (!0)))) ? ((max(var_3, (var_8 < var_13)))) : (min(((0 ? var_16 : var_3)), ((min(133, var_14)))))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            arr_6 [7] [i_1] [i_1] = (0 != 54);
            var_19 *= (0 & 1);
            arr_7 [i_0] [i_0] [i_1] = (arr_2 [1]);
            arr_8 [i_0] [i_0] = 3695843531598948018;
        }
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            var_20 = (max(var_20, ((min((((var_10 != (((max(1, (arr_1 [i_0] [i_2])))))))), (arr_3 [i_0] [i_2]))))));
            var_21 = (((3919982221739527144 ? (var_14 + -1888599485976456642) : var_6)) / ((((max(2525, 0))) ? (arr_0 [i_0]) : ((1 ? -1 : -1)))));
        }
        arr_11 [i_0] = ((-(+-6615644519679111964)));
        var_22 ^= var_10;
        var_23 = (arr_9 [i_0]);
    }

    for (int i_3 = 1; i_3 < 18;i_3 += 1)
    {
        var_24 = (min(var_24, 4415));
        var_25 = (max(var_25, 22));
        var_26 = var_5;
    }
    var_27 = (var_17 ? ((((((1 ? 281474976710655 : 1))) && (44364 && var_1)))) : (var_12 <= var_11));
    #pragma endscop
}
