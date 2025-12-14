/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130838
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_14;
    var_17 = ((-34 ? 33722 : ((var_3 % (min(var_8, var_13))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = 9223372036854775807;
                arr_7 [i_0] [i_1] [i_0] = ((-63 ^ ((((((arr_5 [i_0] [i_1] [i_1]) & (arr_1 [i_1])))) ? (arr_0 [i_0] [i_0]) : ((9223372036854775807 ? var_14 : (arr_0 [2] [i_1])))))));
                arr_8 [6] |= 18446744073709551600;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            {
                var_18 = (+-64875);
                var_19 = (arr_15 [i_3]);
            }
        }
    }
    #pragma endscop
}
