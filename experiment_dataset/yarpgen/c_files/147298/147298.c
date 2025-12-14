/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147298
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_18 ^= (((((4294967295 ? 915655567 : 110))) / 4294967268));
                arr_5 [i_1] = (!44712514);
                var_19 = ((((min((0 ^ 4294967259), (58879 | 30239)))) <= ((~((-5680998112571340701 ? var_2 : var_6))))));
                arr_6 [i_1] = (max((((44712512 != 14783) & ((var_3 ? var_4 : var_1)))), (((var_6 ? 3484299926 : var_17)))));
            }
        }
    }
    var_20 = (min((max((466448713 <= var_7), var_8)), var_16));
    #pragma endscop
}
