/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118553
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= var_14;
    var_19 = (((!11915) ? -32761 : (var_11 ^ 13039)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = (min(((14038 ? -26215 : 1850637980)), -1472758760));
                var_20 = (min(var_4, ((var_10 - (min(var_16, 1370050695))))));
            }
        }
    }
    #pragma endscop
}
