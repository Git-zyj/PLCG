/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134644
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 100;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = -3299005323120067927;
        var_12 = (max(((!(arr_0 [i_0] [i_0]))), (((arr_1 [i_0]) > (arr_1 [i_0])))));
        arr_3 [i_0] = (~1905380937);
        var_13 = (min(var_13, -3299005323120067927));
        arr_4 [2] &= (((arr_0 [i_0] [8]) > 102));
    }
    for (int i_1 = 3; i_1 < 20;i_1 += 1)
    {
        var_14 -= (arr_6 [2]);
        var_15 = (max(var_15, ((((((arr_5 [8]) % (arr_5 [14]))) | ((((9223372036854775788 < (arr_5 [0]))))))))));
        var_16 = (min((max((((!(arr_7 [i_1] [i_1])))), (arr_7 [i_1 - 1] [i_1 - 1]))), (16 / 117)));
    }
    var_17 = (min(var_17, (34186 && var_10)));
    var_18 = (((((-124 & 63066) | ((58 ? var_7 : var_2)))) >= 22781));
    #pragma endscop
}
