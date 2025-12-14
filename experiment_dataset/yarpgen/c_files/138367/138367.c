/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138367
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((2029103352547051713 ? (1 * -5822548391419410943) : (var_14 / 14417984189309535683))));
    var_18 &= ((-(((((var_3 ? 3108289407378441658 : -96))) ? ((1 ? var_8 : 1)) : (559829696 / var_5)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_19 *= ((-0 == (arr_0 [i_0] [i_1])));
                arr_6 [i_1] = min(6810567064440350630, (((11852 ? 1 : 61440))));

                /* vectorizable */
                for (int i_2 = 2; i_2 < 15;i_2 += 1)
                {
                    arr_10 [i_0] [i_1] [i_1] [i_1] = (((-9223372036854775807 - 1) % 4096));
                    var_20 = (((arr_5 [i_1]) == (var_5 % var_12)));
                }
                var_21 = (max(var_21, ((min((arr_1 [i_0]), (((min(var_9, var_6)) % (arr_2 [i_0]))))))));
            }
        }
    }
    #pragma endscop
}
