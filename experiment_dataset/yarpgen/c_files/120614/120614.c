/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120614
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= (-559128225 ? 2924474327 : 1);
    var_21 = (max(var_21, var_1));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_22 = ((((max(1370492943, 4270))) | var_16));

        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            var_23 = var_10;
            var_24 = 2147483647;

            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                var_25 = (max(var_25, -1331629685));
                arr_8 [i_1] [i_1] [i_1] [7] = var_8;
                arr_9 [i_1] [i_1] = (arr_4 [i_1] [i_2 + 1]);
                var_26 ^= ((250 + (!var_6)));
            }
        }
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            var_27 = (arr_7 [i_0] [i_0] [i_3] [i_3]);
            var_28 = (((arr_4 [i_0] [i_0]) ? ((var_16 ? 250 : (arr_6 [i_0]))) : ((((arr_10 [i_0] [i_3]) <= 4278)))));
            arr_13 [i_0] [i_0] [i_0] = 4294967295;
            var_29 = (max(var_10, (0 == var_16)));
        }
        arr_14 [i_0] = (((var_1 < var_17) * ((((var_8 / var_1) < (min(var_12, 1331629706)))))));
    }

    for (int i_4 = 1; i_4 < 9;i_4 += 1)
    {
        var_30 = (max(var_30, -18637));
        var_31 = (max(var_31, 21027));
    }
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        var_32 = ((((max(18626, 523669300297223413)) * var_16)));

        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            var_33 = ((((((arr_6 [i_5]) ? (arr_12 [i_5] [i_6] [i_6]) : (arr_12 [i_5] [i_6] [i_6])))) ? ((min((arr_12 [i_5] [i_5] [i_6]), var_12))) : ((max((arr_4 [i_5] [i_5]), (arr_6 [i_5]))))));
            arr_21 [i_5] [i_6] = var_6;
            arr_22 [i_5] = (max(var_17, ((var_9 ? var_5 : (var_11 ^ var_0)))));
        }
    }
    #pragma endscop
}
