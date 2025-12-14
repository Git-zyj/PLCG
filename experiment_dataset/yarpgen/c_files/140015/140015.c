/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140015
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (65 | 7822232260444829398);
    var_15 = min(2030158116, 190);

    /* vectorizable */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_16 = 190;
        arr_2 [i_0] [i_0] = (-((((arr_1 [i_0]) < 1))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_7 [i_1] = (((((-(arr_5 [i_1])))) ? (min((arr_4 [i_1]), (arr_6 [i_1]))) : (((min(190, (arr_5 [i_1])))))));
        arr_8 [i_1] = var_12;
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        arr_11 [i_2] [i_2] = ((-1 ? (arr_6 [i_2]) : (min((arr_3 [i_2]), ((-(arr_9 [i_2])))))));
        var_17 = min((max((1 < 3474569069), ((var_7 ? var_9 : 3474569045)))), (((-((var_9 ? (arr_6 [i_2]) : 66))))));
        var_18 = ((-81 % ((var_5 | (var_9 | 82)))));
        arr_12 [i_2] = (arr_3 [i_2]);
    }
    var_19 = (((((-(min(var_3, 4122960013))))) == ((min(2025210148, 2025210148)))));
    #pragma endscop
}
