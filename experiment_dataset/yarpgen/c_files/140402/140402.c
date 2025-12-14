/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140402
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_14 = (max(var_14, (((0 >> (((((max(251658240, (arr_1 [i_1]))) ^ ((~(arr_2 [i_0] [i_1] [i_1]))))) - 251678836)))))));
                var_15 = 8589934464;
                arr_5 [i_0] [17] [i_0] = ((((((~(arr_1 [i_0])))) ? (((min(15389, 62)))) : (min(107, var_1)))));
            }
        }
    }
    var_16 = 63;
    var_17 = ((+(((63 * 1) * -108))));
    var_18 = -1301345515;
    #pragma endscop
}
