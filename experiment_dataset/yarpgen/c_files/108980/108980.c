/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108980
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((min((60 ^ var_1), (max(var_4, var_2)))) != var_4));
    var_11 = (min(-var_1, ((((((var_0 ? var_7 : var_3))) && (var_7 > -24334))))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            arr_5 [i_0] [i_1] [i_1] = (max(((2333578525792197663 ? (2013265920 && 2013265920) : 255)), 110172995));
            var_12 = (min(var_12, ((min((arr_0 [i_1]), (((((max(-68, 2013265897))) ? (((arr_1 [i_0]) >> (((arr_1 [i_0]) - 881836153)))) : ((((arr_0 [i_0]) > var_8)))))))))));
            var_13 = (max(var_13, (((((((arr_0 [i_0]) / ((var_1 ? -2013265921 : (arr_1 [i_1])))))) && ((((arr_0 [i_1]) ? var_6 : (arr_0 [i_1])))))))));
            arr_6 [i_1] [i_0] = ((((max(var_4, var_0))) - (((((arr_3 [i_0] [i_0]) ? var_7 : (arr_0 [i_1]))) ^ (((arr_1 [16]) & (arr_3 [i_0] [i_1])))))));
        }
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            arr_10 [17] = ((((max(((max(var_9, var_3))), ((var_5 ? 254 : -2013265918))))) ? ((var_4 ? (arr_0 [i_0]) : (arr_8 [i_0]))) : ((-2013265923 ? -15 : 152))));
            arr_11 [i_0] [i_2] = (max((arr_0 [i_2]), ((var_5 ? (arr_1 [i_0]) : var_3))));
        }
        var_14 *= ((((((((arr_7 [i_0]) || (arr_8 [i_0])))) / 25))) ? ((((4294967295 < 0) != (((-2 && (arr_2 [1] [i_0]))))))) : (max(-1862696194, (arr_7 [i_0]))));
        arr_12 [i_0] = ((~(((!(((31 ? 13164468464673091056 : 2013265907))))))));
    }
    for (int i_3 = 1; i_3 < 23;i_3 += 1)
    {
        arr_16 [i_3] [i_3] = ((((min((min(2, 200)), 151))) + (((((var_7 - (arr_13 [i_3 - 1])))) ? ((-878543710 - (arr_13 [i_3]))) : 1048575))));
        arr_17 [23] = ((((var_2 || (arr_14 [i_3 + 2]))) ? ((-(arr_14 [i_3]))) : (((!(((-2013265906 ? 103 : var_4))))))));
        arr_18 [i_3 + 1] = (((((max(11, (arr_14 [i_3])))) ? 2939 : (((arr_13 [i_3 + 2]) ? var_0 : (arr_14 [8]))))));
    }
    var_15 += (((var_8 ? ((var_4 ? 2881666244018922506 : var_9)) : (((var_5 ? var_4 : var_0))))));
    #pragma endscop
}
