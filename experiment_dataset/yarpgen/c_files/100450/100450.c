/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100450
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = ((((((arr_1 [i_0] [22]) ? (min(18446744073709551615, -2962791969472661088)) : (((38470 ? -3787 : -747084651)))))) ? ((-(!27065))) : 8880));
                var_18 = (((arr_2 [i_1]) ? ((((max((arr_3 [12]), 14601408156516769970))) ? (((arr_1 [i_0] [i_1]) ? 2147483647 : 15658432589393637000)) : (!-26225))) : (((((((arr_2 [18]) ? (arr_4 [i_0] [i_1] [i_1]) : (arr_0 [i_0])))) ? (arr_4 [i_0] [i_1] [i_0]) : (((arr_2 [i_0]) ? (arr_0 [i_0]) : 0)))))));
            }
        }
    }
    var_19 = var_10;
    var_20 = var_12;
    #pragma endscop
}
