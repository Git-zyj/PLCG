/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114242
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, (((((max((~28), ((145 ? 120 : 130))))) ? var_15 : ((-(135 >= var_7))))))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_18 = (min(var_18, (228 <= 67)));
        var_19 += max(120, 87);
        arr_2 [0] |= 28;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_20 = (max(var_20, ((((((8195 ? var_9 : 2417231739546017087))) && (((arr_5 [i_1]) <= var_14)))))));
        var_21 = (max(var_21, (((-((-(arr_4 [i_1]))))))));
    }
    for (int i_2 = 2; i_2 < 24;i_2 += 1)
    {
        var_22 |= ((!(((((min(17308441684615865148, (arr_6 [i_2 - 2])))) ? ((216 ? var_14 : var_1)) : (((max((arr_7 [i_2]), 78)))))))));
        var_23 += -var_6;
        var_24 = (min(var_24, ((max(((((arr_6 [i_2 - 2]) + 30351))), ((16029512334163534526 ? 12575463808137120886 : 126)))))));
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 10;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
        {
            var_25 += 16930086392260821637;
            var_26 |= 234;
            var_27 |= -28;
            arr_14 [i_3 + 1] [6] |= 176;
        }
        for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
        {
            var_28 |= (((arr_15 [0] [i_5] [i_3 - 2]) ^ 135));
            var_29 |= (arr_5 [i_3 - 2]);
            var_30 += ((arr_9 [4]) ? (((arr_10 [i_3] [i_5]) ? 81 : 12910343659776770956)) : (!var_16));
        }
        var_31 = (max(var_31, ((((arr_15 [10] [i_3 + 1] [i_3 - 1]) & (arr_15 [0] [i_3 - 1] [i_3 - 1]))))));
    }
    #pragma endscop
}
