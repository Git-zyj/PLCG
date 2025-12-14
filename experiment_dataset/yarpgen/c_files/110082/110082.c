/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110082
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= ((((((min(var_12, -1706979970)) * 1))) ? 1576847063 : ((((((var_5 ? 19715 : var_9))) ? var_8 : -var_7)))));
    var_18 = (max(var_18, ((((~var_2) ? var_2 : ((((((var_13 ? 2051797908682896628 : var_11))) ? ((min(var_3, var_13))) : var_6))))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 8;i_4 += 1)
                        {
                            {
                                var_19 -= 17;
                                var_20 = (~var_8);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 9;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 9;i_6 += 1)
                        {
                            {
                                arr_20 [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_0] = (min((max((arr_13 [i_1 - 2] [i_5 + 1] [i_0 + 1] [i_0] [i_0] [i_2 - 3]), (arr_13 [i_1 + 2] [i_5 + 1] [i_0 + 1] [i_5 + 1] [i_0] [i_2 - 2]))), (var_7 || -1706979970)));
                                arr_21 [i_1] [i_1] [i_1] [i_0] [i_1] = ((!((((((~(arr_13 [i_0] [i_1] [i_1] [i_2] [i_0] [i_1])))) ? -1706979970 : ((0 ? (arr_16 [i_5]) : var_8)))))));
                                arr_22 [i_1] [i_1] [i_2] [i_0] [i_6] = ((((((min(10429126635504263134, 17422796376344757806)) | 0))) ? (((min((!9003071289798069281), (min(1, (arr_1 [i_0]))))))) : 1023947697364793826));
                            }
                        }
                    }
                    var_21 = (((((var_1 ? -1706979964 : 4294967295))) * (arr_5 [i_1 - 3] [i_1] [i_2 + 1] [i_0 + 1])));
                }
            }
        }
    }
    #pragma endscop
}
