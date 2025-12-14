/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117757
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((~5569812096761804799) ? (((max(1, var_4)))) : (max(-121, 9090456920597809579))))) ? var_5 : (~var_3));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_11 = var_0;

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_12 |= (((arr_0 [23]) != (arr_0 [i_0])));
                    var_13 = 68;
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                {
                    var_14 &= (((min(1, (!var_0)))));
                    var_15 |= (((((((arr_13 [2]) != (arr_5 [i_3] [i_5] [i_5]))))) ? ((-((-(arr_2 [i_3] [i_3]))))) : (arr_11 [i_4] [i_5])));
                    var_16 += (((arr_10 [i_3]) ? (max((min(15356890952854834161, var_3)), -70)) : ((((!(((18122938536668671828 ? 2029637884 : (arr_15 [1] [2]))))))))));
                    var_17 ^= 496;

                    for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
                    {
                        var_18 = 2029637884;
                        var_19 = (max(var_19, ((max((arr_7 [i_3]), (min((arr_7 [i_4]), var_1)))))));
                    }
                    for (int i_7 = 0; i_7 < 10;i_7 += 1) /* same iter space */
                    {
                        var_20 = (!40740);
                        arr_22 [6] [i_4] [i_5] [i_7] |= (18021203136671174322 ? (arr_15 [0] [i_7]) : 18122938536668671833);
                    }
                }
            }
        }
        var_21 = (max(var_21, (((((max(((496 ? 1 : var_2)), ((((arr_0 [i_3]) ? var_9 : (arr_3 [i_3] [8] [i_3]))))))) ? var_7 : 4695907170171526279)))));
    }
    #pragma endscop
}
