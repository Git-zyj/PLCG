/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139932
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_9;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 7;i_0 += 1) /* same iter space */
    {
        var_17 = (arr_1 [i_0 + 4]);
        var_18 = ((-(arr_1 [i_0 + 2])));
        var_19 = (((arr_1 [i_0 + 4]) == (arr_1 [i_0 + 3])));
    }
    for (int i_1 = 3; i_1 < 7;i_1 += 1) /* same iter space */
    {
        var_20 = (arr_1 [i_1]);
        arr_6 [i_1] = -1368802213;
        var_21 += (min(((max((arr_1 [i_1 - 1]), (arr_1 [i_1 - 2])))), -var_1));
    }
    for (int i_2 = 3; i_2 < 7;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 2; i_3 < 9;i_3 += 1)
        {
            var_22 = (max(var_22, (((-(((arr_8 [i_2 - 1] [i_3 - 2]) >> (((arr_8 [i_2 - 1] [i_3 + 1]) - 187)))))))));
            var_23 = (arr_4 [i_2 - 3]);
        }
        var_24 -= ((max((arr_1 [i_2 - 1]), (arr_1 [i_2 - 2]))));
    }
    for (int i_4 = 1; i_4 < 22;i_4 += 1)
    {
        var_25 &= (((~(arr_14 [i_4 + 2]))));
        var_26 -= (((arr_14 [i_4]) | ((-(((arr_13 [22]) ? (arr_15 [4]) : (arr_14 [i_4])))))));
        var_27 = (max(var_27, (((var_11 ? ((-(arr_15 [22]))) : ((((!(arr_14 [i_4 + 2]))))))))));
        var_28 = (-23727 * 23715);
    }
    var_29 = (max(var_29, var_13));
    var_30 = 23745;
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            {
                var_31 = (((min((arr_18 [i_5] [i_6]), ((((arr_16 [i_5]) <= (arr_18 [i_5] [i_6])))))) != ((((arr_13 [i_5]) ? (arr_13 [i_5]) : (arr_13 [i_5]))))));
                arr_23 [i_5] [i_6] [i_5] = (((((((arr_18 [i_5] [i_5]) - var_3)))) || ((max((arr_18 [i_5] [i_6]), (arr_16 [i_5]))))));
                var_32 = (((112 & 1) / -79));
                var_33 |= ((((((arr_21 [i_5]) ? (arr_19 [i_5] [i_6]) : (arr_21 [i_6])))) ? (arr_21 [i_6]) : (((arr_21 [i_5]) ? (arr_19 [i_5] [i_5]) : (arr_21 [i_6])))));
                var_34 = ((((arr_13 [i_5]) ? (arr_14 [i_5]) : (((arr_20 [i_5]) ? (arr_17 [i_5]) : (arr_18 [i_5] [i_5]))))) == (arr_17 [i_5]));
            }
        }
    }
    #pragma endscop
}
