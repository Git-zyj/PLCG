/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149142
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_20 = 4057176239;
        var_21 = ((var_11 ? (((16402070931728048704 ? ((min(var_9, var_19))) : (((!(arr_2 [i_0]))))))) : ((16402070931728048704 ? 2044673141981502927 : 2044673141981502911))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_22 = (2044673141981502921 != 1);

        for (int i_2 = 2; i_2 < 15;i_2 += 1)
        {

            for (int i_3 = 2; i_3 < 16;i_3 += 1)
            {
                var_23 += (min(var_11, (max((arr_7 [i_1] [i_2 + 2] [i_3]), (arr_3 [i_2 + 3] [i_3 + 2])))));
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        {
                            var_24 = 16512;
                            var_25 = (var_1 ? -9679 : 15428893187250466535);
                        }
                    }
                }
            }
            for (int i_6 = 1; i_6 < 17;i_6 += 1)
            {
                var_26 = 4;
                var_27 = ((((((((arr_11 [i_1] [i_2] [i_2]) ? var_6 : var_3)) / (16402070931728048700 + 167)))) ? (((max((!var_5), var_11)))) : var_6));
                var_28 = (max(var_28, ((((16402070931728048704 - 47318) ? (((~2044673141981502912) + (arr_4 [i_2 - 1] [i_6 + 1]))) : (((min((arr_11 [i_6] [i_1] [i_1]), 16402070931728048703)) | (arr_16 [i_1] [i_1] [i_1]))))))));
            }
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                var_29 = ((((max(var_8, ((16402070931728048692 ? 5355816138569630251 : 9679))))) ? ((((((arr_7 [16] [i_2] [i_1]) ? 18 : -1080427937))) ? 568 : 1)) : var_16));
                /* LoopNest 2 */
                for (int i_8 = 1; i_8 < 16;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 17;i_9 += 1)
                    {
                        {
                            var_30 = var_15;
                            var_31 -= ((~((~(arr_12 [12] [12])))));
                        }
                    }
                }
                var_32 = ((!((((min(var_3, var_19)) / var_2)))));
                var_33 = (min((max(((2044673141981502912 | (arr_0 [i_1]))), (var_19 ^ var_0))), var_7));
                var_34 = (arr_21 [i_7]);
            }
            var_35 = (max(var_35, (!1705066191)));
        }
        var_36 = ((-((-3348461880 - (arr_7 [i_1] [1] [i_1])))));
    }
    for (int i_10 = 0; i_10 < 18;i_10 += 1) /* same iter space */
    {
        var_37 = ((((max((~65535), ((min(14495, 1)))))) ? (((arr_5 [i_10]) ^ var_12)) : (((max((!var_2), (!5124127980896088669)))))));
        var_38 = (min(var_4, 2044673141981502912));
    }
    var_39 = var_3;
    var_40 -= ((~(min(((568 ? var_11 : 31)), 592245235))));
    #pragma endscop
}
