/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165916
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min((~var_2), ((~(min(var_4, var_3))))));
    var_14 = var_8;

    for (int i_0 = 3; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_15 *= (((((-(arr_0 [i_0 + 2])))) ? -8425568552781246010 : ((((!(((~(arr_2 [i_0] [i_0]))))))))));
        var_16 = (max(var_16, (((+(((!((((arr_0 [i_0]) ? var_9 : (arr_0 [i_0]))))))))))));
    }
    for (int i_1 = 3; i_1 < 16;i_1 += 1) /* same iter space */
    {
        var_17 -= ((((!(arr_3 [i_1 - 2])))));
        var_18 -= ((-((~((max(var_9, var_9)))))));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    arr_11 [12] &= (min(((((!(arr_9 [12]))))), (--1951200206)));
                    var_19 = (((min(((!(arr_3 [i_1]))), (var_0 != var_2))) ? (((8 ? (arr_2 [i_1] [i_2]) : 65527))) : ((-(((arr_10 [i_1] [i_1] [i_2] [i_1]) % var_5))))));
                    var_20 -= ((((((arr_2 [i_2] [i_3]) ? (arr_1 [i_1 - 1]) : (arr_3 [i_1 + 1])))) ? (((!(arr_3 [i_3])))) : (((!(arr_2 [i_1 + 1] [i_2]))))));
                }
            }
        }
    }

    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_21 = (min((~var_3), (((!((!(arr_5 [i_4] [i_4]))))))));
        var_22 += ((((var_3 <= ((((1951200190 > (arr_0 [i_4]))))))) ? (arr_10 [i_4] [i_4] [i_4] [i_4]) : (max(27313, (max(1859152733, 65525))))));
    }
    #pragma endscop
}
