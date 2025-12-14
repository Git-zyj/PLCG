/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186233
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_8 & (((((min(var_0, var_17))) && ((min(75, var_8))))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    var_20 = max((max(((75 ? 3656848088 : (arr_3 [i_2 - 1] [i_2]))), ((max((arr_5 [i_0 - 3] [i_1] [i_2]), (arr_7 [i_0 - 2] [i_0] [i_0])))))), (((!((((arr_7 [i_0] [i_0] [4]) ? (arr_1 [i_0] [i_0]) : (arr_0 [11]))))))));
                    var_21 = ((((1331247467 == ((min(75, 75))))) ? (((((arr_1 [i_0] [i_2]) ? (arr_0 [i_0 - 1]) : (arr_1 [i_0] [i_0]))) ^ (arr_1 [i_0] [i_0 + 1]))) : 127));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] = (arr_5 [i_0] [i_2 - 1] [i_3]);
                                var_22 = (min(var_22, ((max(((((((-81 ? (arr_8 [i_0] [i_1] [i_3 + 1] [i_0] [i_3 + 1] [6]) : 94))) ? (((arr_8 [10] [i_1] [i_1] [2] [i_3] [i_4]) ? -74 : (arr_6 [i_0] [i_0] [i_0]))) : ((((arr_5 [i_0] [i_0] [7]) || -256385061)))))), (arr_6 [i_0] [i_2] [i_3]))))));
                            }
                        }
                    }
                    var_23 ^= (arr_7 [i_2] [i_1] [i_0]);
                    var_24 = (((min(-467448629, (arr_7 [i_2] [i_2] [i_2]))) - ((((arr_4 [i_0 - 2] [i_1] [i_0]) != (max((arr_4 [i_0] [i_0] [i_0]), (arr_2 [i_2]))))))));
                }
            }
        }
    }
    var_25 = var_4;
    var_26 &= (max(((min(var_1, (max(var_15, var_8))))), (((37833 <= 2394677613) ? ((-3948942500949822844 ? var_1 : -787060134895775741)) : (min(-2191578228237844880, var_8))))));
    var_27 = (((((max(1536, var_12)) - var_12))) ? (max(var_11, (~var_10))) : (((min(var_3, (!var_7))))));
    #pragma endscop
}
