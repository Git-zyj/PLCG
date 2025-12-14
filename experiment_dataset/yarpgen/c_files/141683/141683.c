/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141683
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_1] [i_2] = (((((min((arr_5 [i_0]), -117))) ? (~126) : var_10)));
                    var_11 = ((var_1 ? ((min(94, (arr_0 [i_2])))) : (((((-117 ? 117 : var_0))) ? ((-117 ? var_10 : 15306208558702913886)) : var_4))));
                    var_12 = var_4;
                    var_13 ^= ((((max(((10 ? 8521094380932598025 : 6590782428538010291)), ((max(-13936, -67)))))) ? var_1 : (((!(((var_1 ? 14460496011480430586 : -117))))))));
                }
            }
        }
    }
    var_14 = var_2;
    #pragma endscop
}
