/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105141
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    var_11 = (((((-(arr_8 [i_0] [i_1] [i_0])))) ? ((-((6604906306828832251 ? -4221 : 281474842492928)))) : (((-(arr_3 [i_2 + 1]))))));
                    var_12 += (max(((((((25 ? (arr_1 [i_0] [i_1]) : (arr_8 [i_1] [i_1] [i_1]))) + 9223372036854775807)) << (((((arr_1 [i_0] [i_1]) + 4535424459610982304)) - 7)))), ((min((arr_6 [i_1]), (arr_6 [i_1]))))));
                    var_13 *= ((((((((-281474842492911 & (arr_6 [i_1])))) ? ((max((arr_7 [i_1]), 110))) : (arr_8 [i_1] [i_1] [i_1])))) != (min((arr_5 [i_2 - 1] [i_2 - 1] [i_2]), 281474842492917))));
                }
            }
        }
    }
    var_14 = (min(var_14, (((((min(((min(var_6, var_6))), (~32559)))) ? var_8 : ((17 ? (max(-281474842492907, var_6)) : (((var_0 ? 128 : var_3))))))))));
    var_15 = var_5;
    var_16 = var_8;
    #pragma endscop
}
