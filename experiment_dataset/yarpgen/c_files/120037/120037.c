/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120037
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max((min(((var_1 ? 0 : -4835794016054199542)), 43)), (((14 * (var_5 >= var_8))))));
    var_13 = var_8;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_14 = (max(var_14, (arr_1 [i_0])));
        var_15 = (min(3464265910, 10));
        var_16 = ((((-(~var_8))) >= ((((max(4294967293, -70)) << (((max(5078514514474488705, var_0)) - 5078514514474488695)))))));
        var_17 = (min(var_17, ((((arr_0 [i_0]) ? ((((((16 ? 4294967275 : 16)) <= -22371)))) : (arr_1 [i_0]))))));
    }
    for (int i_1 = 2; i_1 < 24;i_1 += 1)
    {
        arr_6 [i_1 - 2] = ((((min(149, ((min(1, 1)))))) ? (!24) : ((((var_0 >> (var_10 - 3569343446))) >> ((((0 ? (arr_3 [i_1]) : 1732825930)) - 1732825910))))));

        for (int i_2 = 2; i_2 < 22;i_2 += 1) /* same iter space */
        {
            var_18 = ((!(!127)));
            var_19 = (min(var_19, ((((arr_7 [i_1]) ? ((min((arr_2 [i_1 + 1] [i_2 + 1]), -15))) : (((arr_7 [i_1 - 2]) ? (arr_3 [i_2]) : (!1111510497))))))));
        }
        for (int i_3 = 2; i_3 < 22;i_3 += 1) /* same iter space */
        {
            var_20 = (min(var_20, ((((max(5945823561940858755, 1311049427327327793)) >= 35)))));
            var_21 = (max(var_21, 4294967290));
            arr_11 [i_3] = ((((((((arr_4 [i_1 - 2] [i_3]) ^ 1))) ? -82 : (min((arr_8 [i_1] [i_1] [18]), 4294967293))))) ? (((min((arr_7 [i_1]), (arr_8 [i_1] [i_1] [12]))) | (arr_8 [i_3] [i_3] [18]))) : (arr_2 [i_1] [i_1]));
        }
        var_22 = ((((((~var_4) ? (min(var_7, -22)) : (((arr_4 [i_1] [i_1 - 2]) ? 16 : (arr_8 [i_1] [i_1] [2])))))) ? (((!(arr_2 [i_1 - 2] [i_1 + 1])))) : ((((1 % var_10) <= ((((arr_4 [i_1] [i_1]) ? (arr_4 [i_1] [i_1]) : var_9))))))));
    }
    #pragma endscop
}
