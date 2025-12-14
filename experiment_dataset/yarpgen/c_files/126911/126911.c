/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126911
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = -var_8;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = (((((-var_7 ? var_9 : -var_11))) ? (((108 ? ((-(arr_1 [i_0]))) : 14796))) : (((((var_9 ? var_14 : var_5))) ? -var_0 : (((arr_0 [i_0]) ? 14796 : 6658492912537504528))))));
        arr_3 [14] |= (((((50726 + -1405354393) ? ((25380085 ? var_5 : 14796)) : (arr_0 [4])))) ? ((((arr_0 [6]) ? ((30521 ? (arr_0 [16]) : (arr_0 [12]))) : ((-(arr_0 [4])))))) : (((arr_1 [18]) - var_6)));
        var_16 = (217 + ((-((-(arr_0 [20]))))));
    }

    for (int i_1 = 2; i_1 < 21;i_1 += 1)
    {
        var_17 = (((--14800) >= ((-123 ? 55542 : ((var_0 ? 5665295716227031603 : var_5))))));
        var_18 = (((var_9 ? -66 : (arr_6 [i_1 + 1]))) * -var_14);
    }
    var_19 = -var_5;
    #pragma endscop
}
