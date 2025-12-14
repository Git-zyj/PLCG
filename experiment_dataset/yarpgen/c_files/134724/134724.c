/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134724
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_10 ? ((714517589 ? var_9 : ((max(var_4, var_2))))) : (max(var_5, ((var_10 ? 3580449704 : var_9))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 8;i_1 += 1)
        {
            {
                var_12 = (max(var_12, ((((31788 != (arr_7 [i_1 - 4])))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_13 = (min((min(32745, (arr_12 [i_2 - 1] [i_2] [i_2] [i_2 + 3] [i_1 + 3]))), (arr_1 [i_0])));
                            arr_14 [i_0] [i_3] [i_2] [i_0] = (min((((~var_9) ? (arr_12 [i_2 + 3] [i_2 + 1] [i_1 + 1] [i_1 + 1] [i_0]) : (arr_9 [i_1 - 2] [i_1 - 4] [i_2 + 1] [i_2 + 2]))), (((min((arr_2 [i_0]), -455427627026325005))))));
                            var_14 = ((-(((-455427627026325005 && (var_2 != 4527))))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                arr_21 [i_0] [i_1] [i_0] [i_1 + 3] [i_1] = (((arr_5 [i_1 + 1]) ? 213 : (((arr_9 [i_0] [i_1] [i_0] [i_0]) & ((((3580449721 && (arr_4 [7])))))))));
                                arr_22 [i_0] [i_0] [i_0] = (((((arr_7 [i_1 - 2]) > (arr_15 [i_1 + 2] [i_1 - 2] [i_1]))) ? (((((3580449706 ? 31761 : var_6))))) : ((~((~(arr_13 [i_6])))))));
                            }
                        }
                    }
                }
                arr_23 [i_0] [i_1] [i_0] &= (((((((((arr_9 [7] [7] [i_1] [i_1]) ? 1595279257 : var_4))) ? (((arr_12 [i_0] [i_0] [i_0] [i_1] [i_0]) ? -1165827631 : 4249748348)) : (((835008419841184831 ? 123 : 125)))))) ? (arr_12 [i_1 - 1] [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 3]) : (((((4306246319379864667 ? 31310 : (arr_16 [i_0] [i_0] [i_1 - 4])))) ? (((!(arr_0 [8])))) : ((((arr_0 [i_1]) || (arr_13 [i_1]))))))));
            }
        }
    }
    var_15 = (!4306246319379864667);
    #pragma endscop
}
