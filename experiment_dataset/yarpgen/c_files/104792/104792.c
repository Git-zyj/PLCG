/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104792
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, (((var_10 - ((max(95, var_5))))))));
    var_21 += var_11;
    var_22 = (min((var_8 ^ var_13), (((((var_11 ? var_4 : 17471569600938802637)) == ((min(var_19, 0))))))));
    var_23 = ((var_3 < (((var_9 << (1131176059 - 1131176036))))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_24 = (min((((var_10 - (arr_0 [i_0])))), ((var_2 ? (((arr_1 [i_0]) + (arr_0 [i_0]))) : (arr_1 [i_0])))));
        arr_4 [i_0] [i_0] = (((((((max((arr_0 [i_0]), 95))) ? (arr_0 [i_0]) : (1 < 255)))) ? var_2 : ((((var_15 || (arr_3 [i_0])))))));
        var_25 = (206 ? -798186788 : (((!(((1 ? var_0 : var_6)))))));
        var_26 = arr_1 [i_0];
    }
    #pragma endscop
}
