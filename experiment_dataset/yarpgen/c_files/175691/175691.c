/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175691
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 12;i_2 += 1)
                {
                    var_12 = ((max(var_3, ((var_2 ? (arr_1 [i_0]) : (arr_6 [i_0] [i_1]))))));
                    var_13 = (min(var_13, ((max((arr_7 [i_0 + 2] [i_1] [i_2 - 3] [i_2 - 3]), (((arr_7 [i_0 + 2] [i_1] [i_2 + 3] [i_2 + 1]) * (arr_7 [i_0 + 2] [i_1] [i_2 - 1] [i_2 - 2]))))))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    arr_13 [i_0] [i_3] [i_3] [i_3] &= ((((!(arr_9 [i_1] [i_1]))) ? var_6 : 229814747));
                    var_14 ^= 1;
                    var_15 = (((((-1839393173 ? 1839393173 : (arr_4 [i_1 + 3])))) ? (((var_2 ? 217 : -1839393154))) : (arr_1 [i_0 + 3])));
                    var_16 = ((((((arr_3 [i_0] [i_0]) ? (arr_4 [i_1]) : (arr_2 [i_0])))) ? 175 : (~-30323)));
                }
                var_17 = (min(1839393164, (3 - -1)));
                arr_14 [i_0] [i_1] [i_0] = (((max(((var_1 ? 2334833612022852989 : -1839393192)), (var_0 || var_3)))) ? var_1 : (((13 == 1) ? (arr_3 [i_0] [i_1]) : ((1839393172 ? var_1 : -30324)))));
                var_18 = (((((68 >= -11649) ^ var_6)) < (arr_4 [i_0])));
            }
        }
    }
    var_19 = ((1 ? 1 : -1));
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 18;i_5 += 1)
        {
            {
                arr_22 [3] [i_4] = (min((min((arr_19 [i_5 - 2] [i_5 - 1] [i_5 - 1]), var_9)), ((min((arr_19 [i_5 - 2] [i_5 - 1] [i_5 - 1]), (arr_19 [i_5 - 2] [i_5 - 1] [i_5 - 1]))))));
                var_20 = (~((((var_11 >> (((arr_21 [1]) - 142)))) << (((1839393168 ^ 1) - 1839393152)))));
            }
        }
    }
    var_21 = (min(var_21, (((-var_9 - (max((var_10 * var_7), (((var_7 ? var_9 : var_6))))))))));
    #pragma endscop
}
