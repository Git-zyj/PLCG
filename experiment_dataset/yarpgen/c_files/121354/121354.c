/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121354
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_4 ^ ((max(-var_7, var_9)))));
    var_15 = min(var_0, -var_2);
    var_16 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_17 = (((((max(var_1, (arr_3 [i_1])))) < -5924732822341715124)));
                var_18 += var_13;
                var_19 *= ((var_10 * ((((arr_4 [i_0 - 1] [i_0]) ? (arr_2 [i_0]) : (min((arr_3 [6]), (arr_3 [i_0]))))))));
                var_20 = ((0 ? (arr_3 [i_1]) : ((2885558506596294061 ? -2625164469021961855 : 1359491704))));
            }
        }
    }
    #pragma endscop
}
