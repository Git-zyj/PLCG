/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123618
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_6 ? (((var_1 && (1 || var_2)))) : (((var_0 || (var_18 || var_0))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            {
                var_20 = (min(var_20, ((max(((((arr_1 [i_0]) ? 1 : (-4676892251570618441 ^ -27)))), (min(112, 17513948980278814341)))))));
                var_21 = ((((var_8 ? (min((arr_2 [i_0] [i_0]), var_6)) : (max(var_1, 143)))) >= (((~(~27))))));
                var_22 *= ((((var_11 == (((max(var_2, var_3))))))));
                var_23 = (min((((((min(130, 125)))) / (arr_2 [i_0] [i_0]))), var_4));
                arr_5 [i_0] = (((((((max(var_11, var_12))) - (arr_1 [i_1])))) ? var_16 : (((~var_14) + -97))));
            }
        }
    }
    var_24 = var_0;
    var_25 = (((max(var_7, (var_2 & var_8))) | 106));
    #pragma endscop
}
