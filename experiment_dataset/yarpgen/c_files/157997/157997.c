/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157997
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_4;
    var_14 = ((((max(((var_3 ? -27 : 248)), var_2))) && ((min(((min(2, 248))), (max(51, var_1)))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [8] &= (((11725860249778721785 & 237) - (((max(13276, var_8))))));
                var_15 = (33 || ((((218 & 1879972863) ? ((min((arr_3 [i_0 - 3] [12] [i_1 + 2]), var_0))) : 1))));
                var_16 = 12;

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    var_17 = (min((min(var_9, var_4)), ((((max(var_2, var_3)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_18 = (min(((((var_11 ? 0 : var_0)))), 886492562));
                                arr_14 [i_0] [i_1] [i_0] [i_0 - 3] [i_0 - 2] [i_0 + 1] = (((max((arr_1 [4]), 255))));
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    var_19 = (max((~var_6), ((-(((!(arr_8 [i_1] [i_0] [15] [16] [i_5] [15]))))))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 16;i_7 += 1)
                        {
                            {
                                var_20 = (max(var_20, ((min(-24, 60294)))));
                                var_21 = ((var_9 ? 1 : 90));
                                var_22 = min(((max((arr_3 [i_0] [i_0 - 1] [i_0 - 1]), 1))), 11873362455070915735);
                                var_23 = (((min(-13, (arr_11 [i_0] [13] [i_1])))));
                            }
                        }
                    }
                    var_24 = (max(var_24, (min((max((~var_11), var_8)), (((102 ? (arr_12 [i_0 - 1] [i_0 - 1] [i_1 - 1]) : (arr_9 [i_1 + 2] [i_0] [i_0 + 1] [i_1 + 1]))))))));
                }
                for (int i_8 = 0; i_8 < 18;i_8 += 1)
                {
                    var_25 = (max(var_25, ((min((max((arr_9 [i_0 - 3] [i_0 - 2] [i_0 + 1] [i_0]), ((((arr_19 [i_1 - 1] [1] [i_8] [i_1]) - (arr_5 [i_0 - 3] [i_1 - 1] [i_8])))))), (((((-30 <= (arr_2 [i_0] [i_1 + 2]))) ? (!var_3) : ((1 >> (-1731503093 + 1731503124)))))))))));
                    arr_25 [i_1] = (((((!(arr_21 [i_0 - 3])))) % (max(33554428, 0))));
                    var_26 |= (min((((max(23, 886492562)) & 207)), (max(6, 2045129644))));
                    arr_26 [i_0] [i_0] [i_1] = (max((min(((1731503093 ? 2624689756 : 1)), (arr_22 [i_0] [i_1] [i_1 + 2] [i_1] [i_8] [i_8]))), ((min((((!(arr_20 [2] [i_0] [3] [i_0] [i_0 - 2])))), (min(1, 15772)))))));
                }
                var_27 = (max(6523964274072424578, 45));
            }
        }
    }
    var_28 = var_3;
    #pragma endscop
}
