/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12681
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((min(246, 16516392429183527782))) ? (((15501888637479606060 ? 255 : 79))) : ((~(min(var_6, -23674))))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 11;i_2 += 1)
            {
                {
                    var_15 = (((arr_5 [i_2 - 2] [i_2 - 2] [i_2 - 1]) && (arr_2 [i_0] [i_2])));
                    var_16 = var_12;
                    var_17 = ((min(1993026062, (arr_3 [i_2 + 1]))));
                    var_18 = ((~(min((arr_3 [i_2 - 4]), var_8))));
                }
            }
        }
        var_19 = (arr_2 [i_0] [i_0]);
        var_20 = ((var_1 + ((15501888637479606052 ? ((-8750966946351888906 ? -27037 : 15501888637479606052)) : 1))));
        var_21 &= ((((!(arr_3 [i_0])))));
    }
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        var_22 = (max(-28308, (max((!var_4), var_6))));
        /* LoopNest 3 */
        for (int i_4 = 3; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 13;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 0;i_6 += 1)
                {
                    {
                        var_23 = (arr_10 [i_6 + 1]);
                        var_24 = (min((arr_9 [i_3] [i_6 + 1]), var_7));
                    }
                }
            }
        }
        var_25 = ((!(arr_8 [12])));
    }
    var_26 = var_5;
    #pragma endscop
}
