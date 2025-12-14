/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16981
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_20 = (max(var_20, -var_1));
        arr_4 [i_0] [i_0] = (((max((arr_0 [i_0]), (min((arr_0 [i_0]), var_10)))) << (((arr_2 [i_0] [10]) + 403875255914465416))));

        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            var_21 = (255 / var_1);
            var_22 |= ((((arr_8 [i_1 - 1] [i_1 - 1]) >> (((arr_0 [i_1 - 1]) - 1411112398774876424)))));
        }
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            arr_11 [i_0] = var_4;
            var_23 = var_0;
            var_24 = ((((!(((var_5 ? 147 : var_2))))) ? (((((((arr_1 [i_0]) & (arr_5 [i_0] [1] [i_0]))) + 9223372036854775807)) >> (((32605 | var_2) + 491552781)))) : (((((0 ? (arr_5 [15] [15] [i_2]) : -3338261293935831027))) ? ((var_16 ? (arr_7 [i_2]) : 3758895103271865515)) : (((1 ? 1 : (arr_3 [i_0]))))))));
        }
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            arr_15 [12] [i_3] = (min((((min(var_9, 1)) & (((min(18, 12007)))))), ((max((arr_5 [i_0] [i_0] [i_3]), var_10)))));
            var_25 = ((-345855585031311694 ? 41107472096052442 : ((((var_7 ? var_0 : (arr_12 [i_3] [i_0])))))));
            arr_16 [i_0] [i_0] = ((((arr_13 [i_0] [i_0]) ? (arr_10 [i_0]) : (arr_6 [16]))));
        }
    }
    var_26 = (((!-13005) ? (((!((min(var_2, 70368744177663)))))) : (min((max(133, 1081740207)), (var_7 + 255)))));
    var_27 = 14863816105585843122;
    var_28 = (max((((var_19 + var_18) * 0)), var_2));
    #pragma endscop
}
