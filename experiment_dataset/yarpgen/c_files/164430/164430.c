/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164430
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_9;

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {

            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                arr_10 [i_1] [i_1] [i_1] [i_1] = (min((((((min(-924, 1065))) || 1))), var_7));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 16;i_4 += 1)
                    {
                        {
                            arr_18 [i_0] [i_0] [i_4] [i_0] [i_0] = 13647302072097214184;
                            arr_19 [i_0] [i_4] [i_2 - 1] [i_3] [i_4] = ((((871552651 ? var_7 : var_4)) << ((((~(arr_16 [7] [i_1] [i_1] [i_3] [i_4]))) - 6395))));
                            arr_20 [i_4] [i_1] [i_1] [i_2 - 1] [i_3] [i_4] = (!-var_7);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 4; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 15;i_6 += 1)
                    {
                        {
                            arr_27 [i_0] [i_0] [i_1] [i_2] [i_5] [i_6] = (arr_6 [i_6 + 2] [i_6] [i_2 + 1]);
                            var_11 = ((((arr_3 [i_0] [i_0]) ? var_6 : var_4)));
                        }
                    }
                }
                arr_28 [i_0] = (13647302072097214184 != 0);
            }
            var_12 |= (min((min(4799442001612337424, 13647302072097214184)), var_9));
        }
        arr_29 [i_0] = ((((((13647302072097214184 == (arr_25 [i_0] [i_0] [5] [i_0] [1] [i_0]))))) | (max((arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (1 + -1)))));
        arr_30 [i_0] [i_0] = var_8;
    }
    for (int i_7 = 0; i_7 < 17;i_7 += 1) /* same iter space */
    {
        arr_34 [i_7] = min((((~0) ? (~var_0) : 1)), ((((arr_33 [i_7] [i_7]) ? (arr_33 [i_7] [i_7]) : 0))));
        arr_35 [i_7] = ((+((max((arr_1 [i_7] [i_7]), (arr_32 [i_7] [i_7]))))));
        var_13 ^= (((!var_6) > 0));
        var_14 -= ((0 ? -5917286792980668505 : 28));
        var_15 = (max(var_15, ((((min(-332851056, (arr_1 [i_7] [7]))) != (~0))))));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 10;i_8 += 1)
    {
        arr_39 [i_8] = (arr_32 [i_8] [i_8]);
        var_16 = (max(var_16, (((!(arr_37 [i_8] [i_8]))))));
        arr_40 [4] = var_8;
    }
    #pragma endscop
}
