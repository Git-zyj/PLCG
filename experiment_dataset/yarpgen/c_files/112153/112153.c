/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112153
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            {
                var_17 = (arr_2 [i_0]);

                for (int i_2 = 4; i_2 < 9;i_2 += 1)
                {
                    arr_7 [i_0] [i_0] [3] = (((arr_1 [i_1]) ? ((~(~15075))) : (var_10 & -32763)));
                    var_18 -= ((((!((min(var_4, var_6)))))));
                    arr_8 [i_0] [i_0] [i_0] = (((((-4023 ? (arr_4 [i_1 - 1]) : (arr_4 [i_1 + 3])))) ? (((8650 | 2043113711) ? ((-4023 ? var_7 : var_6)) : (arr_2 [i_1 + 3]))) : (((((((var_8 ? (arr_4 [i_0]) : 29834))) || (arr_0 [i_0] [i_0])))))));
                    var_19 = (((((-var_5 ? var_7 : (arr_6 [i_1 + 3] [i_1 + 2] [i_1 + 2] [i_1 + 1])))) ? (min((((arr_6 [i_0] [i_1] [1] [i_1 - 1]) & var_12)), (~29834))) : (((min((min((arr_0 [i_1] [i_1]), 13455)), var_8))))));
                }
                for (int i_3 = 4; i_3 < 8;i_3 += 1) /* same iter space */
                {
                    var_20 = 2379664769;
                    arr_11 [i_0] [i_0] = ((8650 ? 2096640 : 3657858180));
                }
                for (int i_4 = 4; i_4 < 8;i_4 += 1) /* same iter space */
                {
                    var_21 = ((-(min(4009, (arr_3 [i_0] [3] [i_4])))));
                    var_22 = ((-((~(min(1535468500, (arr_3 [i_4] [i_1] [i_0])))))));
                }
                for (int i_5 = 4; i_5 < 8;i_5 += 1) /* same iter space */
                {
                    var_23 = ((!((!(((3803880679 ? 9602 : 9482)))))));
                    var_24 = ((~(arr_0 [i_5] [i_5])));
                }
                var_25 += 3999;
                var_26 -= 32767;
            }
        }
    }
    var_27 = (min(((1836091502 ? -9619 : -29848)), ((max((var_15 || var_15), -32747)))));
    var_28 = var_16;
    #pragma endscop
}
