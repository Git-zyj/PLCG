/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124217
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_20 = (((arr_4 [i_0] [i_0]) ? (((~-8488569584616071189) ? (max(8842147139225385621, -1)) : (max(1073479680, 1476030070008019998)))) : (arr_0 [i_0])));
                arr_7 [i_1] = (max(513003608, 1073479680));
            }
        }
    }
    var_21 = (min((!6791), (max(-var_13, var_19))));
    #pragma endscop
}
