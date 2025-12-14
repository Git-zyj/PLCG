/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162957
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(((((min(24077, var_5))) ? (!1) : ((max(var_16, var_10))))), ((((var_7 >> var_11) == 1)))));
    var_19 = (max(var_19, var_10));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_20 = (max(var_20, ((((!(((360070849330369614 ? (arr_0 [i_0] [i_1]) : 1683654918)))))))));
                var_21 = (min((((((min(var_12, (arr_0 [i_0] [i_1]))))) | ((11 ? (arr_3 [i_0] [i_0] [i_0]) : (arr_1 [i_0] [i_1]))))), (!3493065043)));
            }
        }
    }
    #pragma endscop
}
