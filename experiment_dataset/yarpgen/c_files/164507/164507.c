/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164507
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_15 = ((-9223372036854775807 - (max((((arr_0 [i_0]) + (arr_1 [6]))), ((min(var_5, (arr_1 [i_0]))))))));
        var_16 = (((16979709134444536314 || 1) ? (((~(var_10 > 16979709134444536289)))) : ((max(var_7, (arr_0 [1]))))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_17 = arr_1 [i_1];
        var_18 = (min((-1228970165 ^ var_10), (((!((min(25771, (arr_3 [i_1])))))))));
        var_19 += -15690037993784772289;
        var_20 = (((arr_1 [i_1]) / (arr_1 [i_1])));
        arr_4 [i_1] [i_1] = ((~(((arr_3 [i_1]) ? (arr_3 [i_1]) : (arr_3 [i_1])))));
    }
    var_21 = (max((min(var_11, (1467034939265015326 / 65535))), var_0));
    var_22 = (min((0 && 4845730105446893147), var_1));
    var_23 = (min(var_23, (((18446744073709551615 + (((max(48, (min(8, 7)))))))))));
    #pragma endscop
}
