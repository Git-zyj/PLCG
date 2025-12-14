/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162251
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
                {
                    arr_9 [i_1] [i_0] [i_0] |= ((((var_4 ? (arr_8 [i_1 + 1] [i_1 - 3]) : 17713)) & (max((~-15186), 32767))));
                    arr_10 [i_0] [i_0] = ((((min((arr_6 [i_0 - 4]), (arr_6 [i_0 + 1])))) & ((max(var_9, (arr_6 [i_0 - 1]))))));
                }
                for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
                {
                    arr_13 [i_0] = (((((17717 < 17714) ? ((max(-4526, 2))) : 596)) != -1));
                    arr_14 [i_0] [i_0] [i_0] [i_0] = (max((max((21983 != 3966), ((-17707 ? -29539 : 17723)))), (((15735 | 32767) ? -15360 : ((min(-18710, 6)))))));
                }

                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    arr_18 [i_0] [i_0] = (((((((max(6, 24979))) ? 18053 : 1024))) ? (((19665 / 32760) ? 10 : (~-17288))) : (arr_12 [i_0 - 4] [i_1] [i_4])));
                    arr_19 [i_0] = (((-32767 - 1) ? (max(((5 ? (arr_8 [i_1] [i_1]) : 10780)), (((arr_4 [i_4] [i_1] [i_0]) ? var_9 : 18761)))) : ((max((arr_1 [i_0] [i_1]), (12288 != 14064))))));
                }
                arr_20 [i_0] = (((min(3, ((var_0 ? 16736 : var_6)))) < ((17745 ? (arr_11 [i_0 - 1]) : (arr_11 [i_0 + 2])))));
            }
        }
    }
    var_11 = 17472;
    #pragma endscop
}
