/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128266
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_20 = ((var_7 + (max(var_8, (((arr_3 [i_0]) | (arr_3 [i_1])))))));
                var_21 = 210;
                arr_5 [i_0] = 44;
                arr_6 [i_0] [i_0] [i_0] = (((((arr_0 [i_1 - 1] [i_0]) > var_1)) ? (min(var_12, 212)) : (((min((!var_3), var_6))))));
            }
        }
    }
    var_22 = (max(((((max(var_7, var_13))) ? var_5 : 16384)), 217));
    #pragma endscop
}
