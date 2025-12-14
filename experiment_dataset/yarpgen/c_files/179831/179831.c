/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179831
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = -9026301679382720312;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_21 = (((min((arr_0 [i_0]), 5283627600191291870)) == ((((!(!-9026301679382720312)))))));
                                var_22 += (min((-9026301679382720309 & var_17), (!9026301679382720306)));
                                arr_15 [i_4 - 1] [i_0] [i_0] [i_0] = (!var_16);
                            }
                        }
                    }
                    arr_16 [i_0] [i_2] [i_0] = ((((max((!-9223372036854775787), 11032))) >= (min(((max(2749960628, var_13))), 14373122407727312797))));
                }
            }
        }
    }
    var_23 = ((!-9223372036854775774) ? ((var_7 ? (-8845857381952409831 <= var_5) : var_0)) : (18 + -1856920299));
    var_24 = ((var_11 & (-9026301679382720312 | 6680370998211071965)));
    var_25 = ((var_8 ? ((25 << (-71 + 95))) : 20));
    #pragma endscop
}
