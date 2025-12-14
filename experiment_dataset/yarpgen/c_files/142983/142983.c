/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142983
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_12 -= ((((-127 - 1) ? 163 : 69)));
                    arr_9 [1] [5] [1] [i_2] = (min(-79, 125));
                    var_13 = (((((3845752076573380556 / (max(2382754962, (arr_1 [i_0])))))) ? var_10 : 69));
                }
            }
        }
        var_14 = (min(var_14, 84));
        var_15 = ((((min(((((arr_3 [i_0] [i_0]) && 1458753767))), (max(266287972352, (arr_7 [i_0 - 1] [i_0] [15] [7])))))) ? ((((((arr_8 [i_0 - 4] [i_0 + 1] [i_0 - 2] [i_0 + 1]) + 9223372036854775807)) >> (((arr_8 [i_0 - 4] [i_0 - 1] [i_0 - 2] [i_0 - 1]) + 7853532232368969637))))) : (((((var_4 ? (arr_0 [i_0]) : var_8))) ? (((arr_7 [i_0 - 1] [i_0] [i_0 - 4] [i_0 - 1]) ? -6025 : (arr_3 [i_0] [i_0]))) : (1158267486 % var_0)))));
        arr_10 [i_0] = 1;
    }
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        var_16 = (((arr_12 [i_3]) ? (min(((min((arr_12 [i_3]), (arr_12 [i_3])))), (((arr_11 [i_3]) ^ (arr_11 [i_3]))))) : (arr_11 [i_3])));
        arr_13 [i_3] = (((max((266287972352 < var_4), (((arr_12 [i_3]) / var_11))))) ? (max((((arr_11 [i_3]) ? (arr_12 [i_3]) : var_6)), (((arr_12 [i_3]) ? (arr_12 [i_3]) : (arr_12 [i_3]))))) : (((1 ? 5739 : -1277455078))));
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                {
                    var_17 += ((!((min((~var_2), ((23557 ? 2506374852 : (arr_18 [i_3]))))))));
                    var_18 = ((~((-(var_3 || 266287972352)))));
                }
            }
        }
        arr_19 [i_3] [i_3] &= ((59815 ? -9701 : -50));
    }
    var_19 = (!var_4);
    #pragma endscop
}
