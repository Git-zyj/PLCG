/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135718
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_1] = ((max((arr_3 [i_1]), (arr_3 [i_1]))));
                var_15 ^= (19 ? ((((arr_3 [i_0]) == (arr_0 [i_1])))) : (max(((1 ? -592076537 : 592076507)), (arr_4 [i_0] [i_1]))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                var_16 = (arr_6 [i_3] [i_2]);
                var_17 = min((((((max((arr_8 [i_2] [i_2]), (arr_9 [i_2] [i_2])))) & (min(-1176892647, 127))))), ((592076530 ? 65414 : 16615854004483527530)));
                arr_11 [i_2] = ((~(((max(29917, 10156))))));
                var_18 -= (min((arr_6 [i_3] [i_2]), (((((arr_9 [4] [4]) ? 592076517 : 592076499))))));
            }
        }
    }
    var_19 |= var_4;
    var_20 = var_4;
    #pragma endscop
}
