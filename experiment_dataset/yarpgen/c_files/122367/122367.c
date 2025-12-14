/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122367
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_7, ((var_5 ? var_0 : -1297716767))));
    var_18 = 15024;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_0] = (max((18446744073709551613 != 1), (!12)));
                arr_6 [i_0] [i_1] = (((((var_9 ? 255 : (arr_0 [i_0])))) ? -1297716767 : ((((((arr_3 [i_0] [i_1]) * 7))) + (min(3, var_0))))));
                var_19 = (((((arr_3 [i_0] [i_0]) >> ((((var_3 & (arr_3 [i_0 + 2] [i_1]))) - 40)))) << ((((var_16 ^ (arr_0 [i_0]))) - 2466114080658066515))));
            }
        }
    }
    #pragma endscop
}
