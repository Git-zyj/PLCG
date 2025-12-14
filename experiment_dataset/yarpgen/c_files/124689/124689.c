/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124689
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, ((((max((36028779839094784 > var_7), (!4503598553628672))) ? ((1 ? (min(var_0, -8228137629949608575)) : var_15)) : var_17)))));
    var_19 = (max(var_19, var_10));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_1] [6] [i_1] = 8228137629949608575;
                var_20 &= (max((min(((var_2 >> (((arr_1 [i_0] [i_1 - 2]) + 2924257215695637004)))), ((7508014203012579958 ? 1 : -7508014203012579961)))), (arr_4 [16])));
                var_21 = (max(((max((!var_9), (min((arr_4 [i_1]), var_14))))), (max(15674005364400760770, 1))));
                var_22 |= (arr_3 [i_0 + 1] [1]);
            }
        }
    }
    #pragma endscop
}
