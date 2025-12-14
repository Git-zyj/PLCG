/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125968
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((~-3357381650918318822) << (var_6 - 795170661)));
    var_13 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_14 *= (min(((min((arr_9 [i_3] [i_3]), (arr_9 [i_1] [i_1])))), (((arr_9 [i_0] [i_3]) ? (arr_9 [i_0] [i_1]) : (arr_9 [i_0] [i_1])))));
                            arr_11 [i_1] [i_1] [i_1] [i_1] [i_1] [i_2] = (arr_3 [i_0]);
                            var_15 = (max(var_15, (((((min((arr_1 [i_2] [i_3]), (arr_1 [i_1] [i_2])))) << (((~-549371899) - 549371886)))))));
                            arr_12 [i_0] [i_0] [i_2] = (arr_7 [i_1] [i_1] [i_1]);

                            for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
                            {
                                var_16 = (((arr_9 [i_2] [i_2]) ? ((((arr_4 [i_2] [i_2]) ? 16777214 : 11237))) : 7534779560450566090));
                                arr_16 [i_0] [i_1] [1] [i_3] [i_0] [i_2] [i_2] = ((255 ? ((-(arr_0 [i_3]))) : (((((((arr_15 [i_0] [i_0] [i_1] [i_0] [i_2] [i_3] [i_2]) ? (arr_7 [i_0] [i_1] [i_3]) : (arr_2 [i_0] [i_1] [5])))) ? -137960535 : ((max(0, 65524))))))));
                                arr_17 [0] [i_1] [0] [i_1] [i_1] &= (min((((~(-9223372036854775807 - 1)))), ((((arr_13 [i_4] [i_3] [i_2] [i_1] [i_0]) ? ((1308156055 ? 0 : var_3)) : (arr_0 [i_3]))))));
                                arr_18 [i_1] [i_1] [i_2] [i_3] [i_4] [i_1] [i_2] = ((-(arr_6 [i_4] [i_2] [i_0])));
                                var_17 += (arr_10 [i_4] [i_1] [i_2] [i_1]);
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
                            {
                                var_18 = (arr_3 [i_2]);
                                var_19 = (((arr_9 [i_0] [i_2]) ? (arr_8 [i_0] [i_0] [i_2] [i_3] [i_5]) : (arr_9 [i_3] [i_2])));
                            }
                            for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
                            {
                                arr_24 [i_0] [i_0] [i_0] [i_0] [i_2] [i_0] = var_5;
                                arr_25 [i_2] [i_1] [i_2] [i_3] [i_6] = ((((((max(9223372036854775807, 0)) >> (((((arr_20 [9] [i_3] [i_2] [i_0] [i_1] [i_0]) ? 7419837865694256818 : 54269)) - 7419837865694256805))))) ? (~-23842) : 65533));
                                arr_26 [i_0] [1] [i_2] [i_0] [i_2] = (((-9223372036854775807 - 1) > 58261));
                            }
                        }
                    }
                }
                arr_27 [i_1] = ((((arr_14 [0] [i_1] [i_0] [i_0] [i_0] [i_1]) ? (arr_14 [i_0] [i_1] [i_1] [i_1] [i_0] [i_1]) : (arr_22 [i_0] [i_1] [i_1] [i_1] [i_1]))));
                arr_28 [i_0] [i_1] = (+(((arr_10 [i_0] [i_0] [8] [i_1]) ? (arr_22 [i_0] [i_0] [i_0] [i_0] [i_1]) : (arr_22 [i_0] [i_0] [i_1] [i_1] [i_1]))));
            }
        }
    }
    var_20 = (max(var_20, ((((((((-27371 ? var_11 : -1037441658)) <= var_8))))))));
    #pragma endscop
}
