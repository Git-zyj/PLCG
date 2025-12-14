/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183751
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((var_0 + ((var_10 ? var_14 : var_11)))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        arr_2 [3] [4] = 127;
        var_16 = ((((((~(arr_1 [i_0]))))) ? ((((min((arr_1 [i_0]), (arr_0 [2] [11])))) ? ((((arr_0 [8] [i_0]) ^ (arr_1 [i_0])))) : (arr_1 [0]))) : ((((min((arr_0 [i_0] [i_0]), (arr_1 [i_0]))) ^ (((arr_0 [7] [1]) ? (arr_1 [i_0]) : (arr_1 [i_0]))))))));
        var_17 = ((((((arr_1 [i_0]) ? (min((arr_1 [2]), (arr_1 [1]))) : (((arr_0 [5] [i_0]) ? (arr_1 [11]) : (arr_1 [11])))))) ? (((arr_1 [i_0]) / (arr_0 [i_0] [i_0]))) : (((6168 << (127 - 125))))));
        arr_3 [i_0] = 1;

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_18 -= max((arr_5 [1] [1] [4]), ((+(((arr_4 [i_0]) ? (arr_0 [1] [i_1]) : (arr_5 [5] [i_0] [i_1]))))));
            arr_6 [6] = (min((max((arr_1 [i_0]), (arr_1 [6]))), (arr_1 [i_0])));
        }
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            var_19 = (max(var_19, ((((max((arr_4 [i_2]), (arr_4 [i_0]))) ? ((((arr_0 [i_0] [9]) != (arr_9 [i_0] [i_0] [i_0])))) : (min(((((arr_9 [i_0] [i_2] [i_0]) != (arr_7 [i_0] [3])))), (max((arr_8 [i_0] [4]), (arr_7 [i_0] [0]))))))))));
            arr_11 [i_0] [i_2] [0] |= ((max((arr_0 [i_0] [4]), (arr_0 [i_0] [i_0]))));
            var_20 += (((arr_7 [i_0] [i_0]) ? ((~(arr_8 [i_0] [i_2]))) : (min((arr_8 [i_0] [i_2]), (arr_7 [i_0] [i_2])))));
            var_21 = ((!((((min((arr_10 [i_0] [i_2]), (arr_10 [i_0] [i_2])))) != (((arr_4 [i_2]) ^ (arr_7 [12] [i_2])))))));
        }
    }
    for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
    {
        arr_16 [9] [0] &= (-(arr_1 [i_3]));
        arr_17 [7] = ((!(1 || 123)));
        var_22 = ((1 ? -7265 : 1));
        var_23 = (min(var_23, (((((((min((arr_12 [i_3]), (arr_0 [8] [i_3]))) ^ ((((arr_8 [i_3] [i_3]) ? (arr_7 [i_3] [i_3]) : (arr_7 [i_3] [i_3]))))))) ? (((((~(arr_8 [i_3] [i_3])))) ? (arr_15 [1]) : (max((arr_1 [i_3]), (arr_8 [i_3] [8]))))) : (((min(1, 110)))))))));
    }
    for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
    {
        var_24 = (((min((arr_19 [i_4] [5]), (arr_19 [7] [i_4])))) | ((min((arr_19 [i_4] [i_4]), (arr_19 [i_4] [i_4])))));
        arr_21 [8] [i_4] = (arr_12 [0]);
        arr_22 [i_4] &= (((min(((-123 ? 1109993614 : 1)), ((max(1, 1)))))) ? 3080846205 : 1);
        var_25 = (min(21312, -23743));
    }
    #pragma endscop
}
