/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149667
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_18 = (min(var_18, -10291));
                arr_7 [i_0] [i_1] = (max((((arr_2 [i_0]) ? (((-(arr_5 [i_0] [i_1] [i_0])))) : var_10)), 32));
                var_19 = (((43 < var_9) ? (arr_0 [i_0]) : ((((((var_11 ? (arr_6 [i_0]) : -1554613008))) ? (((!(arr_6 [i_1])))) : ((((arr_4 [i_1] [i_1] [i_1]) != (arr_5 [i_0] [i_0] [5])))))))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        var_20 &= 115;
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    {
                        var_21 = (((((((min(-10281, var_17))) ? (((!(arr_9 [i_2])))) : 1148459869))) ? ((1152921504606846975 ? 15360 : -15014)) : (((((((arr_12 [7] [i_4] [i_5]) ? (arr_12 [i_2] [i_3] [i_3]) : -10260))) && (arr_8 [i_2]))))));

                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            var_22 = (((((((((arr_12 [i_2] [i_2] [i_4]) ? 32 : var_1))) ? (((!(arr_15 [i_3] [i_3] [i_3] [i_3] [i_3])))) : ((((arr_13 [i_2] [i_3] [i_4]) && var_3)))))) ? ((0 ? 10294 : (max(4294967295, (-32767 - 1))))) : var_3));
                            var_23 = (max(var_23, ((max((((!((((arr_13 [12] [i_3] [12]) ? (arr_11 [i_2]) : var_7)))))), -1152921504606846975)))));
                            arr_19 [i_5] [i_3] [i_4] [i_5] [i_5] [i_6] = (max((arr_10 [i_2]), (max((arr_8 [i_2]), (((arr_8 [i_2]) ? var_1 : (arr_10 [i_3])))))));
                            var_24 = (arr_8 [i_3]);
                            var_25 -= min((--9949005556544891317), (234885286 < -5));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
