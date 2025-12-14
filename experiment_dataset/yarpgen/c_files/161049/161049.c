/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161049
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_2;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = (((13554 | -3264910609210155269) / (3547593106 | -20419)));
        var_14 += (-126 + ((min(64, 62))));
        var_15 += (min(((min(-70, 154))), 3547593121));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_16 |= -5928133783933924977;
                    var_17 ^= (((max(46649, 72))) / -68);
                    var_18 = -74;
                    var_19 = (max(var_19, 36878));
                    var_20 &= (((1 & -15481) & 60));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 0;i_3 += 1)
    {
        arr_14 [i_3] [i_3] = (max(12219216323693888828, ((((-7741 != 1084460070) == (17921 | 7664623538142739951))))));
        var_21 = (max((((-16 + 9223372036854775807) >> (1084460070 - 1084460048))), (min(3547593102, 9223372036854775805))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        var_22 &= (14584665513488081150 == 67);
        var_23 = (1 != 102);
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 12;i_6 += 1)
            {
                {

                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        var_24 = (min(var_24, (((62 | (-15481 | -74))))));
                        arr_24 [i_7] [i_7] [i_7] [i_4] = (((3041873256833977135 && 1) && 45701));
                        arr_25 [i_7] [i_7] [i_7] [i_7] [6] = 27;
                    }
                    var_25 = (1 | -56);
                    var_26 = (316858150 / 634217448599104381);
                    var_27 = -4251;
                }
            }
        }
        var_28 = 3912597750;
    }
    #pragma endscop
}
