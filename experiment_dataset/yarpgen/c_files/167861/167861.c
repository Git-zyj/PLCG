/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167861
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_7 && ((((10543 ? var_13 : 17047249430434721849))))));
    var_15 = (((((~(var_1 ^ var_4)))) ^ (((~var_1) ? (var_0 & 17047249430434721849) : (-1 & 30870)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_0] = ((~(((!(!-17571))))));
                    var_16 -= -281903115;
                    arr_9 [9] [i_1] [i_0] = ((+(((!10543) ? (arr_4 [i_0] [3]) : (-32767 - 1)))));
                }
            }
        }
    }
    #pragma endscop
}
