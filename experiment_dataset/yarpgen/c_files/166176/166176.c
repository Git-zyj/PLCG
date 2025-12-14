/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166176
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_1;
    var_16 ^= (((!(15728640 % var_14))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_8 [i_0] [5] = var_0;
                var_17 &= ((+((max((arr_4 [i_0 - 2]), (arr_4 [i_0 - 2]))))));
                var_18 ^= 7628270467900979384;
                var_19 = (min(var_19, (arr_3 [7])));
                var_20 += var_12;
            }
        }
    }
    #pragma endscop
}
