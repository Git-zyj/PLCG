/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120865
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= ((((var_8 >> (((1396342394 / 65535) - 21288)))) * (((310196465 ? var_9 : 133514843)))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = var_3;
        var_11 ^= (((((!(arr_0 [i_0])))) <= (min((~0), ((max(23021, 0)))))));
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                {
                    var_12 = -var_8;
                    var_13 ^= (((((min(50520, var_0))) << 1)));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_13 [i_3] [i_3] [i_2] [i_1] [i_0] = (max(42518, (((min((arr_3 [i_0]), var_7))))));
                                var_14 = 23021;
                            }
                        }
                    }
                    var_15 = (((arr_1 [i_1] [i_2]) >> (var_3 - 273)));
                }
            }
        }
        var_16 -= ((min((arr_1 [i_0] [i_0]), (arr_3 [i_0]))));
    }
    var_17 = (((((var_9 ^ ((max(0, var_1)))))) ? ((max(var_0, -41702))) : (max(8533, var_2))));
    var_18 *= (max(((((~48649) <= ((9324 ? 32256 : 2089416889))))), var_2));
    #pragma endscop
}
