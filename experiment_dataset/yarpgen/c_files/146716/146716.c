/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146716
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] &= ((+(((arr_4 [i_1]) ^ var_4))));
                var_14 = (max(var_14, ((((min((arr_4 [i_0]), var_8)) != ((((arr_2 [i_0] [i_0]) || (arr_1 [i_0] [i_1])))))))));
            }
        }
    }
    var_15 |= ((((max(var_11, var_7))) ? var_6 : var_7));
    var_16 = (max(var_16, ((-((var_2 - (min(var_2, var_7))))))));
    #pragma endscop
}
