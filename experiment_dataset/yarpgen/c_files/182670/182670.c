/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182670
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((max(var_2, var_4))) ? var_14 : var_7));
    var_21 = (max(13973, 852519990));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((((((((~(arr_0 [i_0])))) != (min((arr_3 [i_0] [i_0] [i_0]), var_18))))) <= ((13977 ? var_13 : (max(-83827117, 13969))))));
                arr_5 [i_0] = (min(826052329, (((((-8172679983559625545 ? 83827116 : 6656746171690291365))) ? (((-54 ? 11304 : 31054))) : ((13969 ? (arr_1 [i_0]) : 40))))));
                var_22 = (min(var_22, ((((arr_3 [i_1] [i_0] [i_1]) % (arr_3 [i_1] [i_1] [i_1]))))));
                var_23 += 4;
            }
        }
    }
    #pragma endscop
}
