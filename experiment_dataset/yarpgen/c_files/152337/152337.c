/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152337
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = -var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            var_14 = 5091236789811540903;
                            var_15 = ((13355507283898010717 ? (5091236789811540903 < var_7) : 13355507283898010686));
                            var_16 = 13355507283898010713;
                        }
                        for (int i_5 = 1; i_5 < 21;i_5 += 1)
                        {
                            var_17 *= (((arr_16 [i_5 + 1] [10] [i_2] [i_0] [i_3]) ? -9007199254740992 : (arr_9 [i_5 - 1] [i_5 + 2] [i_5 + 3] [i_5] [i_5 + 2])));
                            arr_17 [i_1] [i_1] [i_2] = ((~(arr_8 [i_5 + 4] [i_5 + 1] [i_5 + 1] [i_5 + 4])));
                        }
                        for (int i_6 = 3; i_6 < 24;i_6 += 1)
                        {
                            var_18 = var_11;
                            var_19 = ((var_1 || (arr_13 [i_6 - 3] [12] [i_6 - 3] [12] [i_6] [i_6 - 2] [i_6 - 2])));
                        }
                        var_20 = (var_7 <= var_6);
                    }
                    for (int i_7 = 2; i_7 < 24;i_7 += 1)
                    {
                        var_21 = ((((5091236789811540875 ? 968 : ((31039 + (arr_11 [i_0] [i_0] [13]))))) != ((34588 ? 1810255715 : 32751))));
                        var_22 = -16384;
                        var_23 = (arr_4 [5] [i_0] [i_0]);
                        var_24 = ((-(arr_18 [i_2] [i_1] [i_7 - 2] [i_7])));
                        var_25 = 721003696025971783;
                    }
                    arr_23 [i_0] [i_1] [i_2] = ((-(((var_6 >= (arr_14 [i_0]))))));
                    var_26 = (arr_13 [i_0] [i_1] [i_0] [i_0] [i_1] [i_0] [i_1]);
                    var_27 = ((((!(arr_22 [2] [7]))) ? 5205675607128173848 : (((49 ? 32704 : 31039)))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 1; i_8 < 9;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 11;i_9 += 1)
        {
            {
                arr_30 [5] [1] [i_9] = (arr_26 [i_8 + 2]);
                var_28 = ((max(((arr_18 [6] [2] [18] [2]), -154))));
            }
        }
    }
    #pragma endscop
}
