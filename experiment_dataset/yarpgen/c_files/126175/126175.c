/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126175
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((6569 ? -8231 : ((-8231 ? var_3 : var_9))))) ? ((((min(var_0, -909552001))) ? ((15226477691698786759 ? 8231 : 15226477691698786759)) : -32731)) : var_11));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_13 *= 32767;
                arr_4 [i_1] = (((~var_4) >= (min(((-(arr_2 [22] [i_1] [i_1]))), (min((arr_2 [i_0] [i_1] [9]), var_5))))));
                arr_5 [i_1] [i_1] = -32731;
            }
        }
    }
    var_14 = (127 % var_8);
    var_15 = (max((((var_11 ? -153773552 : ((var_4 ? -1 : 0))))), ((((var_0 ? var_11 : var_3)) + 15226477691698786745))));
    var_16 |= (((min((0 + var_10), 1))) ? (0 || var_3) : (((!var_6) ? ((var_1 ? var_0 : var_9)) : (!15226477691698786766))));
    #pragma endscop
}
