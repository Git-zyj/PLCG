/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119077
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_17 ^= ((255 & ((0 ^ ((((arr_5 [7] [i_1]) ? -92 : 18)))))));
                arr_7 [i_0] [i_0] = ((~(((arr_4 [5] [i_1] [0]) / 128))));
            }
        }
    }
    var_18 = ((-(((963295263 != -4) ? var_16 : (((28027 ? var_6 : 65535)))))));
    var_19 -= ((!((max((-1234803301 | -4), ((37539 ? 2 : 1)))))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 13;i_3 += 1)
        {
            {
                var_20 = (((arr_8 [i_3 - 1] [i_3 + 1]) ^ ((((511 && ((!(arr_12 [i_3] [i_3])))))))));
                var_21 = (2048 / 16907);
                var_22 = (min(var_22, 1812375846));
            }
        }
    }
    var_23 = (min(((max(10, 36525))), ((var_4 ? var_3 : var_5))));
    #pragma endscop
}
