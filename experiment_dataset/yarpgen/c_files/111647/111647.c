/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111647
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, 2570724652));
    var_15 += ((((((~var_11) ? (min(78, var_8)) : (max(8250613690684382646, 7866))))) ? (~var_8) : ((((~10469) ^ ((max(-5901, 118))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_16 = (((((var_7 ? -7866 : var_6))) + ((min((arr_3 [5] [i_0] [5]), (arr_3 [i_0] [i_0] [i_1]))))));
                var_17 = (max(var_17, ((((var_11 ? ((-(arr_1 [i_0])) : (max(32752, var_9)))))))));
            }
        }
    }
    #pragma endscop
}
