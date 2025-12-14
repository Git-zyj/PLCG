/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186050
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_20 = (((40418 - var_8) ? (var_14 & 2727683730) : ((~(arr_1 [i_0])))));
        var_21 -= -32276;
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 12;i_3 += 1)
            {
                {
                    var_22 = (max((7 < -122), ((242 ? (arr_8 [i_1] [i_3 - 1] [i_3 - 1] [i_1]) : (arr_8 [i_2] [i_3 - 1] [i_3] [i_3])))));
                    var_23 *= (~40418);
                }
            }
        }
        var_24 = 13163;
        var_25 |= ((~(arr_3 [i_1] [i_1])));
        arr_10 [i_1] = (min(40416, (arr_4 [i_1])));
    }
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        arr_14 [i_4] = 526410168;

        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            var_26 |= (((((((-32276 ? (arr_0 [i_4]) : var_12))) ? (((arr_12 [i_4] [i_5]) ? 6 : (arr_1 [i_5]))) : (((0 ? -32276 : var_5)))))) || (((max(244, 14755467447992472761)))));
            var_27 -= 0;
        }
        for (int i_6 = 3; i_6 < 12;i_6 += 1)
        {
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 11;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        {
                            arr_28 [i_9] [i_8] [i_8] [i_8] [i_4] = ((((~var_5) | 25118)));
                            var_28 += (--58594);
                            arr_29 [i_4] [i_6] [i_7] [i_8] [i_8] = ((((-32252 ? (arr_24 [i_8 + 2] [i_8] [i_8 + 1] [i_8 - 1]) : 0)) | (((min(40418, (arr_18 [i_4] [i_8 + 1] [i_7])))))));
                            var_29 = 4294967289;
                        }
                    }
                }
            }
            var_30 = (((119 || 121) ? (arr_16 [i_4] [i_6 - 2] [i_6 + 1]) : 109));
            var_31 = (-13918 / 13635);
            var_32 += (max((arr_9 [i_4] [i_4]), (((12013 - (arr_16 [i_4] [i_4] [i_4]))))));
        }
    }
    var_33 = (((((!0) ? 25119 : var_9)) != (((!(((7419 >> (var_19 + 4171)))))))));
    var_34 += ((((max(-var_4, 31))) ? ((721184700817530096 ? -109 : (0 - 27676))) : ((var_2 ? ((var_8 ? 150 : 160)) : (!4294967295)))));
    var_35 = ((var_1 <= (((!(var_5 && 0))))));
    #pragma endscop
}
