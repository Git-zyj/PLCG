/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108614
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 19052;
    var_14 = ((((((var_6 > -80) & var_8))) ? ((((1 > 0) < (112 | var_2)))) : (((var_4 && (-112 && 23114))))));
    var_15 = (max(var_15, ((((((((15737942283320751012 ? var_3 : 0)) >= (var_7 < 224)))) / -112)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                var_16 += (((((((-40 > 1) && (((-1565511658 ? 508 : 13461169306450654018))))))) >= ((1565511649 ? (((((arr_0 [i_0]) && (arr_0 [i_1]))))) : (29355 | 1205211317108605224)))));
                var_17 = 34639;
            }
        }
    }
    #pragma endscop
}
