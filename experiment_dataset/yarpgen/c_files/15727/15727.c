/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15727
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_10 = (max(var_10, (arr_1 [i_0])));
                    arr_6 [i_0] [i_0] [i_0] = ((-((2006901324 ? (((arr_4 [i_0] [i_0]) ? (arr_1 [i_2]) : -5393668201880104836)) : ((8481474521338227628 ? -5393668201880104836 : 97))))));
                }
            }
        }
    }
    var_11 ^= (((((-2687030141106664992 ? 160 : 5393668201880104835)) * var_0)));
    #pragma endscop
}
