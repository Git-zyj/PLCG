/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122801
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, 9));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_19 += (((!((((arr_4 [i_0 - 1]) ? 204 : (arr_3 [i_1])))))));
                var_20 = (max(var_20, (((arr_0 [8] [i_1 - 1]) + ((148504706 + (arr_0 [0] [i_1 - 1])))))));
            }
        }
    }
    var_21 += (~9916182194376392777);
    var_22 = (min(var_22, (((((var_15 > (~var_16)))) | (((min(14759120595398676730, 127))))))));
    var_23 = (min(var_23, (~var_12)));
    #pragma endscop
}
