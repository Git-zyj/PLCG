/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14847
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_20 = ((((max(var_17, (152014242 & 198)))) && ((((((var_17 ? var_4 : (arr_0 [5])))) ? ((max(6395, (-32767 - 1)))) : 1)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_21 = (((((4108019022 ? -5421297816275010916 : ((-28603 ? (arr_7 [i_0] [i_0 + 2]) : 36028522141057024))))) ? var_3 : (min((arr_4 [i_0] [i_0]), ((var_7 ? 58 : (arr_5 [i_0] [i_1] [i_0])))))));
                                var_22 = (max(7088078570077666991, ((((!(arr_5 [i_0] [i_0] [i_0]))) ? ((-7088078570077666991 ? var_11 : (arr_12 [i_0] [6] [i_2] [i_3 + 3] [i_4]))) : (arr_8 [i_0])))));
                                var_23 = var_0;
                                var_24 -= ((((((arr_12 [i_1] [i_0 + 3] [i_0 + 1] [i_3 - 3] [i_3]) ? (arr_1 [i_0]) : (arr_12 [i_1] [i_0 + 3] [i_0 - 1] [i_3 + 4] [0])))) ? (((arr_1 [1]) ? (arr_1 [i_0]) : (arr_12 [i_4] [i_0 + 2] [i_0 + 1] [i_3 + 2] [i_3 - 3]))) : (((arr_12 [i_4] [i_0 + 1] [i_0 + 3] [i_3 + 1] [i_4]) ? var_12 : (arr_12 [i_1] [i_0 + 1] [i_0 + 2] [i_3 + 1] [i_3 - 1])))));
                            }
                        }
                    }
                    var_25 = (max(var_25, ((-(arr_9 [i_1] [12] [i_2])))));
                    var_26 = (min(var_26, ((max((((var_19 > 21007) ? (((-(arr_6 [i_1])))) : var_2)), (arr_7 [i_0] [i_2]))))));
                }
            }
        }
    }
    var_27 += (((((var_5 ? var_15 : -6958))) > var_19));
    #pragma endscop
}
