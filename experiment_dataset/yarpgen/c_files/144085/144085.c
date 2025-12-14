/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144085
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((!(!var_7)));
    var_17 = ((var_9 <= ((var_5 ? (((max(212, 1)))) : var_8))));

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_18 = ((((min((~28302), var_6))) ? ((var_14 ? (arr_1 [i_0 + 1]) : 243)) : (arr_0 [i_0])));
        var_19 = (arr_1 [2]);
        var_20 = (min(-1264735700, (((arr_1 [i_0]) ? -var_0 : 37156))));
    }
    for (int i_1 = 2; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_21 = 122;
        var_22 *= (((((var_10 * ((var_2 ? 1 : 28563))))) ? (((((3836301577 ? 11641739509579156200 : (arr_3 [i_1 - 1] [i_1 - 1])))) ? 1 : (((arr_2 [i_1]) / (arr_4 [i_1 + 1]))))) : -1));
        var_23 = ((-(((arr_2 [i_1 - 1]) << (((arr_2 [i_1 - 1]) - 825564505))))));
        var_24 = (max(var_24, ((min((min(((-3 ? -656770965 : 6805004564130395415)), (!65535))), 1264735706)))));
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 20;i_2 += 1) /* same iter space */
    {
        var_25 ^= ((3260429658 <= (arr_8 [i_2 - 1] [i_2 - 2])));
        var_26 = (min(var_26, 7618));
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        var_27 += (~28587);
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 9;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                {
                    arr_16 [i_3] [i_4] [i_5] = min((arr_3 [i_3] [i_3]), 4074380685);
                    arr_17 [i_3] [i_3] [i_3] |= 3989808034;
                    var_28 = ((min(7, (arr_11 [i_3] [i_4 + 1] [i_4 - 2]))));
                    arr_18 [i_3] [1] [i_3] = 63;
                    var_29 |= ((~((804863431 ? -0 : ((4294967295 ? 11641739509579156184 : (arr_13 [i_3] [i_4] [1])))))));
                }
            }
        }
        var_30 = ((-((min(32738, (arr_11 [i_3] [i_3] [i_3]))))));
    }
    var_31 = (min(var_31, ((~((max(var_2, 165)))))));
    #pragma endscop
}
