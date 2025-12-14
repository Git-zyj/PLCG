/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168646
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] = (((arr_4 [1] [i_0] [9]) % ((((arr_3 [i_4] [i_3 - 1] [i_0]) ? 29228 : -4002462158563730507)))));
                                arr_12 [i_0] [i_0] = ((!(arr_10 [i_0] [i_0] [i_2] [i_3] [i_0] [12] [i_0])));
                                var_15 = 31019;
                            }
                        }
                    }
                    var_16 ^= ((~(arr_10 [i_2 - 3] [i_2] [0] [i_1] [i_1] [0] [i_0])));
                    var_17 = (max(var_17, ((((arr_0 [i_0]) * ((-(arr_4 [i_2 + 1] [i_1] [i_2]))))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 22;i_6 += 1)
                        {
                            {
                                var_18 *= (((arr_3 [4] [i_1] [i_0]) ? 16424 : (arr_13 [i_0] [i_0] [i_2] [i_6])));
                                var_19 = (min(var_19, (((~(((7934958682788416673 > (arr_14 [18] [12] [18] [i_6])))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 4; i_7 < 21;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 22;i_8 += 1)
                        {
                            {
                                arr_22 [i_0] [i_0] [i_2] = ((((max(16424, ((min((arr_5 [i_0]), (arr_1 [i_2]))))))) ? (~var_1) : ((-(arr_16 [i_0] [i_0] [i_0] [i_2 - 3] [i_7] [i_2 - 3] [i_8])))));
                                var_20 -= (min(((49119 ? 17454353521315011693 : 622993202)), 46876));
                                var_21 = (arr_17 [i_0] [i_1] [i_2] [i_1] [i_8]);
                                var_22 ^= ((((arr_16 [i_0] [i_1] [i_2] [i_7] [i_1] [i_0] [i_7 - 3]) <= (arr_16 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] [i_7 - 4]))) ? (arr_16 [i_0] [i_1] [i_2] [18] [18] [i_2] [i_7 + 2]) : (arr_16 [i_8] [i_1] [i_8] [12] [22] [12] [i_7 - 4]));
                                arr_23 [i_0] [i_0] [i_2] [i_0] [3] [i_0] = (arr_18 [i_0] [21] [i_2] [i_7] [i_8]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = 13104;
    var_24 = (min(var_24, (((8660860830903604214 ? -1213797709 : ((((min(16424, var_5))) | 1)))))));
    #pragma endscop
}
