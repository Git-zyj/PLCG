/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128586
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((3123477370503518880 - var_7) ? 2694574976 : ((var_10 << ((((var_0 ? var_8 : var_11)) - 6479942150834380482))))));
    var_14 = 1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_15 &= ((~((((((var_3 >= (arr_3 [12] [i_1]))))) / -6088083452667522360))));
                            arr_10 [9] = (!3671008683395691096);
                        }
                    }
                }
                arr_11 [2] = (min((min(-17996, (arr_3 [13] [i_1]))), -61));
                var_16 = (min(var_16, (((2214780222 ? 5279228867766483985 : (~11460025096743529711))))));
                var_17 = (max(var_17, (((((max((arr_4 [13]), var_6))) ? (((!(47727177 ^ var_12)))) : ((-43965 * ((-(arr_9 [i_0] [i_1 - 3]))))))))));
            }
        }
    }
    #pragma endscop
}
