/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127585
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((var_1 || 17) * var_5));

    for (int i_0 = 1; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_14 &= ((4294967295 ? 0 : 1));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_15 = (max(var_15, var_10));
                    var_16 = 61877;
                    arr_8 [i_0] [i_0] [i_0] = (min((max((var_2 % var_0), 614253231840276061)), (~1)));
                }
            }
        }
        var_17 = (max(((max(209, var_6))), (~0)));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 20;i_4 += 1)
            {
                {
                    var_18 = (((((arr_12 [i_0] [i_4 + 1] [i_0]) < (((var_8 ? 5 : var_11))))) ? var_10 : (min(((var_2 ? (arr_3 [i_0] [16]) : var_6)), ((min(1, var_10)))))));
                    var_19 = ((((((((var_7 ? (arr_5 [i_0] [i_0] [i_4] [15]) : 32764))) ? var_11 : ((75 ? var_4 : 1))))) ? ((((min(var_8, 1)) > (((min(var_11, var_11))))))) : ((((140 > var_2) || ((max(var_4, var_4))))))));
                }
            }
        }
    }
    for (int i_5 = 1; i_5 < 1;i_5 += 1) /* same iter space */
    {
        arr_17 [i_5] [i_5] = ((((-var_7 ? (((arr_13 [i_5]) / var_2)) : (arr_11 [9] [8] [i_5 - 1] [1]))) >> (((1549555880814074531 * 8) - 12396447046512596234))));
        var_20 = (((var_2 | var_4) ? (max(var_1, 1618273220)) : (arr_5 [i_5 - 1] [i_5] [i_5 - 1] [i_5])));
        var_21 *= ((((((min(var_2, var_9))) || ((max((arr_7 [i_5] [i_5] [i_5]), var_11))))) ? (var_11 & 48) : (((var_11 > ((var_2 << (var_3 - 7785))))))));
    }
    for (int i_6 = 1; i_6 < 1;i_6 += 1) /* same iter space */
    {
        var_22 = (max(var_22, ((min((((var_4 >> (var_8 - 1519051703)))), ((((min(var_6, 85)) % ((min(var_10, 196)))))))))));
        var_23 = (arr_13 [10]);
    }
    for (int i_7 = 1; i_7 < 1;i_7 += 1) /* same iter space */
    {
        var_24 = var_1;
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 22;i_9 += 1)
            {
                {
                    var_25 += (min(1, 140));
                    var_26 += ((var_6 % (min(((max((arr_20 [i_9]), 32750))), ((var_10 ? (arr_13 [i_9]) : var_1))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_10 = 1; i_10 < 10;i_10 += 1)
    {
        for (int i_11 = 1; i_11 < 10;i_11 += 1)
        {
            for (int i_12 = 2; i_12 < 10;i_12 += 1)
            {
                {
                    var_27 = (max(((1 | (arr_20 [i_12]))), ((-var_9 ? (arr_11 [i_10 - 1] [i_11] [i_11 - 1] [1]) : ((var_3 ? var_10 : var_10))))));
                    var_28 -= (1 != var_3);
                    arr_37 [i_12] = var_0;
                    var_29 = ((((((((15684 << (-20 + 29)))) < ((1 ? (arr_33 [i_10] [3]) : 6))))) ^ ((min((max((arr_21 [4]), var_1)), var_3)))));
                }
            }
        }
    }
    var_30 = ((var_12 == ((-((8 ? -15639 : 2097151))))));
    #pragma endscop
}
