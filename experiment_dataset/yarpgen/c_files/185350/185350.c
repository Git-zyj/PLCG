/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185350
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_0;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_17 = var_3;
        var_18 = (((((127 ? 1730320943 : 9822814884722547364))) ? ((((((arr_0 [i_0]) & 1)) ^ (((arr_1 [12] [i_0]) ? 224182121 : 255))))) : (max(52, (arr_1 [i_0] [i_0])))));
        var_19 ^= (var_2 / (arr_2 [0]));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_20 = (((4294967295 << (-1023 - 4294966252))));
            var_21 ^= ((((max(var_11, (arr_3 [i_0] [i_0] [i_0]))))));
            arr_6 [i_0] [i_1] = max((((~34003) + -4294966245)), var_4);
            var_22 = (min(var_22, (((((min(8192, (arr_0 [i_0])))) ? -1023 : (((-(arr_0 [1])))))))));
        }
        for (int i_2 = 4; i_2 < 9;i_2 += 1)
        {
            var_23 = (((arr_7 [i_2] [i_2 - 1] [i_2 - 4]) < (min(3552437475, 57333))));
            var_24 = (((((9139080 ? 1 : 75))) ? (~11887506479817075822) : ((((arr_1 [1] [i_2 - 3]) ? (arr_1 [i_2 - 4] [i_2 - 4]) : (arr_1 [i_2] [i_2 - 3]))))));
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_25 = ((~(((((2 ? -55 : (arr_8 [i_0] [i_0] [i_0])))) / 18446744073709551615))));
            arr_11 [i_0] = (min(((((((-(arr_3 [i_0] [i_3] [i_3])))) ? (((arr_0 [i_0]) * (arr_4 [i_0] [i_3] [i_3]))) : 7))), ((((((arr_3 [i_0] [i_0] [i_3]) ? var_12 : 1))) ? (((arr_10 [i_3]) ? 1 : (arr_5 [i_0] [i_3] [i_3]))) : 1))));
            var_26 -= (((min((arr_2 [12]), (max(var_1, (arr_1 [i_0] [i_3]))))) << ((((-(arr_10 [i_0]))) + 17))));
            var_27 = (min((arr_10 [i_0]), ((max(0, 8)))));
        }
    }

    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        var_28 = ((((max((((arr_12 [i_4]) / 4294966273)), (1027 == 5848962935684046707)))) ? (((arr_12 [i_4]) ? 1023 : (arr_12 [i_4]))) : (arr_12 [i_4])));
        var_29 = ((3145599922 ? (min(((12280 ? 562949953421311 : (arr_13 [i_4]))), (((4294966265 ? 1448044906 : 0))))) : (~103)));
    }
    #pragma endscop
}
