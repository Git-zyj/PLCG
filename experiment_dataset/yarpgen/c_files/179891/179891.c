/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179891
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (~(max((var_11 / -1), (((193 ? 176 : 511))))));
    var_17 = ((-12 < (((((72 << (var_4 - 1612405063149469113))) >= ((var_6 << (((var_14 + 5101648269754265382) - 14)))))))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        var_18 = (((((80 ? var_10 : (arr_0 [i_0])))) ? (((62 < (arr_1 [i_0])))) : 196));
        arr_3 [i_0] [i_0] = 4231680478923327218;
        var_19 = (arr_0 [i_0]);
    }
    var_20 = ((-(min(12264482764644961470, var_15))));
    /* LoopNest 2 */
    for (int i_1 = 3; i_1 < 16;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 16;i_2 += 1)
        {
            {
                var_21 = (max(var_21, var_12));
                arr_9 [i_1] [i_1] = (((((((max(144115188075855871, 18446744073709551615))) ? (var_6 - var_11) : (min(-501, 12264482764644961481))))) ? (((min((arr_4 [i_1 - 1] [i_1]), ((((arr_7 [i_1] [i_1] [i_1]) || (arr_5 [i_1])))))))) : ((((max((arr_5 [i_1]), var_15))) ? (((max(var_12, var_5)))) : ((-8192 ? var_11 : (arr_4 [i_1] [2])))))));

                for (int i_3 = 3; i_3 < 19;i_3 += 1) /* same iter space */
                {
                    var_22 = (min(var_22, (!6182261309064590130)));
                    var_23 |= (((((((min(var_6, (arr_8 [i_1] [i_1] [12])))) ? 12264482764644961470 : (arr_5 [i_2])))) ? ((min(((max(var_2, 178))), 3473699807289374293))) : (((((3319357263157644211 ? var_5 : var_6))) ? (500 & 9831685271554753365) : (arr_5 [i_3 - 3])))));
                }
                for (int i_4 = 3; i_4 < 19;i_4 += 1) /* same iter space */
                {
                    var_24 |= (min((((arr_13 [i_1 - 3] [i_4 - 3]) && (arr_13 [9] [i_4 + 1]))), (((arr_13 [i_1 + 4] [i_4 + 1]) && 7618501648745517254))));
                    var_25 = (min(var_25, (((!((min(25, 229))))))));
                    arr_15 [i_1] [i_1] [8] [i_1] &= (14215063594786224406 ? ((((((102 << (234 - 224)))) ? (-1 * 255) : ((124 ? 255 : 18014398509481983))))) : (min(var_10, (max(14215063594786224383, 688580699696881208)))));

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        var_26 ^= (((arr_11 [i_5]) - -521));
                        arr_19 [i_1] [i_1] [i_1] [i_1] = (((18014398509481972 + var_4) ? 11585325267313729491 : 193975709517484885));
                    }
                    var_27 = (max(var_27, (((min(27857, 28819))))));
                }

                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    var_28 = ((((-28827 ^ -28838) ? ((min(var_7, 6))) : var_9)));
                    var_29 = (min((((4611686018423193600 ? var_11 : -522))), var_8));
                }
            }
        }
    }
    #pragma endscop
}
