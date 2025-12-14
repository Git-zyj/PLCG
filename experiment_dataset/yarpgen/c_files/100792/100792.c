/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100792
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 *= (min(61158, 4294967295));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_18 [i_0] [i_0] [i_1] [i_1] [i_0] [i_3] [i_4] = ((arr_10 [9] [i_1] [i_2 - 2] [i_3] [i_4]) << ((((((var_3 || (arr_5 [i_0])))) < var_18))));
                                arr_19 [i_0] [i_3] [i_0] = ((!(arr_11 [i_2 + 1] [i_2 - 2] [i_2 - 3] [i_2 + 1] [i_2 - 3])));
                                arr_20 [i_0] [i_1] [i_0] [i_4] [i_0] [i_0] [i_0] = ((((((arr_8 [i_2 + 1] [i_2 - 2]) << ((((((-(arr_1 [i_0]))) + 26785)) - 5))))) ? (((((arr_3 [i_0]) <= 3129941029)) ? ((var_6 ? (arr_5 [i_0]) : (arr_2 [i_2]))) : ((((8 != (arr_14 [i_0] [i_1] [i_1] [i_2 - 3] [i_3] [i_4] [i_4]))))))) : (((1165026282 ? ((var_11 ? (arr_5 [i_0]) : (arr_15 [i_1]))) : 1821)))));
                                var_20 = (max(var_8, (arr_10 [i_0] [i_1] [i_0] [i_3] [i_2 - 2])));
                                arr_21 [i_0] [i_1] [i_0] [i_3] = arr_5 [i_0];
                            }
                        }
                    }
                }
                arr_22 [i_0] [i_1] = ((((-413655730023285365 ? 4294967295 : 65535)) << (((arr_11 [i_1] [i_0] [11] [i_0] [i_0]) - 51))));
                arr_23 [i_0] [i_0] = (arr_16 [i_0] [7] [i_0] [i_0] [i_0]);
                var_21 = (min((1165026282 ^ 1), ((((4294967287 << (3129941019 - 3129941003)))))));
            }
        }
    }
    var_22 -= (25 - 18446744073709551615);
    #pragma endscop
}
