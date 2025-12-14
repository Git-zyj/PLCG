/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100859
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, 234));
    var_18 = (min(var_18, ((min((((!(((9214364837600034816 ? -8004 : var_9)))))), 19)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                var_19 = (min(((((min(var_15, var_15))))), (min(13352202856816573512, 253))));
                var_20 *= ((((max((~70), (((arr_0 [5]) ? (arr_3 [i_1]) : -1))))) ? (min(((min(var_8, var_11))), 29941130)) : (min(((-(arr_1 [i_0] [12]))), 44670))));
                var_21 = (((((((max(5094541216892978095, 5094541216892978086))) ? var_9 : ((var_4 ? var_6 : var_14))))) ? ((((13352202856816573517 ? 5094541216892978081 : (arr_1 [i_0] [i_0]))) >> (41696 - 41645))) : (((var_2 << ((min(41697, 3))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 18;i_3 += 1)
        {
            {
                arr_12 [i_2] [i_2] [i_2] |= ((13352202856816573538 + (871280090 && 3423687209)));
                arr_13 [12] [i_3] = var_14;
                arr_14 [i_3] [i_3] = ((((!(3423687188 && var_14))) ? (((max(-8019, (arr_11 [i_3 - 2] [i_3] [i_3 - 3]))))) : ((((max(5094541216892978102, (arr_11 [i_3] [i_3] [i_2])))) ? var_1 : -var_1))));
            }
        }
    }
    #pragma endscop
}
