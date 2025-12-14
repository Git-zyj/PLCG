/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117849
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((((((var_13 ? var_6 : var_2))) ? ((var_6 ? 0 : var_11)) : (0 & var_7)))) ? var_10 : var_11));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_13 [i_3] [i_1] = (arr_1 [i_0] [i_2]);
                            var_15 = ((~((~((var_10 ^ (arr_11 [i_0] [i_0] [i_2] [i_3] [i_2] [i_3])))))));
                        }
                    }
                }
                var_16 = ((((var_9 ? var_13 : var_3))) * (((((var_0 ? var_6 : 0))) ? 0 : (21 == 0))));
                var_17 ^= (((var_13 ? (arr_0 [i_0]) : var_1)));
                arr_14 [i_1] = (max(((((min((arr_12 [i_0] [i_1] [i_0] [i_0]), var_13))) ? (min(0, 4294967295)) : (min(var_11, (arr_9 [i_0] [i_0] [i_0] [i_1] [i_0]))))), (((6825425481168540625 ? 59921 : (arr_1 [i_0 - 2] [i_0 - 2]))))));

                /* vectorizable */
                for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
                {
                    var_18 = var_5;
                    var_19 ^= (((var_0 * var_10) & (var_3 % var_9)));

                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            var_20 = (max(var_20, ((((arr_10 [i_0] [i_0] [i_0 + 2] [i_1]) ? var_8 : (arr_10 [i_0] [i_1] [i_0 - 2] [i_0]))))));
                            arr_22 [i_0] = (((((var_10 ? var_7 : var_1))) ? var_3 : ((-1986422156 ? 6 : var_10))));
                            arr_23 [i_6] [i_5] [i_0] [i_1] [i_0] [i_0] = ((-18 ? (arr_15 [i_0 + 2]) : 26));
                        }
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            arr_26 [i_7] [i_5] [i_4] [i_0] [i_0] [i_0] = (7 ? 1265742856 : -7698787357919233739);
                            arr_27 [i_4] [i_5] = 26;
                        }
                        for (int i_8 = 0; i_8 < 24;i_8 += 1) /* same iter space */
                        {
                            arr_32 [i_0] [i_0] [i_0] [i_5] [i_8] = ((var_10 ? ((1899758443 ? 2399700322 : 6)) : var_4));
                            var_21 = (max(var_21, (var_7 < 1)));
                        }
                        for (int i_9 = 0; i_9 < 24;i_9 += 1) /* same iter space */
                        {
                            var_22 = (((arr_25 [i_0] [i_0] [i_0]) ? var_9 : (arr_25 [i_0] [i_0] [i_0])));
                            arr_36 [i_9] [i_1] [i_1] [i_5] [i_9] = ((arr_3 [i_0 + 1] [i_4]) | ((-(arr_9 [i_9] [i_9] [i_0] [i_9] [i_0]))));
                        }
                        arr_37 [i_0] [i_1] [i_1] = (~2796664931);
                    }
                }
                for (int i_10 = 0; i_10 < 24;i_10 += 1) /* same iter space */
                {
                    var_23 = (4837195005202069787 ? ((6825425481168540625 ? -191862173 : 220)) : (~var_1));
                    arr_41 [i_0] = (((arr_9 [i_0 - 2] [i_0 - 2] [i_0] [i_0] [i_0 - 2]) ? (max(1, -8273747406772949316)) : (((var_11 ? (arr_35 [i_0 - 1] [i_0] [i_0 - 1] [i_0] [i_0] [i_0 + 1]) : (arr_35 [i_0 - 1] [i_0] [i_0] [i_0] [i_0] [i_0 - 2]))))));
                }
            }
        }
    }
    #pragma endscop
}
