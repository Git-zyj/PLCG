/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128299
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((~var_7) - 338749533);
    var_14 = ((((min(152, 56))) ? (min((max(13748, 8198469288632273440)), (var_1 == 4294967295))) : 152));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [i_0] = var_8;
                    var_15 = (((((~((min((arr_5 [i_0] [i_1] [i_1] [i_2]), (arr_3 [i_0]))))))) - ((~((var_1 ? 65480 : var_1))))));
                }
            }
        }
    }
    #pragma endscop
}
