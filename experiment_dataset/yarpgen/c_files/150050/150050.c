/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150050
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_9;
    var_14 = var_9;
    var_15 += 3113887197;

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_16 -= ((-(((arr_0 [i_0 + 2]) ? (arr_0 [i_0 + 3]) : (arr_0 [i_0 + 1])))));
        var_17 += 7168;
        var_18 -= var_8;
    }
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 23;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            {
                var_19 = 7176;
                var_20 = (((max(-83, var_6))));
                var_21 = (58359 ? 27611 : 27636);
                var_22 = (min(var_22, ((((((!(arr_5 [i_1 + 1] [i_2])) ? ((((arr_2 [i_1]) ^ 7181))) : (arr_3 [i_1]))))))));
            }
        }
    }
    #pragma endscop
}
