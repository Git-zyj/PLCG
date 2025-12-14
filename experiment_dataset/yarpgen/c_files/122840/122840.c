/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122840
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_11 [i_1] [i_1] [i_1] [i_2 + 2] [i_3] = 1430184307;
                            arr_12 [i_0] [i_1] [i_3 + 2] [i_3 + 1] [i_1] = (min((((215 != 2017612633061982208) ? var_6 : (arr_8 [i_0] [i_1] [i_2] [i_3]))), (((arr_2 [i_1]) ? 175 : 4232598344))));
                            arr_13 [i_0] [i_1] [i_1] [i_0] = (0 ^ 17);
                            var_19 = arr_7 [i_3 + 2] [i_1] [i_3 - 1];
                            var_20 = ((((max((arr_8 [i_3 + 1] [i_3 - 1] [i_3 + 2] [i_3 + 1]), (arr_8 [i_3 + 1] [i_3 + 1] [i_3 - 1] [i_3 - 1])))) ? 0 : ((2340185240 ? 31 : 0))));
                        }
                    }
                }
                var_21 = max(((((4294967295 >= var_13) != ((246 ? var_14 : -1))))), var_7);
                /* LoopNest 3 */
                for (int i_4 = 1; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            {
                                var_22 = -var_4;
                                arr_22 [i_0] [i_1] [i_0] [i_0] [i_6] [i_5] |= (arr_2 [i_0]);
                                var_23 = (min(var_23, ((((min((max(3565733557, -4611686018427387904)), -4611686018427387904))) ? (((((arr_19 [i_6] [i_5] [i_1] [i_0]) && (((var_0 ? var_14 : 4294967295))))))) : (((6234845914596907407 <= 931859397814005764) ? (arr_0 [i_6]) : 6251215498216875217))))));
                                var_24 += ((((((arr_0 [i_1]) ? (((!(arr_15 [i_4] [i_0] [i_4])))) : (arr_8 [i_4] [i_4 + 2] [i_4 - 1] [i_4 + 1])))) > ((((!(arr_3 [i_6] [i_4 - 1] [i_1]))) ? (549755805696 >= 22) : (var_3 & var_13)))));
                            }
                        }
                    }
                }
                var_25 = (min(var_25, (((((((!var_13) ? (max(63, 9217219995941802590)) : (arr_6 [i_0] [i_0])))) ? 18446744073709551615 : (max(var_18, ((17089706453522186775 ? (arr_19 [i_0] [i_0] [i_1] [i_1]) : var_6)))))))));
            }
        }
    }
    var_26 = max((max(var_5, (max(var_8, var_17)))), ((-(15 - var_2))));
    var_27 = max(var_0, (((1152921504606846976 ? 20 : var_11))));
    var_28 *= var_17;
    #pragma endscop
}
