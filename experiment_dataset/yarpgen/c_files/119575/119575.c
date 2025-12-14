/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119575
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_10 -= min((((arr_2 [i_1]) ? (((var_1 ? (arr_5 [i_0] [i_1] [4]) : (arr_4 [i_0])))) : (arr_2 [i_0]))), (((1 || (((arr_5 [i_0] [i_0] [i_1]) && 1939928166))))));
                var_11 *= 43028;
            }
        }
    }
    var_12 -= var_3;
    var_13 = (max(var_13, ((((((((max(67108864, 1))) ? (67108864 || var_9) : 67108864))) ? (!var_7) : (((((max(var_7, var_6))) || var_8))))))));
    var_14 = ((!((max((!var_3), ((var_4 >> (-8321142894529835976 + 8321142894529835983))))))));
    var_15 = ((!(var_9 != var_8)));
    #pragma endscop
}
