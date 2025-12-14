/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148797
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((-(~var_2)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_19 = ((((((((arr_5 [i_0] [i_1]) - var_6)) + -var_1))) ? (~-7230200985621168269) : ((min((max(var_11, 5376)), ((min(var_17, 47713))))))));
                var_20 = (max(var_20, (5372 > 1401723595)));
                var_21 = ((~((((!4064) && (!5376))))));
                var_22 ^= ((((((arr_5 [i_0] [i_0]) >> (arr_5 [i_0] [i_0])))) ? (arr_5 [i_0] [i_1]) : (min(4078, -5589690596787429846))));
            }
        }
    }
    #pragma endscop
}
