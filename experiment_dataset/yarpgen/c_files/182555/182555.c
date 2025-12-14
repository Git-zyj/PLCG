/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182555
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, var_15));
    var_19 = -1716710778;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [i_0] [9] = (((-469160707 < 42331) + 65533));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_15 [i_0] [i_0] [i_0] = (((((469160707 ? (-8748844590417429067 - -8748844590417429063) : (-469160707 / 2798947408)))) ? ((-((8748844590417429087 ? 482193557 : -8947911626297811549)))) : (((((35 / -8748844590417429067) != 469160726))))));
                            var_20 += (((-1347465764 & 18267966965263283531) ? -1716710751 : -1347465764));
                            var_21 &= ((469160696 ? 55 : ((4281881301 << (18267966965263283557 - 18267966965263283542)))));
                            arr_16 [9] [i_1] = (((16374 || 1) ? (35555 ^ -111918298) : (1347465764 | -2859815552644144393)));
                        }
                    }
                }
                var_22 = (max(var_22, 1347465748));
                var_23 *= (((!178777108446268085) < (54609 != -1759245351)));
            }
        }
    }
    #pragma endscop
}
