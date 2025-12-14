/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165930
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                var_16 *= (arr_7 [i_0] [i_0]);
                var_17 = (arr_0 [i_1]);
                var_18 = (7 >> 7);
                var_19 ^= (max(((((arr_6 [i_0]) < 248))), (((arr_1 [i_1 - 1]) ? 253 : (arr_1 [i_1 + 1])))));
            }
        }
    }
    var_20 = ((((var_4 ? 248 : ((max(47, var_3))))) % var_11));
    var_21 ^= 248;
    var_22 -= 0;
    #pragma endscop
}
