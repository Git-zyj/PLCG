/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153259
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [4] [i_0] = ((-5136299488085775944 ? (((141 & 4) ? 15 : ((82 ? 1 : 1827351992789256054)))) : ((max((((80493171 >> (((arr_3 [i_0] [18]) - 38))))), (arr_6 [i_0] [i_0]))))));
                    var_18 ^= ((((arr_2 [i_1 + 1] [i_1 + 1]) == (arr_2 [i_1 + 1] [i_1 + 1]))) ? var_5 : ((((arr_2 [i_1 + 1] [i_1 + 1]) ? (arr_2 [i_1 + 1] [i_1 + 1]) : 66))));
                    var_19 -= ((((max((arr_5 [i_1 + 1] [i_1] [9]), 2765327188))) || (((((((arr_8 [i_0] [i_0]) ? 6994936639431426126 : (arr_4 [i_0] [i_0] [i_0])))) ? (min(2765327160, -97)) : (arr_2 [i_1 + 1] [i_1 + 1]))))));
                }
            }
        }
    }
    var_20 = var_4;
    #pragma endscop
}
