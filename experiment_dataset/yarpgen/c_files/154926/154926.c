/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154926
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_8 ? (((var_15 * var_13) ? var_6 : (~var_2))) : ((((((var_3 ? var_13 : 3839293069))) ? (var_7 / var_11) : 4227858432)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_18 = (arr_1 [6]);
                arr_6 [0] [i_1] [i_0] |= (arr_1 [i_0]);
                arr_7 [i_0] = (arr_2 [i_0 + 1]);
                var_19 &= ((67108863 ? ((((arr_5 [i_0] [i_1] [i_0 + 1]) > (arr_5 [i_0] [0] [i_0 + 1])))) : (arr_0 [i_0])));
                arr_8 [i_0 - 1] = 67108863;
            }
        }
    }
    #pragma endscop
}
