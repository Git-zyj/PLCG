/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171681
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                var_13 = (((((arr_0 [i_0]) + 60844))) >= (arr_3 [i_0] [i_1 - 1] [i_1]));
                arr_5 [i_0] [i_0] = ((var_1 ? (~99) : ((((var_4 <= var_12) && (((1842846381 << (12478214259590027544 - 12478214259590027544)))))))));
            }
        }
    }
    var_14 -= ((var_5 ? (((var_0 + 9223372036854775807) >> ((((39 ? -738169938 : 75)) + 738169942)))) : (((((~var_4) >= var_8))))));
    var_15 = (min(var_6, ((((((2972427260513573281 ? var_5 : var_9))) ? ((max(738169937, 1842846372))) : (min(var_2, var_0)))))));
    var_16 = ((-(~-2451249545272947403)));
    #pragma endscop
}
