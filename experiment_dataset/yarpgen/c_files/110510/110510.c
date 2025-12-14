/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110510
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((((min((arr_2 [i_0] [i_1 + 1]), (arr_0 [i_0] [i_1 + 1])))) ? 18446744073709551615 : var_1));
                arr_5 [i_0] [i_0] = (max((!576459652791795712), 65528));
            }
        }
    }
    var_12 = (((var_7 == (var_10 ^ var_7))) ? var_6 : (((~var_9) ? 65535 : (var_8 & var_10))));
    #pragma endscop
}
