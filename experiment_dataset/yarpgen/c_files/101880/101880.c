/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101880
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_11 = (max(var_11, ((((16368 ? 65535 : var_3))))));
        arr_3 [i_0] [i_0] = var_5;
        var_12 = (max(var_12, (!10910925602578794636)));
        var_13 = (max(var_13, ((((~1) ? 4294967295 : (~-99))))));
        arr_4 [i_0] = 6393337751565211485;
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_14 = (min(var_14, var_8));
        arr_7 [i_1] = (((((arr_5 [i_1]) ? 12269 : var_5))) & 5621956094178430646);
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            arr_13 [10] [4] |= ((var_4 ? ((((!(((-99 ? -1393508098 : 10))))))) : (max((max(4294967295, 5940628088881015913)), (min(2167402597, 7))))));
            var_15 *= (max(var_2, ((var_0 ? var_9 : (arr_2 [i_2])))));
            arr_14 [i_3] [i_3] = ((((5 >> (9223372036854775799 - 9223372036854775757)))) && ((!(arr_11 [i_2]))));
        }
        arr_15 [i_2] [i_2] = (((arr_9 [i_2]) ^ (var_5 || 4294967295)));
        var_16 = (max((min(var_4, ((min((arr_1 [14]), (arr_1 [i_2])))))), ((((2147483647 ? 4294967295 : 1)) - (min(0, (arr_12 [i_2] [i_2])))))));
        var_17 = (max(var_17, -1));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 14;i_5 += 1)
            {
                {
                    var_18 = ((-(arr_19 [i_5 + 2] [i_5] [i_5 + 1] [i_5 + 1])));
                    arr_22 [i_2] [i_4] [i_4] = (arr_1 [i_2]);
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        arr_25 [i_6] = ((14 ? ((1 ? 1 : (65518 || var_3))) : (((!((104 > (arr_23 [i_6]))))))));
        var_19 = (max(var_19, ((min((!var_10), (((arr_24 [5]) - (var_10 & var_3))))))));
        var_20 = arr_2 [i_6];
    }
    var_21 = (-var_7 / 1672582333387984139);
    #pragma endscop
}
