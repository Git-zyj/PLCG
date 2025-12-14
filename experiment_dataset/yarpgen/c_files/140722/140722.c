/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140722
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                var_15 = (min(235, ((var_7 ? (arr_4 [i_1 + 1] [i_1 - 3]) : (arr_4 [i_1 + 2] [i_1 + 2])))));
                arr_5 [i_1] = ((+((((arr_3 [i_1 + 3] [i_1] [i_1 + 3]) <= 200097881)))));
            }
        }
    }
    var_16 = ((((~((524287 << (-32 + 33))))) << ((((((max(var_10, var_1))) | (var_8 & var_12))) - 167))));
    #pragma endscop
}
