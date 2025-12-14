/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161063
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] = 380553366;
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_19 = ((-((((-285962068254537236 ? 11338 : 1))))));
                                arr_14 [i_2] [i_0 + 4] [i_0 + 4] = 3641184347;
                                var_20 += ((-11354 ? 255 : -2901565669686020267));
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 22;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    {
                        var_21 = (max(var_21, -9856));
                        var_22 ^= 16;
                        var_23 |= ((255 ? ((min(11338, 11338))) : ((7600 ? (65535 < 1965520042) : 59080))));
                    }
                }
            }
        }
    }
    var_24 = (!(((((min(-28313, 122))) ? (~4294967287) : (min(1429721142, 4095))))));
    var_25 = ((((((!1) << (4294967287 - 4294967279)))) <= (min(((min(-11339, 22711))), (-6524264154636913140 | 7)))));
    #pragma endscop
}
