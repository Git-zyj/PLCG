/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154082
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= (((min(var_5, ((var_5 ? var_5 : var_12)))) * (((((var_10 ? var_11 : var_2))) ? (var_11 == var_2) : var_10))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            var_18 = ((-4534474866660119186 ? (~-107) : (min((arr_1 [i_1 + 1]), (arr_3 [i_1 - 1])))));
            arr_7 [i_1] = (arr_5 [i_0]);
        }
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            var_19 = (min(1, 1951090169291124092));
            arr_10 [i_2] [i_2] = ((~((min(116, (1 > 46469))))));
            var_20 = ((((-(arr_8 [i_2] [i_2 - 1] [i_2])))) & (min(var_1, ((243 ? (arr_0 [i_0]) : (arr_2 [i_0]))))));
            var_21 = (max(var_21, ((min((arr_5 [i_2 - 1]), var_7)))));
            var_22 = ((((min((arr_0 [i_0]), -1346810328)) * ((-256314867 ? var_6 : (arr_0 [i_2]))))) / ((min(var_9, (var_6 / 25157)))));
        }
        var_23 = ((+(min((arr_9 [i_0] [i_0] [i_0]), (arr_4 [i_0])))));
    }
    var_24 = ((((min(((var_4 >> (var_7 - 1519248383))), ((var_12 ? var_15 : var_3))))) || ((max((var_13 || 839170057156767572), var_4)))));
    #pragma endscop
}
