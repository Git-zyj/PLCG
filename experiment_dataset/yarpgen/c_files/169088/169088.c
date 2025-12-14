/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169088
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((-4823551165643226756 ? (min((var_0 / var_4), ((var_4 >> (var_3 + 1696004740))))) : var_9));
    var_11 &= ((var_0 ? var_2 : var_3));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    var_12 = (min(var_12, var_0));
                    var_13 = (arr_6 [i_0 - 1] [i_1]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_14 *= (arr_0 [i_2]);
                                arr_13 [i_0 - 1] [i_1] [i_2] [8] [i_0] = (arr_12 [i_0] [i_0] [i_2] [7] [i_3] [7] [i_2]);
                                arr_14 [i_0] [12] [i_2 + 2] [i_0] [i_0] [12] [i_3] = (arr_11 [i_0] [i_1] [i_1] [6] [i_3] [i_4] [i_4 + 2]);
                            }
                        }
                    }
                    var_15 *= ((((min((max((arr_11 [i_0] [3] [i_1 + 1] [i_1 - 1] [i_1] [i_1 - 1] [i_2 - 2]), var_2)), var_7))) ? ((((min(var_9, var_9))))) : (min(((var_8 ? -4823551165643226733 : var_0)), ((min(var_2, (arr_9 [i_2 - 2] [4] [i_0] [4] [i_0]))))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            {
                                var_16 += ((min((arr_17 [0] [i_0] [i_0 - 1] [i_0 - 1]), var_6)));
                                arr_21 [i_6] [i_5] [i_0] [8] [3] = 14909031230045186090;
                                var_17 = (max((max((max(var_6, -1823319283)), var_3)), (((var_1 * var_2) ? var_5 : var_2))));
                                var_18 -= ((((max(var_4, ((var_5 ? (arr_9 [0] [i_1] [i_1] [12] [i_1 - 1]) : var_9))))) * ((((max(var_3, (arr_2 [i_0] [i_0])))) / (~var_6)))));
                                var_19 = (max(-4185903690966386456, (2507203608642783849 + -32766)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = (!4185903690966386456);
    var_21 &= var_8;
    #pragma endscop
}
