/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161431
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 21;i_1 += 1) /* same iter space */
        {
            var_14 += (-(!var_9));
            var_15 = (!var_5);
            arr_4 [i_0] [i_0] [i_1] = (~(~-1539));
        }
        for (int i_2 = 2; i_2 < 21;i_2 += 1) /* same iter space */
        {
            var_16 = ((~(~74)));
            var_17 = ((~(((!(arr_6 [i_0] [i_2]))))));
        }
        var_18 -= (+-712254395068261190);
    }
    var_19 = (min(-1, (max((max(var_3, 712254395068261190)), 164))));
    /* LoopNest 3 */
    for (int i_3 = 3; i_3 < 18;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 19;i_5 += 1)
            {
                {
                    var_20 -= ((~((-(~var_13)))));
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 18;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            {
                                arr_22 [i_3] = ((-(~91)));
                                arr_23 [i_3] [i_3] [17] [i_7] = (max((min(((~(arr_0 [i_4]))), (min((arr_0 [i_5]), -1336)))), 43113));
                                arr_24 [i_3 - 2] [i_3] [i_3] [i_3] [i_3] = ((-((-(max((arr_12 [i_3 - 1] [i_4]), (arr_7 [i_3] [i_3])))))));
                                arr_25 [i_3] [i_4] [i_5] [i_4] [i_3] = (max((((!(!-777)))), ((~(~var_12)))));
                                var_21 = (max((((!(!59414)))), ((~(max(1586907332, 22422))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 16;i_9 += 1)
                        {
                            {
                                arr_30 [i_3] [i_4] [i_5] [i_8] [i_3] [i_8] [i_9] = (min((max((~var_9), (max((arr_13 [i_8] [4]), var_5)))), ((max(-1740301857, -var_11)))));
                                var_22 = (max(((~(min(3522925901617373856, -2118836827484328575)))), 3593399772));
                                var_23 = (max((((~((-(arr_17 [i_9] [i_8] [i_5 + 1] [i_3])))))), (max((min(3738096672, (arr_11 [i_3] [i_8] [i_9 + 4]))), ((max(28136, -1740301848)))))));
                                arr_31 [i_3 - 2] [i_5] [i_3] = (max((max((max(var_8, 2140297477850611696)), (~var_12))), (~-4469952443607454048)));
                            }
                        }
                    }
                    var_24 = ((~(max((!62622), var_10))));
                }
            }
        }
    }
    var_25 = (min((max(22416, (min(1345, -1740301847)))), ((-((max(62622, 2907)))))));
    var_26 *= 30246;
    #pragma endscop
}
