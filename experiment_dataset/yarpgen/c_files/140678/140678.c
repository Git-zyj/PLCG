/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140678
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((~(!1803922688)));
    var_15 = ((((max((max(-8945798695309415375, var_12)), var_13))) ? (min(((var_11 ? -16 : -2980278888049499190)), (!var_0))) : 32747));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        var_16 ^= -32748;
                        var_17 ^= (arr_0 [i_2]);
                        arr_8 [i_0] = (min((((((max(32762, (arr_7 [i_0])))) ? ((min((arr_1 [i_2]), (arr_6 [i_0])))) : (arr_5 [i_1] [i_2] [i_1])))), (min((~7776134208370122769), (((!(arr_5 [i_0] [i_0] [i_0]))))))));
                    }
                    for (int i_4 = 2; i_4 < 7;i_4 += 1)
                    {
                        var_18 = (min((((!(arr_7 [i_2])))), -4171550097420176414));
                        var_19 = (max(var_19, ((min(((max(-1603227683, 2401))), (min(((-(arr_6 [2]))), (max((arr_7 [i_4]), (arr_10 [i_4] [i_2] [i_1] [i_0]))))))))));
                        arr_11 [1] [i_0] [i_1] [i_2] [i_0] = min((((((~(arr_6 [i_0])))) ? (min((arr_5 [2] [i_0] [0]), 313554371624715998)) : (~-32749))), ((min((~-17172), (((!(arr_1 [i_2]))))))));
                    }
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        var_20 = ((((!(~0))) ? 2384 : (min((min((arr_12 [5] [5] [i_2] [i_5]), (arr_9 [i_5] [i_5] [i_2] [i_1] [i_1] [i_0]))), ((min((arr_0 [i_0]), 1)))))));
                        arr_14 [i_0] = (arr_9 [i_5] [i_2] [i_2] [i_2] [i_1] [i_0]);
                        var_21 += ((!((min(21272655, (((!(arr_3 [i_0] [i_1])))))))));
                        var_22 = ((-9223372036854775803 ? ((~(arr_13 [i_0] [i_0] [i_2] [i_5])) : 62833)));
                    }
                    arr_15 [i_0] [8] [i_0] [i_2] = (arr_13 [i_0] [i_1] [8] [i_2]);
                    arr_16 [i_0] [i_1] [i_1] [i_1] = ((((min((((arr_2 [i_0]) ? (arr_1 [i_2]) : (arr_10 [6] [i_2] [i_2] [i_0]))), ((-(arr_0 [3])))))) ? ((min((min(-2384, (arr_13 [i_0] [10] [i_2] [i_2]))), (((-(arr_3 [i_1] [i_1]))))))) : (min(((135 ? (arr_12 [i_0] [i_0] [i_1] [i_2]) : -426121045490197754)), (!120)))));
                }
            }
        }
    }
    var_23 = min(var_6, (!var_10));
    #pragma endscop
}
