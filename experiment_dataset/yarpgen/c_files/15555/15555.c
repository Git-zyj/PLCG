/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15555
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((var_13 || 9223372036854775807) ? ((min(805306368, 54908))) : ((var_13 ? 2151 : var_4)))));
    var_16 &= (max(((((var_12 + 2147483647) << (((4294967275 || 255) - 1))))), (66 + var_13)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_17 = ((((((arr_5 [i_0] [i_1]) ? -4455646317905536556 : var_1))) ? (((arr_0 [i_1 + 1] [i_4]) ? var_11 : (arr_11 [i_0] [i_1] [i_2] [i_3] [i_4]))) : (arr_6 [i_1 - 3])));
                                var_18 = (((arr_9 [i_3] [i_3 - 2] [i_4] [i_4]) ? ((((arr_10 [i_1 - 1]) <= (arr_10 [i_1 + 2])))) : ((248 / (((228 && (arr_10 [i_0]))))))));
                                var_19 = ((8192 ? (max((((arr_4 [i_0] [i_4]) ? var_9 : (arr_8 [i_0] [i_0] [i_1] [i_2] [i_3] [i_3]))), ((-2 ? 134217727 : 2283)))) : ((((arr_5 [i_2] [i_3 - 2]) && (((33847 ? var_14 : 0))))))));
                                arr_13 [i_0] [i_0] [i_0] [i_1] [i_2] [i_3] [i_4] = (max((max(2193468813, 7222323030297416891)), (((59183 && (arr_0 [i_1 - 3] [i_3 - 4]))))));
                                var_20 |= (arr_5 [i_1 - 1] [i_3 - 4]);
                            }
                        }
                    }
                    var_21 = ((((((max(243, var_7))) | ((12 ? 1372 : var_10)))) / (arr_5 [i_1] [i_2])));
                    var_22 = (min(-240, ((var_0 ? var_0 : (arr_0 [i_1 + 1] [i_1])))));
                    arr_14 [i_0] [i_0] [i_1 - 1] [i_2] = (arr_8 [i_0] [i_1 + 3] [i_2] [i_2] [i_1] [i_0]);
                }
            }
        }
    }
    #pragma endscop
}
