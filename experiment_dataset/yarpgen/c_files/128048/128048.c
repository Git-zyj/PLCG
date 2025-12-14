/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128048
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (var_6 < var_3);

    /* vectorizable */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_15 = (-32767 - 1);
        var_16 = 89;
        arr_4 [i_0] = -1;
        arr_5 [i_0] = ((arr_1 [i_0]) ? (arr_1 [i_0]) : var_11);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_17 = (~335220884);
                    arr_13 [i_0] [i_2] [i_1] [i_0] = ((5849926953765479540 ? var_11 : (arr_11 [i_0] [i_0] [i_0] [i_1])));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        var_18 = ((8494784979361652686 != (arr_7 [i_3])));
        var_19 |= ((32756 ? -400740526 : (((7385668198914239739 != (arr_6 [i_3]))))));
        arr_18 [i_3] [i_3] = ((var_7 ? (!var_13) : 7516));
    }
    for (int i_4 = 4; i_4 < 9;i_4 += 1)
    {
        var_20 = (min(-7106, var_1));

        for (int i_5 = 1; i_5 < 7;i_5 += 1)
        {
            var_21 = ((+(min((arr_14 [i_4 - 1]), (arr_12 [i_5] [i_4] [i_4] [i_4])))));
            arr_23 [i_4] [i_5] [i_5] = ((((arr_22 [i_5 - 1] [i_4 - 4]) <= ((65520 ? -13468 : (-32767 - 1))))) ? ((-((-817393524141651968 ? -1 : 25674)))) : (~37989934702750172));

            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {

                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    var_22 &= 65535;
                    var_23 = (min(var_23, var_12));
                    var_24 = -1;
                    var_25 *= (((~var_1) ? ((max(28459, (arr_11 [i_4] [i_5 - 1] [i_6] [i_7])))) : ((-2661752641514803828 ? (arr_11 [i_4] [i_5 + 1] [i_5] [i_7]) : 14))));
                    var_26 = ((((-6775375467567016758 < (-9 > 2147483647))) && (((~(max(21047, 6801163403159269627)))))));
                }
                for (int i_8 = 1; i_8 < 10;i_8 += 1)
                {
                    arr_31 [i_5] |= ((min(65535, (arr_21 [i_4] [i_5] [i_8 + 1]))));
                    var_27 = (((+((var_1 ? (arr_14 [i_4]) : (arr_17 [i_4]))))) | (((-(arr_6 [i_4])))));
                }
                var_28 = (!31225);
                var_29 ^= ((((~(66 >= 4809)))) ? var_10 : (max((min(var_11, (-9223372036854775807 - 1))), (((var_5 ? 20654 : 20313))))));
                var_30 ^= (!-1);
                arr_32 [i_4] [i_6] = ((11732 ? (max((arr_14 [i_5 + 3]), var_5)) : var_3));
            }
        }
        var_31 -= -10039;
        var_32 = (((min(3195018808055931187, 32389)) ^ var_6));
    }
    #pragma endscop
}
