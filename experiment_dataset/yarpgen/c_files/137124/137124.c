/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137124
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((53182 | -100) && -var_0));
        arr_3 [i_0] = (((((((((arr_0 [i_0]) != var_7))) & ((-(arr_1 [i_0])))))) ? (100 / -413190965) : var_2));
        arr_4 [i_0] = (((~var_8) << (!12353)));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_10 = (max(var_10, (((((((2769 ? 53182 : var_3))) ? (~var_3) : (53197 & var_8)))))));
        var_11 ^= (((((60 ? (!0) : (var_2 + var_9)))) ? (((var_8 | (arr_5 [i_1] [i_1])))) : ((var_3 & (((~(arr_1 [i_1]))))))));
    }
    for (int i_2 = 4; i_2 < 18;i_2 += 1)
    {
        var_12 = (-((53176 ? -1826938207 : 12338)));
        arr_10 [i_2 - 3] [i_2 + 1] = (((min((arr_5 [i_2 - 3] [i_2 - 1]), var_6)) | ((min(var_9, ((124 ? 8355840 : (-127 - 1))))))));
        arr_11 [i_2 - 3] = ((((max((arr_7 [i_2 - 2]), (arr_7 [i_2 + 1])))) ? ((53197 & (arr_7 [i_2 + 1]))) : (arr_7 [i_2 - 2])));
    }
    var_13 = (min(var_2, var_8));
    #pragma endscop
}
