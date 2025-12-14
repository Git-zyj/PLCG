/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176419
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min((((var_5 - -1147641123739249658) ? (65517 + var_9) : var_7)), var_13));
    var_15 ^= (min(3890111340932025868, -2139314163386453862));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_16 = -4909889201201067232;
                    var_17 = ((9127157968707558489 ? 6872221743996973664 : -750197791));
                    arr_6 [i_0] [i_0] [i_0] = (arr_1 [i_1] [i_1]);
                    var_18 = (max(var_18, (((((((arr_4 [i_2] [i_2] [i_2] [i_2]) ? (((!(arr_4 [i_2] [i_1] [i_1] [i_1])))) : (((!(arr_4 [i_2] [i_1] [i_0] [i_0]))))))) ? (arr_1 [8] [i_1]) : (arr_1 [16] [16]))))));
                }
            }
        }
    }
    var_19 ^= var_7;
    #pragma endscop
}
