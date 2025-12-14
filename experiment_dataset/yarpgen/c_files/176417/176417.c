/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176417
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= var_14;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 9;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] [i_0] = var_5;
                    var_19 &= (min((min(((min((arr_0 [i_1]), var_0))), (((arr_4 [i_2] [2] [0]) ? var_10 : (arr_4 [i_0] [2] [2]))))), var_8));
                    var_20 *= ((((min(((-(arr_2 [i_1]))), ((max((arr_2 [i_0]), (arr_0 [i_0]))))))) ? (((((min(var_1, var_15)) == ((max(-1711421230860107569, 225))))))) : (((var_1 << var_4) ? ((-(arr_1 [i_0] [i_0]))) : -var_15))));
                    var_21 = var_9;
                }
            }
        }
    }
    #pragma endscop
}
