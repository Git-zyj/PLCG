/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169117
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, (((-((var_8 ? (((var_9 ? var_8 : 0))) : ((var_2 ? var_15 : 166073089335470308)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_19 *= ((((((((var_3 ? -5128526587367272699 : var_3))) ? (18280670984374081296 / -1) : (0 / 3976521352)))) ? (((~(arr_3 [11] [10] [i_1 + 1])))) : (~18280670984374081296)));
                var_20 = ((((18280670984374081307 && (1 || var_15))) ? (arr_4 [i_0]) : (arr_3 [i_1] [i_0] [i_0])));
            }
        }
    }
    #pragma endscop
}
