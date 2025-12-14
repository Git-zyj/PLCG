/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153144
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_10 = (min(var_10, ((((((arr_0 [i_0] [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0]))) + ((((!(arr_1 [i_0]))))))))));
        var_11 += ((min((arr_2 [i_0]), (arr_2 [i_0]))) + (((((arr_0 [i_0] [i_0]) < ((((1636003852 != (arr_0 [i_0] [i_0]))))))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_12 = (1943153860 << (9967326945258096390 - 9967326945258096375));
        var_13 = (1013676796 >= 3281290499);
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        var_14 = 52584;
        arr_7 [i_2] = (((5665384141620392927 ? 11910 : 5067857927065656161)) + ((((arr_6 [i_2]) ? (arr_6 [i_2]) : (arr_5 [i_2] [i_2])))));
    }
    var_15 = var_9;
    #pragma endscop
}
