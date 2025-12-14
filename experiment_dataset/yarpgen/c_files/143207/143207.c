/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143207
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, 2147483647));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                var_21 *= (max((((arr_1 [i_0 - 1]) ^ (arr_1 [i_0 - 1]))), (!var_1)));
                var_22 = var_18;
                var_23 = ((((((max(122, (arr_1 [1])))) || var_11)) ? (min((max((arr_0 [0]), (arr_0 [i_1]))), ((-(arr_0 [i_0]))))) : (((((!5) == (((-109 + 2147483647) >> (1693449168 - 1693449140)))))))));
                arr_4 [i_0] [i_1 - 1] [i_0] = ((var_17 && ((((arr_1 [i_0]) ? (((2147483647 & (arr_3 [i_0] [i_0] [i_1 - 1])))) : ((4028745574565697471 ? (arr_0 [15]) : 1098021093)))))));
            }
        }
    }
    #pragma endscop
}
