/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161727
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_4 + (min((~176), var_10))));
    var_12 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_13 = (max(var_13, ((((((max(5217799384184384070, -51)) >> (((~-11110) - 11063))))) ? (min(7258213803196179047, (((12186398503442553962 ? 112 : -100))))) : ((2501778119823874260 >> (min(13228944689525167546, 1))))))));
                    var_14 ^= ((((min((arr_2 [i_0] [i_0] [i_2]), 15))) > (arr_2 [i_2] [i_2] [i_2])));
                }
            }
        }
    }
    var_15 = var_4;
    var_16 = (((min(var_0, (min(1, 101))))));
    #pragma endscop
}
