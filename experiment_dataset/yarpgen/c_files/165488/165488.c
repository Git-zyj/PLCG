/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165488
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_15;
    var_21 |= var_0;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] [2] |= ((3548640071 ? -1202528694 : 3727));

        /* vectorizable */
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            var_22 += var_9;
            var_23 = ((~(arr_0 [i_0])));
        }
        var_24 |= (((((max((arr_3 [i_0]), -8955921448119210675)))) ? ((max((((arr_0 [i_0]) ? var_14 : 34638)), (arr_4 [i_0] [i_0])))) : ((3999748937036307634 / (arr_4 [i_0] [i_0])))));
        var_25 += (((((~(((arr_1 [i_0] [6]) ? (arr_0 [i_0]) : 61824))))) ^ (max(var_3, (((var_19 ? 61823 : (arr_1 [16] [16]))))))));

        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            var_26 = (((max(((-5664154220442851715 ? (arr_5 [i_0] [4]) : (arr_7 [i_0]))), var_12))) ? var_6 : ((((arr_6 [i_0] [i_2]) ? (!var_10) : (1050546272 && var_1)))));
            var_27 += (min((((1050546272 ? 61808 : 100533958298125638))), ((var_6 ? (arr_6 [i_0] [i_0]) : (arr_6 [i_0] [i_0])))));
            var_28 = (min(var_28, (arr_3 [i_0])));
        }
        for (int i_3 = 1; i_3 < 23;i_3 += 1) /* same iter space */
        {
            arr_11 [i_0] [i_0] = (((arr_7 [i_0]) + ((((-7 != 179) != 1259306128)))));
            var_29 = (min(var_29, (((((((-127 - 1) ? 1004 : ((3244421024 ? 179 : 0))))) >= ((3035661167 ^ (arr_9 [i_3 - 1]))))))));
            arr_12 [i_0] [i_0] = 1259306128;

            for (int i_4 = 0; i_4 < 0;i_4 += 1)
            {
                arr_15 [i_0] [2] [2] = (((arr_6 [i_3 - 1] [i_3 - 1]) ? (min((arr_7 [i_0]), (arr_5 [i_0] [9]))) : (((17781 ? var_12 : 4294967295)))));
                arr_16 [i_0] [i_0] = 26;
            }
        }
        for (int i_5 = 1; i_5 < 23;i_5 += 1) /* same iter space */
        {
            var_30 = max((arr_6 [i_5 - 1] [i_5 + 2]), -2762933349064989999);

            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                var_31 = (max(var_31, (((((arr_6 [14] [i_5 + 1]) > (arr_1 [i_5 + 1] [8])))))));
                var_32 = var_9;
                var_33 = (arr_18 [i_5] [11] [i_5]);
            }
            for (int i_7 = 0; i_7 < 25;i_7 += 1)
            {
                arr_23 [i_0] = ((~(~49952)));
                var_34 += ((((((137 ? 65535 : 1)))) ^ (((!(arr_13 [19] [i_5 + 2] [i_7]))))));
                var_35 += (((-(max(var_17, (arr_3 [i_0]))))));
                arr_24 [i_0] [15] [13] = var_3;
            }
            arr_25 [i_0] = ((((0 <= 2194924871964472564) <= var_9)));
        }
    }
    #pragma endscop
}
