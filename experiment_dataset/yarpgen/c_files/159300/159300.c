/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159300
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(((((0 ? (-2147483647 - 1) : var_7)) + ((2147483647 ? 2147483647 : -74)))), var_7));
    var_11 = (((((~var_9) ? (~var_1) : var_6))) ? var_0 : ((-var_3 ? ((2132310478 << (22769 - 22769))) : var_3)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_12 = ((((max(-var_0, (max((arr_0 [i_0]), 10341455130263370323))))) ? (((!(((2147483647 ? 395411079 : 2147483647)))))) : (arr_3 [i_0])));
                var_13 &= ((((~(arr_3 [2]))) | 0));
                var_14 = arr_1 [i_0];
            }
        }
    }
    #pragma endscop
}
