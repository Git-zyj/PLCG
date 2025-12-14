/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136060
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, (((!(var_6 ^ var_0))))));
    var_12 ^= ((0 ? 85 : 226));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            {
                var_13 ^= var_1;
                var_14 = (min(var_14, ((min(((29 ? 13 : -1)), (((min(1181468131, -623522342)))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_15 = ((((arr_0 [i_3 - 1]) * ((min(237, 0))))) | -694161673);
                            var_16 -= ((-(((arr_0 [i_2]) | ((250 | (arr_5 [12] [i_2] [i_2] [19])))))));
                            var_17 -= (128 - 2);
                            var_18 *= ((-(49 / 267911168)));
                            var_19 = (min(var_19, (!1545664114)));
                        }
                    }
                }
                var_20 *= (arr_4 [i_0] [i_1] [i_1 - 3]);
                var_21 ^= (-790892098 | 92);
            }
        }
    }
    var_22 = (min(var_22, var_1));
    #pragma endscop
}
