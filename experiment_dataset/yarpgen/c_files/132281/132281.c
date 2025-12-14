/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132281
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += min((max((var_7 <= var_5), -var_7)), var_8);

    for (int i_0 = 1; i_0 < 9;i_0 += 1) /* same iter space */
    {
        var_11 = (((max(-2072927999203829441, 2072927999203829427))) ? (~var_5) : var_7);

        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            var_12 = (min(var_12, var_4));
            var_13 = (max(((max(2072927999203829438, 0))), (arr_1 [2])));
        }
        for (int i_2 = 2; i_2 < 9;i_2 += 1)
        {
            var_14 = (arr_6 [i_0]);
            var_15 = (max(var_15, (((127 ^ (var_8 / var_1))))));
            var_16 = (min(var_16, ((((max(-2072927999203829416, (3 % 127)))) ? ((((var_7 / var_3) % var_5))) : ((-(arr_0 [i_2])))))));
        }

        for (int i_3 = 2; i_3 < 7;i_3 += 1)
        {
            var_17 = (arr_2 [i_0] [i_0] [i_0]);
            var_18 = ((!(var_4 / var_0)));
            var_19 |= (!((-var_9 || ((max(var_5, (arr_5 [i_0 + 1] [i_3] [i_0])))))));
            var_20 = (max(((((var_9 ? (arr_6 [i_0]) : (arr_3 [i_0 + 1] [4]))) == var_2)), (245 || var_6)));
            var_21 ^= (((max(120, 2147483647))) + (arr_8 [10]));
        }
    }
    for (int i_4 = 1; i_4 < 9;i_4 += 1) /* same iter space */
    {
        var_22 = ((~(max(((max(-111, var_6))), var_9))));
        var_23 = -var_3;
    }
    for (int i_5 = 1; i_5 < 9;i_5 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 8;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 9;i_8 += 1)
                {
                    {
                        var_24 = ((!(((~(arr_2 [i_7 - 1] [i_5] [i_5 + 1]))))));
                        var_25 = (min(var_25, ((((((!var_5) + (((arr_10 [i_7] [i_7]) ? (arr_5 [i_7] [i_7] [i_7]) : var_9)))) + (((((max(var_4, var_5))) ? ((max((arr_15 [i_5]), (arr_15 [i_6])))) : var_5))))))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 11;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 10;i_10 += 1)
            {
                {
                    var_26 = (max(var_26, ((max(((-(arr_14 [i_10 - 1] [i_10 + 1]))), ((((arr_3 [i_5] [i_5]) >= (arr_8 [i_9])))))))));
                    var_27 = (((((!(((~(arr_23 [i_5] [i_5]))))))) > (var_1 != var_6)));
                    var_28 = ((var_0 ? 117 : (max((min((arr_6 [i_5]), var_3)), 141))));
                }
            }
        }

        for (int i_11 = 3; i_11 < 9;i_11 += 1)
        {
            var_29 = (max(var_29, (((((-(-2072927999203829421 + var_0))) / (var_6 % var_1))))));
            var_30 = ((min((max(var_5, 18446744073709551615), var_3))));
        }
        for (int i_12 = 1; i_12 < 10;i_12 += 1)
        {
            var_31 = ((~((-(arr_18 [i_5] [8] [i_12])))));
            var_32 = (arr_25 [0] [0] [i_12]);
        }
        var_33 = arr_12 [i_5];
    }
    var_34 = (min(var_34, var_0));
    #pragma endscop
}
