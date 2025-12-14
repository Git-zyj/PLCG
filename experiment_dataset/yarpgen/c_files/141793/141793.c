/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141793
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (-(min(var_5, 3279337548)));
    var_20 = (min(var_20, (min(var_4, ((((~var_7) ? (~65526) : (~10))))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    var_21 ^= -var_15;
                    var_22 = ((-var_17 | ((((19268 + -19268) ? 65526 : var_2)))));
                    arr_6 [i_2] = ((min(3382, var_16)));
                    var_23 = (((arr_2 [i_0] [i_0] [i_0]) ? (-1 && 3404) : (min((arr_1 [i_0] [i_0 - 4]), (arr_2 [i_0] [i_0 + 3] [i_0])))));
                    var_24 = ((((max(((1792 ? 10 : 19274)), (~var_11)))) ? ((2047 ? var_2 : ((65499 << (var_6 - 378815824))))) : ((var_14 ? var_15 : (~62157)))));
                }
                /* vectorizable */
                for (int i_3 = 3; i_3 < 16;i_3 += 1)
                {
                    arr_9 [i_3] [i_3] [i_3] [i_0] = ((3382 ? (arr_1 [i_0] [i_3 - 2]) : (arr_1 [i_1 + 1] [i_0 + 3])));
                    var_25 = ((var_3 ? (18759 % 109) : 224));
                    var_26 = (max(var_26, (arr_1 [i_0] [i_0])));
                    var_27 = (var_14 ? (!var_4) : (((!(arr_0 [i_3])))));
                }
                for (int i_4 = 1; i_4 < 15;i_4 += 1)
                {
                    arr_12 [i_4] = ((~-29383) ? (arr_1 [i_1 + 2] [i_0 - 2]) : (3378 & 19268));
                    var_28 = ((((((((arr_2 [i_0] [i_1 - 1] [i_4 + 2]) >> 8))) ? ((var_12 >> (185 - 181))) : (min((arr_4 [i_0 + 1] [i_0 + 1] [6] [i_0 - 2]), 7)))) >> ((((max((arr_1 [i_1 + 1] [i_4 - 1]), var_18))) - 26160))));
                }
                for (int i_5 = 1; i_5 < 16;i_5 += 1)
                {
                    var_29 = (((min((arr_16 [i_5] [i_5 + 1] [i_1 + 1] [i_0 + 3]), (arr_16 [i_1 - 1] [i_1] [i_1 + 3] [i_0 - 4]))) >= (min(var_5, 11))));
                    var_30 = var_9;
                }
                var_31 = (arr_11 [i_0]);
                var_32 ^= (!-767119916);
            }
        }
    }
    var_33 *= ((!(((max(var_16, -256))))));
    #pragma endscop
}
