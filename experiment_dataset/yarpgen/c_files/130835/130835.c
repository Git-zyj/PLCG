/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130835
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= var_1;
    var_13 |= var_3;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = var_7;
        var_14 = ((~((min(6045669832182720690, (arr_1 [i_0]))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_12 [i_0] [i_0] [i_0] [i_0] = (!6045669832182720701);
                    var_15 *= ((-(~60175)));
                    var_16 *= (arr_1 [i_0]);
                    var_17 = ((((((((-9223372036854775807 - 1) ? var_10 : var_8))) ? -6045669832182720690 : -406477391)) * ((((((62 ? -1024 : var_8))) ? (38433 == 0) : (!16368))))));
                }
            }
        }
    }
    var_18 = 72057593501057024;
    #pragma endscop
}
