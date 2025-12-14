/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149028
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= max((((268173312 == var_6) ^ (~75))), ((182 ? ((var_11 ? 1 : var_6)) : (var_11 == var_0))));
    var_13 = (max(var_11, ((73 ? -1396949940 : ((max(74, 1)))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_14 = ((((max((1048064 + var_1), (((var_4 ? (arr_2 [i_0 - 3] [i_0 - 3] [i_0 - 3]) : (arr_2 [i_0] [i_1] [i_0]))))))) ? (!8) : 22051786));
                var_15 = (max(var_15, ((max((max(((903396399 ? 255 : 4272915509)), (903396399 << var_5))), var_0)))));
                var_16 *= ((1 & ((-2400 ? var_9 : 11))));
                var_17 -= (63802 % 3391570905);
            }
        }
    }
    #pragma endscop
}
