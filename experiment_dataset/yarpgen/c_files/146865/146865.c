/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146865
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 = (min(var_12, (arr_0 [i_0])));
        arr_3 [i_0] = (((((-(-32767 - 1)))) << (((arr_0 [i_0]) - 33787))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            var_13 = (max(var_13, (arr_7 [i_1] [i_2])));
            arr_9 [i_1] = var_6;
            var_14 = (max(var_14, (4811 <= var_4)));
        }
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
            {
                var_15 |= var_10;
                var_16 = 65;
                var_17 = (max(var_17, (((arr_1 [i_1] [i_1]) ? var_1 : ((((((arr_7 [i_1] [i_1]) % var_7))) ? -1522217555 : 1522217554))))));
                var_18 = (arr_6 [i_3]);
            }
            for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
            {
                arr_18 [1] [1] [i_5] = (((arr_15 [12] [12] [i_5] [12]) >= (min((arr_15 [i_5] [i_5] [i_3] [i_1]), ((551960039 ? var_10 : (arr_16 [i_1] [i_3] [i_5])))))));
                var_19 *= ((((((arr_4 [10]) ? ((var_7 ? -4811 : (arr_11 [i_3] [i_3]))) : var_1))) ? (((arr_0 [i_3]) ? ((((!(arr_6 [i_3]))))) : (arr_14 [i_1] [i_1] [i_5]))) : (((((min((arr_7 [i_3] [i_3]), 4810))) & (arr_0 [i_1]))))));
                var_20 += (((arr_16 [i_1] [i_3] [i_5]) || (arr_6 [i_3])));
            }
            var_21 = ((arr_8 [i_3] [i_1]) ? ((min(var_4, (28453 == var_5)))) : (~1522217555));
            var_22 = (-1522217556 ? (min((arr_8 [i_1] [i_3]), (arr_8 [i_1] [i_1]))) : (((min((arr_6 [14]), (arr_6 [i_1]))))));
        }
        arr_19 [i_1] = (((arr_16 [i_1] [i_1] [i_1]) ? (max(((max(var_5, (arr_16 [7] [7] [i_1])))), ((11618029770846892803 ? var_6 : (arr_4 [i_1]))))) : ((((arr_14 [i_1] [i_1] [i_1]) < (var_5 != -1835675691))))));
        var_23 = -760005901;
    }
    var_24 = ((var_2 ? (var_11 * var_10) : (max(1, var_10))));
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 12;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 12;i_7 += 1)
        {
            {
                var_25 = ((56676 ? (((27885 << (1522217565 - 1522217559)))) : ((-(((arr_5 [7] [i_7]) | (arr_10 [i_6] [i_7] [i_6])))))));
                arr_25 [i_7] [i_7] = (((arr_1 [i_6] [i_7]) << (((arr_1 [5] [5]) + 38))));
                arr_26 [i_6] [i_6] [i_7] = 4285004747;
                arr_27 [i_7] = ((((((((var_1 ? (arr_5 [i_6] [i_6]) : -185945158))) ? (var_7 == var_3) : (((arr_16 [i_6] [i_7] [i_7]) ? -551960040 : (arr_14 [0] [i_6] [i_6])))))) ? 0 : (!1522217555)));
                arr_28 [i_6] [i_7] [i_6] = (max(var_4, (min((min((arr_23 [i_7] [i_7]), 1855562321)), (17451402122681420937 > var_9)))));
            }
        }
    }
    var_26 = var_1;
    #pragma endscop
}
