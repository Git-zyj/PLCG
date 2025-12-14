/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108623
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min((-32767 - 1), 173));
    var_11 -= ((((((((var_8 ? var_4 : var_1))) ? var_4 : var_0))) ? var_1 : ((-((max(var_6, var_1)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_12 = (min((~var_3), ((~(arr_2 [i_0])))));
                var_13 = (((arr_1 [i_0] [i_1]) ? (~var_2) : ((-((13843 ? 30221 : 1))))));
            }
        }
    }
    #pragma endscop
}
