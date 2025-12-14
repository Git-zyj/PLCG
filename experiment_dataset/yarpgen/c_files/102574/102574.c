/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102574
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= (min(var_4, (~2403093884953009948)));
    var_11 = (min(var_11, ((max(((max(42693, (var_2 != var_8)))), ((((9793654111127537967 ? 8653089962582013648 : var_9)) | var_3)))))));
    var_12 = var_9;
    var_13 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_14 = (min(var_14, ((((-95 & -32755) ? var_8 : (((((((57611 >= (arr_2 [i_1])))) == (arr_4 [i_0] [i_0] [i_0]))))))))));
                var_15 = max(((max((arr_1 [i_0 + 4]), 91))), (((-54 && -6191123349235020995) + 2113854007)));
                arr_5 [i_0] [i_0] [i_1] = var_0;
            }
        }
    }
    #pragma endscop
}
