/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121418
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_6 ? (min((~132), var_2)) : (((var_10 && (((114 ? var_8 : var_7))))))));
    var_13 = (max(var_13, var_6));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 9;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_2] = (max(115, 1023));
                                var_14 |= (((arr_9 [i_0] [i_0] [i_0] [i_0]) & ((((min(13362926287820755625, var_8))) ? (((arr_2 [i_0]) / 3811084842277436551)) : var_3))));
                                var_15 = var_3;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 9;i_6 += 1)
                    {
                        {
                            var_16 = 3188489019;
                            var_17 = min(5878052139569074016, (arr_3 [i_0] [i_0] [i_0]));
                            var_18 = (((var_3 ? (arr_9 [i_6] [i_6] [i_6 - 2] [i_0]) : var_4)));

                            for (int i_7 = 0; i_7 < 10;i_7 += 1) /* same iter space */
                            {
                                var_19 |= ((((var_6 ? var_5 : ((5083817785888795987 ? (arr_16 [i_0] [i_0]) : 42)))) + (((max(var_6, (arr_1 [i_7] [i_7])))))));
                                var_20 = 1;
                            }
                            /* vectorizable */
                            for (int i_8 = 0; i_8 < 10;i_8 += 1) /* same iter space */
                            {
                                var_21 *= (((arr_7 [i_6 - 2] [i_6 - 2] [i_6 + 1] [i_6 - 3]) << (-1 + 27)));
                                arr_26 [i_0] [i_1] [i_6 - 3] = (arr_20 [i_1] [i_5] [i_6]);
                            }
                            for (int i_9 = 0; i_9 < 10;i_9 += 1) /* same iter space */
                            {
                                arr_31 [0] [0] [i_9] = ((var_1 ? (~var_6) : ((min(var_1, (arr_5 [0] [i_1]))))));
                                arr_32 [i_0] [i_0] [i_1] [i_5] [i_9] [i_9] = 13362926287820755628;
                                var_22 += (((arr_4 [i_5] [i_1]) + ((-5878052139569074041 ? 13362926287820755605 : 3221225472))));
                                arr_33 [5] [i_1] [i_5] [i_9] [i_9] = (((45 & 477006139641603260) ? 0 : 27816));
                            }
                            for (int i_10 = 0; i_10 < 10;i_10 += 1) /* same iter space */
                            {
                                var_23 = (max(var_23, ((+(((((arr_25 [i_10] [i_0] [i_5] [i_5] [i_0] [i_0]) ? var_1 : var_9)) & 95))))));
                                var_24 = (min(var_24, 13362926287820755606));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
