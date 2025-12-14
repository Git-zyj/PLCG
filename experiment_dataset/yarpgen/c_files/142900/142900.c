/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142900
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = -3253329883326286661;
    var_14 = -1;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_15 = ((((min(250, 224))) ? var_5 : (((250 ? -6319829416873208199 : -7706090737499283354)))));
        arr_2 [i_0] = (((((16 ? 1 : 250))) ? ((((1 == 6319829416873208198) ? 9223372036854775807 : var_11))) : (min((arr_0 [i_0]), (min(1, 4801673137734910211))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_16 = ((((min(-1517108112, var_6))) ? ((min(133, 253))) : (min((((arr_5 [i_1]) ? var_7 : 1)), (arr_5 [i_1])))));
        var_17 = ((((min(var_2, var_2)))));
        var_18 = min((((((var_10 ? 32829 : 6319829416873208198))) ? (min(32709, 0)) : (((-(arr_4 [i_1])))))), ((min((arr_4 [i_1]), (arr_5 [i_1])))));
        var_19 = (((!var_11) ? (((-((-(arr_3 [i_1])))))) : (((6319829416873208199 != 2994433944465109444) ? ((-6319829416873208199 ? 156 : 6319829416873208215)) : (((min((arr_5 [i_1]), (arr_5 [i_1])))))))));
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        var_20 = var_3;
        var_21 = (((((-((-6319829416873208199 ? 93 : var_2))))) ? ((9223372036854775801 ? (arr_5 [i_2]) : 3695506567614015371)) : (~4665154784631439872)));
        var_22 = (((arr_3 [8]) ? 84 : 0));
        arr_10 [i_2] [i_2] &= ((var_4 ? (arr_4 [i_2]) : (~245)));
    }
    var_23 = 74;
    #pragma endscop
}
