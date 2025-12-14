/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170770
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_17 *= (((7651178011644204478 / 7651178011644204476) ^ (!134217727)));
                    arr_7 [i_1] [i_1] = ((-1922296258763471806 ? (((((((-1922296258763471806 ? -32641 : 26))) >= ((0 ? 1922296258763471805 : (arr_1 [i_0]))))))) : -7651178011644204456));
                    var_18 = (!(7651178011644204478 == -1));
                    arr_8 [i_0] [i_0] [i_2] &= (((((-((1 ? (arr_5 [i_2] [i_2]) : -33))))) | (min(0, (arr_4 [i_2] [i_1])))));
                }
            }
        }
    }
    var_19 = ((((-27 ? (var_2 <= 11974084359340902119) : ((87 ? var_14 : 127))))) ? -0 : 65535);
    var_20 = ((((max(10265, ((1 ? 1 : -633702370489609660))))) ? ((((min((-127 - 1), 40))) ? (((-1 ? 633702370489609659 : 374359133))) : ((var_16 ? 18446744073709551615 : 87)))) : 1));
    var_21 *= (((((var_1 ^ (min(18446744073709551615, var_6))))) ? var_13 : var_5));
    #pragma endscop
}
