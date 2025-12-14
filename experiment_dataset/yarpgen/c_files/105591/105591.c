/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105591
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_15 = ((((((arr_0 [i_0] [i_0]) + -66))) ? (((arr_3 [i_0]) ? -3349739278664910417 : (!var_11))) : (((((((arr_1 [i_0]) ? (arr_1 [i_0]) : 316795205))) ? var_6 : (!var_2))))));
        var_16 |= (7 ? 7 : -7);
        arr_4 [i_0] = ((1994108547743150271 ? ((-116 ? var_7 : (arr_3 [i_0]))) : (((var_11 == ((min(13, (arr_1 [i_0])))))))));
    }
    for (int i_1 = 2; i_1 < 12;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 1; i_2 < 10;i_2 += 1)
        {
            var_17 |= var_6;
            arr_12 [i_2] [i_2] [i_2] = (((-127 - 1) - (((arr_10 [i_1]) ? (arr_9 [i_2] [i_2]) : 9223372036854775807))));
            var_18 |= (((arr_11 [i_1 - 2]) ? 1994108547743150271 : (arr_9 [4] [i_1 - 1])));
        }
        for (int i_3 = 1; i_3 < 9;i_3 += 1)
        {
            var_19 = ((((((var_4 ? (arr_0 [i_1] [i_1]) : (arr_6 [i_1 + 1]))) / -27)) + -var_1));
            arr_15 [i_1] [i_1] [i_3] = var_1;
            var_20 += (6236487122063737296 || 15592256301063489058);
            arr_16 [i_1] [i_1] = ((var_3 ? (min((var_6 >> var_5), (((var_11 == (arr_11 [i_3])))))) : ((((41252 ? (arr_13 [i_3]) : 127)) + ((min(var_13, (arr_7 [i_1]))))))));
        }
        for (int i_4 = 2; i_4 < 11;i_4 += 1)
        {
            var_21 = (!var_5);
            arr_21 [i_1] [i_4] [i_4] = ((((((!var_2) ? (!17168) : ((var_8 ? var_1 : 3349739278664910427))))) ? (arr_17 [i_1 - 2] [i_1]) : (((var_0 ? ((min(127, var_10))) : var_12)))));
            arr_22 [i_4] [i_4 + 1] = (((arr_13 [i_4]) ? var_6 : (arr_1 [i_1 - 1])));
            arr_23 [i_1] [i_4] [i_4] = ((!(((var_10 ? var_12 : (((arr_9 [i_4] [i_4 + 2]) ? -4546 : (arr_19 [i_1 - 1]))))))));
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            arr_26 [i_1 + 1] = (-127 - 1);
            var_22 = (max(var_22, ((((-((min(var_14, 31)))))))));
            arr_27 [i_1] [i_5] = (max(((((max((-32767 - 1), var_13))) ? (27 || var_3) : (-9223372036854775807 - 1))), ((min(127, 0)))));
        }
        arr_28 [i_1 - 1] |= var_12;
    }
    var_23 = 1003032800;
    var_24 |= var_6;
    var_25 = (max(var_25, (-127 - 1)));
    #pragma endscop
}
