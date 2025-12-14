/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181952
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((min((((var_11 + 9223372036854775807) << (12883 - 12883))), 1051570418)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_21 = (min((-2054292102 || var_16), (((arr_0 [i_0 - 1] [i_0]) || (arr_0 [i_0 + 3] [i_0])))));
                arr_5 [8] [i_0] [i_0] = 1795897530;
                var_22 = -2054292102;
                var_23 = ((((arr_4 [i_0]) ^ (min(5995, 68719476735)))));
                arr_6 [i_0] = (min(((((arr_3 [i_1]) > var_10))), (arr_4 [i_0])));
            }
        }
    }
    var_24 = var_4;
    #pragma endscop
}
