/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172498
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_11 ^= (((arr_8 [i_1 + 2] [i_1 - 1] [i_1 - 1] [i_1 + 3]) ? ((min(25920, (arr_8 [i_1 + 1] [i_1 + 1] [i_1] [i_1 - 1])))) : ((var_4 ? (arr_8 [i_1 - 1] [i_1 + 3] [i_1] [i_1 - 1]) : (arr_8 [i_1 - 1] [i_1 + 3] [i_1 + 3] [i_1 + 1])))));

                            for (int i_4 = 2; i_4 < 10;i_4 += 1)
                            {
                                arr_14 [1] [i_1] [i_1] [i_1] = (((max((-3673 <= -14986), (min(10, 6104743612940520356)))) < var_8));
                                arr_15 [i_0] [i_1] [i_0] [i_3] [i_0] [i_3] = var_10;
                                var_12 = (max((arr_2 [i_1 + 3] [i_1 - 1]), (arr_2 [i_1 - 1] [i_1 - 1])));
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] = ((((((-32767 - 1) ? (!2047) : 141))) ? (arr_10 [i_0] [i_2] [i_2]) : -113));
                                var_13 = ((+((((arr_6 [i_4 + 2] [i_1 + 3] [i_1 + 1] [i_1 - 1]) || 0)))));
                            }

                            for (int i_5 = 0; i_5 < 12;i_5 += 1)
                            {
                                var_14 ^= ((18446744073709549545 ? (min(var_3, (~238358806273703345))) : ((((min(-6104743612940520347, 4277780182)))))));
                                var_15 = 55;
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    for (int i_7 = 4; i_7 < 9;i_7 += 1)
                    {
                        for (int i_8 = 3; i_8 < 10;i_8 += 1)
                        {
                            {
                                var_16 = (min((((arr_6 [i_7 + 2] [i_7] [i_7 - 4] [i_7]) ^ (((arr_17 [i_0] [i_0] [5] [i_7] [i_8 + 2]) ? 1328663541 : 18446744073709549594)))), (((-4521675486202516356 ? -39 : (arr_6 [i_8 - 1] [i_8] [i_7 - 2] [i_1 + 3]))))));
                                var_17 = -59;
                            }
                        }
                    }
                }
                var_18 = ((0 ? (9223372036854775807 + 0) : -238358806273703335));
            }
        }
    }
    var_19 ^= (!4521675486202516360);
    var_20 = (min(var_10, var_1));
    #pragma endscop
}
