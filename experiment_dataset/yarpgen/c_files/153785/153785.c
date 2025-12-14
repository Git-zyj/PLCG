/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153785
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_12 = (max(var_12, 8611));
                var_13 -= ((+((-(((arr_6 [i_1]) + var_1))))));
                arr_7 [i_0] = (arr_1 [i_0]);
                var_14 = (max(var_14, (((((((var_6 + 63) != (arr_5 [i_1] [i_1] [i_1 - 1])))) + (((max(24, (arr_3 [6]))))))))));
            }
        }
    }
    var_15 = ((-17016 ? ((-(~var_6))) : var_9));
    var_16 = (((((min(56925, 52080))) != ((max(var_0, -31222))))));
    var_17 = var_6;
    #pragma endscop
}
