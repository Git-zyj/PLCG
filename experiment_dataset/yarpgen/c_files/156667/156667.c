/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156667
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_15;
    var_20 = (max(var_16, -3828052524184562471));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_21 ^= ((((max(var_14, (arr_1 [i_0]))))));
                arr_6 [i_0] [i_0] = (1 ? -2076172136 : 1);
                arr_7 [i_0] [i_0] = ((var_4 ? (arr_3 [i_0] [i_0]) : -2076172132));
            }
        }
    }
    var_22 = ((((min((var_0 == 23528), var_4))) * (var_18 >= 134217216)));
    #pragma endscop
}
