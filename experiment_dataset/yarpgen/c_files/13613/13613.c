/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13613
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max((((-(~var_7)))), var_2));
    var_16 = ((2122627826 ? 2122627848 : 2122627831));
    var_17 = ((var_0 ? ((-2122627812 ? (-1426306199 && var_5) : -1)) : ((min(2122627813, 1)))));
    var_18 = (max(3745716118, 2122627812));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [i_0] [14] = (((((233 ? 2172339469 : 1))) ? ((var_5 ? var_14 : 1)) : (max(-13564985, ((2172339483 ? (arr_0 [i_1]) : 248))))));
                var_19 = ((!((((arr_2 [i_0] [i_1]) ? -50 : ((112 ? -51 : (arr_3 [i_0] [i_0] [i_1]))))))));
                arr_5 [i_0] = ((~(((((var_1 ? (arr_2 [i_1] [i_1]) : 2172339483))) ? ((0 ? var_2 : (arr_2 [7] [11]))) : (~var_2)))));
                arr_6 [i_0] [i_0] = ((-(18446744073709551615 * 32745)));
            }
        }
    }
    #pragma endscop
}
