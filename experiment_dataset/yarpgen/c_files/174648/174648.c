/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174648
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_17;
    var_19 &= var_16;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_20 = (min(var_20, 4294967295));
                    var_21 |= min(4294967293, (((((((var_3 != (arr_2 [i_2]))))) > (max((arr_4 [i_0]), var_11))))));

                    for (int i_3 = 3; i_3 < 12;i_3 += 1)
                    {
                        arr_11 [i_0] [i_1] [i_0] = ((!((max((((2254704755 && (arr_7 [i_0] [i_0])))), var_2)))));
                        var_22 = -var_10;
                        var_23 += ((((((arr_1 [i_3]) ? var_0 : ((((arr_2 [i_2]) > (arr_5 [0] [i_1] [0] [i_0]))))))) * (((max(var_9, var_5)) >> (!4294967287)))));
                        var_24 -= ((+(((arr_5 [10] [i_2] [i_3 - 1] [i_3 - 3]) / (arr_5 [6] [i_1] [i_3 - 1] [i_3])))));
                        arr_12 [i_2] [i_2] [i_2] [i_0] [i_2] [i_2] = ((((arr_4 [i_0]) * var_4)));
                    }
                }
            }
        }
    }
    var_25 *= (((((max(var_3, (var_4 && var_16))))) <= (max(4294967284, (var_5 != var_16)))));
    var_26 &= (max(((-4294967281 & (min(3354597891, 203)))), var_10));
    #pragma endscop
}
