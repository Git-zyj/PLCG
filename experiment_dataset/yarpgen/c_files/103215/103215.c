/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103215
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_3 ? ((((5832 / 20805) >= ((364767057 ? var_10 : var_0))))) : var_9));
    var_14 = (min(var_14, (!16635071051401278821)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_15 += (((min(((max(var_12, var_12))), (max(131, var_6)))) >= -13121));
                    arr_10 [3] [9] [i_1] = (((!var_8) * ((var_1 ? (arr_8 [i_1 - 1] [i_1 - 1] [i_1] [5]) : (arr_2 [i_1 + 2] [i_1 + 1])))));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                {
                    arr_20 [i_3] [i_4] = (arr_17 [i_3] [i_4] [i_5]);
                    var_16 = (min(var_16, ((((var_5 <= var_7) ? (!1958133665) : (arr_19 [i_5]))))));
                }
            }
        }
        var_17 = var_7;
        var_18 = 125;
    }
    for (int i_6 = 0; i_6 < 17;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 17;i_8 += 1)
            {
                {
                    arr_28 [6] [6] [i_6] [6] = (((((((min((arr_24 [i_6] [i_6] [i_8]), 13772))) ? (var_10 ^ 13009) : (max(0, 52526))))) <= var_7));
                    arr_29 [i_6] [15] [i_6] = (max((min(((52526 ? var_7 : var_12)), ((max(var_0, 32743))))), (arr_21 [i_8])));
                }
            }
        }
        arr_30 [i_6] = (min(102, 13009));
        arr_31 [i_6] = var_7;
        arr_32 [16] |= ((((min(var_1, 13009))) > ((max(83, -4453)))));
        var_19 *= ((+(((-10345 + 2147483647) << (242946271 - 242946271)))));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 21;i_9 += 1)
    {
        var_20 ^= (((((55176 ^ (arr_33 [i_9] [1])))) % var_7));
        var_21 = 137065557;
    }
    var_22 &= ((var_0 ? (((max(var_9, (max(var_11, -110)))))) : (max(((-1891634742 ? var_5 : var_8)), (((var_11 ? -2111852657 : var_10)))))));
    #pragma endscop
}
