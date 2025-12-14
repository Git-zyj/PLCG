/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137680
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = -var_8;
    var_13 -= var_8;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
        {
            var_14 = (max(var_14, (237650380936920865 == 18209093692772630747)));
            var_15 = (min(var_15, ((((arr_0 [i_0]) < (arr_0 [i_0]))))));
        }
        for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
        {
            arr_6 [i_0] = ((((((arr_0 [i_0]) || 54))) >> ((((-9223372036854775803 ? 152 : 1)) - 144))));
            arr_7 [i_0] = (((4884 / 28823) + (((arr_4 [i_2] [i_0] [i_0]) * 8))));
        }
        arr_8 [i_0] [i_0] = -36717;
    }
    var_16 = ((var_5 / ((((min(var_2, var_4))) ? 29460 : (max(var_1, 18209093692772630750))))));
    #pragma endscop
}
