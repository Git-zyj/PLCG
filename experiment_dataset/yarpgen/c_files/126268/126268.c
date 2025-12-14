/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126268
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_18 ^= -1207382188;

                            for (int i_4 = 0; i_4 < 22;i_4 += 1)
                            {
                                var_19 -= max(-112, (max((arr_7 [6] [i_3 - 2] [i_3 - 2] [i_4]), (arr_7 [i_2] [i_3 + 1] [i_4] [i_4]))));
                                var_20 ^= ((-((11645194848602278080 ? 0 : (arr_6 [i_3 - 3] [18] [18] [i_0 - 3])))));
                                var_21 = ((arr_0 [i_0] [i_0]) ? 0 : (arr_6 [i_0] [i_0] [i_0] [i_0]));
                                var_22 = (((arr_2 [i_0] [i_1 + 2] [i_1]) ? (arr_2 [i_0] [i_1 + 1] [i_1]) : (arr_2 [i_0] [i_1 - 3] [12])));
                            }
                            for (int i_5 = 1; i_5 < 21;i_5 += 1)
                            {
                                var_23 = max(102, 27);
                                var_24 = (arr_12 [i_1] [i_1] [i_1] [i_3] [i_1] [i_3]);
                                var_25 = (~-120);
                            }
                            for (int i_6 = 2; i_6 < 20;i_6 += 1)
                            {
                                arr_18 [i_0] [i_6] [i_6] [i_0] [i_6] |= (arr_8 [19] [19] [i_2] [i_3] [i_6] [i_6]);
                                var_26 |= 96;
                            }
                            for (int i_7 = 0; i_7 < 22;i_7 += 1)
                            {
                                var_27 ^= -118;
                                arr_22 [i_0] [i_1] [i_1 + 2] [i_1] [i_1] [i_1] = (4294967270 > -120);
                                var_28 = (max((arr_14 [i_1] [10] [i_1 + 1] [i_0] [i_1] [i_1] [i_1]), (((-2 ? 4294967295 : 127)))));
                                var_29 ^= 9223372036854775792;
                            }
                            var_30 -= ((~(~110)));
                            var_31 = ((!((max(9223372036854775792, 9223372036854775807)))));
                        }
                    }
                }
                arr_23 [i_0] = (((-10 + 2147483647) >> (var_1 - 2745095025)));
            }
        }
    }
    var_32 -= ((~((((min(var_13, 110))) ? 2028982907119441321 : (((var_5 ? -4 : 926775589)))))));
    #pragma endscop
}
