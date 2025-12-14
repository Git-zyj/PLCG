/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159095
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_4;
    var_16 &= ((((min(((106 ? var_1 : var_10)), ((var_4 ? 65532 : var_14))))) && (((1459 << (738489235 || 2307879986073566364))))));
    var_17 *= var_0;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        arr_3 [2] [18] |= ((((39 ? (arr_2 [1] [12]) : 4991801962646789215)) >> ((((~(arr_1 [i_0] [0]))) - 77))));
        var_18 = (arr_1 [i_0] [i_0]);
        arr_4 [i_0] = ((-7491517603797656120 / (arr_0 [i_0])));
    }
    /* LoopNest 2 */
    for (int i_1 = 3; i_1 < 13;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            {
                var_19 ^= (min((arr_1 [i_1] [i_2]), (((arr_1 [i_1] [i_2]) ^ (arr_2 [i_1] [i_2])))));
                var_20 = 0;
            }
        }
    }
    #pragma endscop
}
