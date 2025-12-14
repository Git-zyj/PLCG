/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151978
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    var_20 = ((+(((arr_6 [i_2] [i_2 - 1] [i_2 - 1]) ? (arr_6 [i_2 + 1] [i_2 - 1] [i_2 - 1]) : var_14))));
                    var_21 -= var_14;
                    var_22 = (min(var_22, (arr_1 [i_0])));
                }
            }
        }
    }
    var_23 = ((~(min((var_15 > var_6), ((var_14 ? -107110950659282793 : var_16))))));
    var_24 = (((500322709 + 1463142400) - var_19));
    #pragma endscop
}
