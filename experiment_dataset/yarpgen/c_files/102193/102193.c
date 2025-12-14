/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102193
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (var_7 == ((-((var_0 ? 1152049250 : 0)))));
    var_15 = (((8985740231005647353 - var_4) - (~0)));
    var_16 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_17 -= ((252 << (((((-9223372036854775807 - 1) - -9223372036854775793)) + 26))));
                    var_18 *= ((-var_13 << (((min(var_5, ((-(arr_1 [i_1]))))) - 12069))));
                    var_19 = (((max(((var_12 + (arr_1 [i_0]))), var_0)) - ((max((((var_4 ? 186 : 39061))), (min((arr_7 [i_1] [i_0]), (arr_4 [i_0] [i_1] [i_0]))))))));
                    var_20 -= (((((max(26888, 0))) >> (((((arr_4 [i_0 + 2] [i_0] [i_1]) ? (arr_5 [i_1]) : (arr_0 [i_1] [i_1]))) - 1579851947328913996)))));
                }
            }
        }
    }
    #pragma endscop
}
