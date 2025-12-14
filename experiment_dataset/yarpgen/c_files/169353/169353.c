/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169353
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_19 = (((((~var_11) > (((arr_0 [i_0]) ? 159 : var_2)))) ? (((-2147483644 ? ((var_6 ? -2147483645 : (arr_6 [i_1]))) : (min(2147483644, (arr_5 [i_0] [i_1])))))) : ((123 / ((((arr_4 [i_0] [i_0] [i_1]) ? -2147483645 : 51638)))))));
                var_20 = ((-2147483642 ? (min(((-2147483642 ? 2147483644 : var_9)), (arr_0 [i_0]))) : var_6));
                arr_7 [2] = (max((1073479680 >= 13), var_15));
                arr_8 [i_1] = (!var_3);
            }
        }
    }
    var_21 = var_7;
    var_22 = ((108 ? 127 : (max((((-127 - 1) ? 86 : var_8)), var_5))));
    var_23 = (max(var_23, (((!(((((max(-102, 30))) & 2))))))));
    #pragma endscop
}
