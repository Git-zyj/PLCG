/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121714
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_8;

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_13 = ((((~(((arr_2 [i_0]) ? var_6 : 1773030689428976655)))) == (arr_0 [i_0])));
        var_14 = var_2;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [i_1] [i_2] [i_2] [i_2] [i_2] = (((~var_11) | (((~((min(var_2, (arr_9 [i_0] [i_0] [i_3])))))))));
                        var_15 = (224 < 1);
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
    {
        var_16 = ((((max(((var_7 ? 952095492 : var_9)), var_11))) ? (max(((0 ? 2128314007 : var_3)), ((max(var_2, 65308))))) : ((((arr_5 [i_4]) ? (arr_8 [0]) : 2)))));
        var_17 += 31;
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 0;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        for (int i_8 = 3; i_8 < 14;i_8 += 1)
                        {
                            {
                                var_18 += (((((((arr_21 [i_5] [12] [0] [i_5] [i_5 - 1]) > (arr_15 [i_6 + 1] [i_5 - 1] [i_6]))))) % (max((arr_21 [i_5] [i_5 - 1] [12] [12] [i_5 - 1]), -96))));
                                arr_26 [12] [i_5] [i_8] = ((((min((((var_1 ? 209 : 1))), (max(var_11, 65322))))) ? (((max((arr_0 [i_4]), (arr_0 [i_4]))))) : (arr_11 [i_4] [i_4] [1] [i_4])));
                                arr_27 [i_7] [i_5] = var_9;
                            }
                        }
                    }
                    arr_28 [i_5] [i_5] [i_6] = ((((((arr_24 [i_4] [i_4] [i_6] [7] [i_5]) & 53690))) ? ((((var_9 ? 53690 : 115)))) : (min(((~(arr_1 [i_5]))), ((min(11846, (arr_7 [i_4] [7] [i_5] [i_6]))))))));
                    arr_29 [i_4] [i_5] = ((((max(65340, 2373875452))) ? (arr_22 [i_6 + 1] [i_5] [i_6 + 1] [i_6 + 1]) : ((~(~43681)))));
                    arr_30 [i_4] [i_5] [i_4] = ((4 >> (213 - 188)));
                }
            }
        }
    }
    #pragma endscop
}
