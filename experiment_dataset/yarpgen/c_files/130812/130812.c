/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130812
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= ((~(~var_2)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                var_13 = (max(var_13, 221));
                arr_6 [i_1] [i_1] [i_1 + 4] = (max((!48), (!16)));
                arr_7 [i_1] [17] = (min(-14, -17));
                arr_8 [i_1] [i_1] = -2242263687818370247;
            }
        }
    }
    var_14 = (!var_3);
    #pragma endscop
}
