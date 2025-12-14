/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144171
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(12202297194003811631, 5726365416015737969));
    var_21 |= var_3;
    var_22 = 15281699639990058084;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((var_15 ? var_13 : 4294967294)));
        var_23 = (556089197 > 5857430269193399087);
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_24 = ((~((((max((arr_1 [0] [i_1]), var_10)) < 18)))));
        var_25 = (max((2 + var_5), ((max((arr_0 [10]), (arr_0 [0]))))));
        var_26 |= (1 & 5857430269193399087);
        var_27 = (arr_1 [12] [12]);
        var_28 = ((max(4294967294, (((!(arr_0 [12])))))));
    }

    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                {
                    var_29 |= (arr_9 [i_3] [i_3]);
                    arr_15 [i_2] [i_2] [i_2] [i_2] = (((((max(var_18, (arr_11 [i_2] [i_3] [i_2]))))) ? (min((arr_7 [i_4] [i_2]), ((((arr_12 [i_2] [i_2] [i_2] [i_4]) || 4294967291))))) : (-127 - 1)));
                    var_30 = 5857430269193399101;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 13;i_6 += 1)
            {
                {
                    arr_20 [i_2] [i_2] [i_6 - 2] = var_6;
                    arr_21 [i_2] [i_2] [i_5] [i_6 + 1] = ((((((max(-7300596381781044015, (arr_17 [i_2] [i_2])))) && 5127083359264817358)) || (((((min((arr_11 [i_2] [i_5] [i_2]), (arr_19 [i_2])))) ? (min((arr_8 [i_2] [i_2]), (arr_11 [i_5] [i_5] [i_2]))) : var_5)))));
                }
            }
        }
        var_31 = ((min((((arr_9 [i_2] [i_2]) | -126)), var_12)));
    }
    #pragma endscop
}
