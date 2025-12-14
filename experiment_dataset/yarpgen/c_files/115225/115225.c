/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115225
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min((max(((var_10 ? var_10 : var_2)), ((max(-22128, var_10))))), ((min(var_4, (255 && -599222957))))));
    var_14 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_15 = ((((!((max(-599222948, 69))))) ? (~var_3) : ((-var_8 ? (min(var_4, var_0)) : (!var_4)))));
                var_16 = (min(var_16, (((~(min((~var_7), (~var_5))))))));
                arr_6 [i_0] = 599222949;
            }
        }
    }
    #pragma endscop
}
