/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148707
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 7;i_2 += 1)
            {
                {
                    var_19 = (min(var_19, ((max(24661, var_2)))));

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        arr_12 [i_2] [i_2] = (arr_9 [1] [8] [8] [i_3]);
                        var_20 = (min(var_20, ((((((-2884193398910989029 ? 9780 : -30915))) ? 0 : (max(var_14, ((36028797018963968 >> (21198 - 21140))))))))));
                    }
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        arr_15 [i_0] [i_0] [i_0] [4] &= (((((max(3637, 5410620449538326277)) ^ ((min(46941, 275455268))))) + (arr_9 [i_0] [i_4] [i_2] [i_2 + 2])));

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
                        {
                            var_21 = (((arr_6 [i_2 + 2]) ? 134217727 : -29054));
                            arr_19 [i_2] [i_2] [1] [i_0] = (247 >= -9044407426937484499);
                        }
                        for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
                        {
                            var_22 ^= (min(45998, 1629135999));
                            var_23 -= 7;
                            var_24 = ((((255 || ((min(-1022975814, 65))))) ? ((((min(var_2, (arr_11 [2] [i_1] [i_1] [4])))) ? ((3288874541 ? (-32767 - 1) : var_6)) : (~255))) : (13268 ^ 6339)));
                        }
                        for (int i_7 = 0; i_7 < 10;i_7 += 1) /* same iter space */
                        {
                            var_25 = ((((!(((arr_23 [i_0]) || (-127 - 1))))) ? (((-9223372036854775807 - 1) ? 469821052 : 21)) : (((arr_23 [i_2 - 1]) ? (arr_23 [i_2 + 3]) : (arr_10 [0] [i_2 + 1] [i_7] [8])))));
                            var_26 = (((max((arr_3 [i_2 + 1]), (arr_3 [i_0])))) ? (min(((0 ? -4611686018427387904 : 14456)), 838380637)) : ((((1 < ((((arr_21 [8] [i_1] [8] [5] [7]) && 4))))))));
                        }
                        var_27 |= (((-3258179954577250819 <= 1) <= (arr_25 [i_4] [i_4])));
                    }
                    arr_26 [i_0] [i_2] [6] = ((!(!18446744073709551615)));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 10;i_8 += 1)
        {
            for (int i_9 = 3; i_9 < 9;i_9 += 1)
            {
                {
                    arr_33 [4] [i_9] [i_0] = (((max((min(26417, -119)), (!9222809086901354496)))) != (arr_2 [i_0]));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 10;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 10;i_11 += 1)
                        {
                            {
                                arr_38 [i_0] [i_9] [i_9] [i_10] [i_10] = (~99);
                                var_28 *= (arr_18 [i_8] [i_0]);
                                arr_39 [i_9] [i_8] [i_11] = (min(62, 3135321524));
                            }
                        }
                    }
                }
            }
        }
        arr_40 [i_0] = (min(((56 ? 5 : 1)), (arr_0 [0] [i_0])));
    }
    for (int i_12 = 0; i_12 < 24;i_12 += 1)
    {
        var_29 -= var_3;
        arr_43 [i_12] [6] |= 27934;
    }
    var_30 = (!var_13);
    #pragma endscop
}
