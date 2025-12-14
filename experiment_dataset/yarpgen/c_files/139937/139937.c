/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139937
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_13, (min(var_14, (((9196805151931776478 ? -15474 : -15474)))))));
    var_21 = ((((max(569361734, var_11))) ? ((((2071595574 > -3083200715957625450) - ((max(-15474, 7)))))) : (min(var_10, 2945835271))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_22 = ((-(!970339658)));
        var_23 ^= (!536870656);
        arr_2 [i_0] = (~6466156405948451750);
    }
    for (int i_1 = 1; i_1 < 16;i_1 += 1)
    {
        var_24 = (max(var_24, ((((1 || 296) ? ((-7 ? 11 : -17294)) : ((max(-15474, -1981))))))));
        arr_7 [i_1 + 2] [i_1] = ((((1913839904 ? 31331 : 569361717)) * (-1595992904 - -1595992904)));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_25 = ((173 ? ((-6017539910190818743 ? 3745022835 : 2249491605211160991)) : 3926178156));
        var_26 = -211;
        arr_11 [i_2] = (-613486206 & 4801518342136203826);
        var_27 *= (~-7);
        var_28 = (min(var_28, 58698));
    }
    var_29 = (max(var_29, ((max(((max(var_18, var_10))), 497851893414119688)))));
    var_30 *= var_6;
    #pragma endscop
}
