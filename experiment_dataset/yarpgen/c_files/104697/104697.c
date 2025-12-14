/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104697
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= ((((((((var_4 ? var_10 : var_3))) ? var_2 : var_4))) || (((var_9 ? var_12 : var_7)))));
    var_14 = var_8;
    var_15 = ((((max(((169 ? 177 : 86)), ((87 ? 169 : -31))))) ? ((var_3 ? 0 : var_1)) : ((((var_12 ? var_3 : var_6))))));
    var_16 = (max(var_16, var_9));

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_17 = ((min((arr_2 [i_0] [i_0]), ((((arr_1 [i_0] [17]) == var_2))))));
        var_18 = ((((max((arr_0 [i_0]), (arr_2 [i_0] [i_0])))) || (((var_5 ? (arr_2 [i_0] [i_0]) : (arr_2 [10] [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_19 = 4283315601373562809;
        var_20 = (min((((((-(arr_1 [i_1] [i_1])))) / ((var_2 ? var_2 : 9905652251338661430)))), (((1 ? (arr_4 [i_1]) : 0)))));
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] = ((var_10 ? var_0 : (min(var_1, ((~(arr_2 [i_2] [i_2])))))));
        var_21 = (max(var_21, var_3));
        var_22 = (max(var_22, ((((arr_0 [i_2]) ? (arr_3 [i_2]) : ((((!(arr_2 [i_2] [i_2]))))))))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    arr_16 [i_2] [4] [4] |= (((9223372036854775807 - (arr_3 [i_4]))));
                    var_23 = (((((((min(var_0, 162))) ? 108 : (max(1, (arr_8 [i_3] [i_2])))))) <= (((((var_9 ? -98 : -3))) ? (arr_7 [i_2]) : (min((arr_6 [i_2]), 18446744073709551593))))));
                }
            }
        }

        for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
        {
            arr_19 [i_5] [i_5] = (max((arr_12 [i_5]), (((arr_14 [i_2] [i_2] [i_5] [i_2]) ^ (arr_14 [i_2] [i_2] [i_5] [i_5])))));
            /* LoopNest 2 */
            for (int i_6 = 2; i_6 < 14;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 16;i_7 += 1)
                {
                    {
                        arr_24 [i_5] [i_5] [i_5] = (~-10);
                        var_24 = (max(var_24, (((-1 - (((((max((arr_17 [i_6]), var_8))) && (19643 > 17960)))))))));
                    }
                }
            }
            var_25 = -4;
        }
        for (int i_8 = 0; i_8 < 18;i_8 += 1) /* same iter space */
        {
            var_26 = (min((((((var_2 ? 14339166240534936104 : var_3)) == (arr_25 [i_8])))), (((!var_4) ? (1 && 2164018037102729240) : var_9))));
            arr_28 [i_8] [i_8] = (min((((arr_0 [i_8]) + (arr_0 [i_2]))), ((min((max(-10097, var_2)), var_10)))));
            var_27 ^= (((((((arr_26 [i_2] [i_8]) | 169)) <= ((var_7 ? 1700271232 : var_7)))) ? ((((var_11 - (arr_5 [i_2] [i_2]))))) : (~var_12)));
        }
    }
    #pragma endscop
}
