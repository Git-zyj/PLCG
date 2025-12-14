/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129038
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= ((~(min((0 || 5588272657306319986), (max(1632984375201773735, 56))))));
    var_16 |= var_10;
    var_17 = (~7381227627708486001);
    var_18 = ((((var_5 >= var_6) < 2460612243)));

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_19 = (max(var_19, (((arr_0 [i_0]) > (((((arr_0 [i_0]) + 9223372036854775807)) << (((((arr_0 [i_0]) + 4089461310970618099)) - 47))))))));
        var_20 = 58932;
        var_21 = (min(var_21, ((((((arr_0 [4]) ^ var_9)) | ((((((arr_0 [i_0]) ? (arr_1 [1]) : (arr_3 [i_0] [i_0])))) ? (arr_1 [i_0]) : (arr_0 [i_0]))))))));
        var_22 |= (((min(12800661974351308350, 6603)) - ((max(((2 ? (arr_0 [i_0]) : (arr_0 [i_0]))), (((!(arr_1 [i_0])))))))));
        arr_4 [i_0] [i_0] = ((((((max(var_13, (arr_2 [i_0])))) + (((arr_3 [i_0] [i_0]) + (arr_0 [i_0]))))) - (((max(-5507370234646689474, (arr_0 [i_0]))) - var_0))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_23 = ((!(arr_0 [i_1])));
        var_24 = (min(var_24, (((~(max((-714703246 / 69), (max(-934844644, 47)))))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                {
                    var_25 = (max(var_25, 70368743915520));
                    var_26 = ((((min((arr_7 [i_1]), (arr_10 [i_3] [4])))) ? ((+((1 ? (arr_10 [7] [i_2]) : (arr_7 [i_1]))))) : (~-7381227627708485984)));
                    var_27 = ((((!(((var_3 ? 1121264124 : (arr_8 [i_1])))))) ? ((max((arr_13 [i_3] [i_2] [i_1]), (arr_13 [3] [3] [15])))) : (((24 >= (arr_14 [i_1] [i_1]))))));
                    var_28 += (((((6604 ? (arr_9 [i_1] [i_1]) : (arr_9 [i_2] [i_1])))) ? ((((!(arr_5 [i_1]))))) : ((((max((arr_5 [i_2]), (arr_5 [16])))) - ((var_12 % (arr_12 [i_1] [i_2] [i_3] [i_3])))))));
                    var_29 = ((((!(arr_11 [i_1] [i_2] [i_1]))) ? (((((0 ? 11 : var_1))) ? (min((arr_1 [i_2]), (arr_10 [i_3] [i_2]))) : ((23 ? (arr_0 [1]) : (arr_10 [12] [12]))))) : (((arr_6 [i_1] [i_1]) ? (arr_10 [i_3] [i_2]) : 4294967294))));
                }
            }
        }
        arr_15 [i_1] = (max((max((max((arr_7 [i_1]), (arr_8 [i_1]))), (((46701 ? (arr_9 [14] [i_1]) : (arr_5 [i_1])))))), ((((arr_1 [i_1]) ? 2 : -13)))));
    }
    #pragma endscop
}
