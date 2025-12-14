/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124822
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, (((((((-1 ^ var_2) - 8974452025664740007))) ? ((6111745052364436820 & (((var_7 ? 67108863 : 54318))))) : ((min((61211 << 1), 74))))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_12 -= ((((arr_4 [i_0 - 2] [i_0 + 1]) / (max((arr_7 [i_0] [i_1] [i_2]), (arr_5 [i_2] [i_1] [i_0] [i_0]))))) + (min(((max((arr_2 [i_0] [i_1]), (arr_7 [i_0] [i_0] [i_0])))), (((arr_2 [i_0] [i_1]) ? (arr_7 [i_0] [i_1] [i_2]) : (arr_5 [i_2] [i_1] [i_2] [i_2]))))));
                    var_13 |= (!((max(74, 1))));
                }
            }
        }
    }
    #pragma endscop
}
