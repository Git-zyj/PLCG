/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163841
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = -var_5;
    var_11 = (((((((max(3917499851, 3917499868))) ? (-9223372036854775807 - 1) : (0 / 2952006780)))) ? ((2952006780 ? ((16274604944623971731 ? 2172139129085579884 : 7292017966787051141)) : -2172139129085579885)) : 2));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_12 = ((((((var_5 ? (arr_4 [i_2]) : 16274604944623971731)))) ? var_9 : var_8));
                    arr_9 [i_0 - 1] = ((((min((1 > 0), (16274604944623971743 ^ var_7)))) ? ((var_3 & (min(var_4, var_3)))) : ((((!(!var_1)))))));
                }
            }
        }
    }
    #pragma endscop
}
