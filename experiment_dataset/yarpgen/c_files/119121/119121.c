/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119121
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((-((~(~var_10)))));
    var_19 = (min(var_19, var_4));
    var_20 = (-var_3 / var_10);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((-var_5 ? ((((((arr_2 [i_1] [i_0] [i_0]) % (arr_2 [i_1] [i_1] [i_1]))) + ((-(arr_3 [i_0 + 2] [i_0] [i_1])))))) : (((((-(arr_0 [i_0])))) ? (((max(var_11, var_15)))) : ((var_16 - (arr_2 [i_0] [i_0] [i_0])))))));
                var_21 = -32767;
                arr_5 [i_0] = (((max(var_12, (arr_2 [i_1] [i_1] [i_1 + 2]))) >= ((((arr_2 [i_0] [i_0] [i_1 + 1]) != var_7)))));
            }
        }
    }
    #pragma endscop
}
