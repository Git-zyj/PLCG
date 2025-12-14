/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139005
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            arr_6 [1] = (((((arr_1 [i_1]) ? ((var_6 ? (arr_0 [2]) : var_6)) : (arr_0 [i_1]))) >= (((max(var_8, (arr_5 [i_1] [i_0])))))));
            arr_7 [16] [11] [9] = 8;
            arr_8 [21] = ((((arr_3 [i_0]) ? 4294967295 : (arr_3 [i_1]))));
        }
        arr_9 [i_0] = (arr_0 [9]);
    }
    var_14 = 32767;
    #pragma endscop
}
