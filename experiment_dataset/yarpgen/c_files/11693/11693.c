/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11693
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_15 = ((!((min(((max(1, 11305))), ((var_5 ? (arr_4 [i_0] [i_0] [i_1]) : 0)))))));
                var_16 = min(274372239713053021, ((((!0) && ((min((arr_0 [i_0]), 29486)))))));
                arr_7 [i_0] = 52007;
                var_17 += (((18446744073709551599 || 0) ^ ((-45 ? (arr_1 [i_0 - 1] [i_1 + 2]) : (arr_1 [i_0 - 1] [i_1 - 1])))));
                arr_8 [i_0] [i_1] = ((((((~-25778) ? (arr_4 [i_0 + 2] [i_0] [i_1]) : (arr_1 [i_0 + 2] [i_0 + 1])))) ? 1 : (arr_0 [i_1])));
            }
        }
    }

    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            arr_15 [i_3] [i_3] = ((!(((min((arr_0 [12]), 52143)) > (max((arr_5 [i_3]), 32767))))));
            var_18 = (!((((arr_5 [i_3]) ? (arr_5 [i_2]) : (arr_10 [i_3])))));
            var_19 = (arr_4 [i_2] [i_3] [i_3]);
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            var_20 = 72057594037927872;
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        {
                            var_21 = var_14;
                            var_22 = 2045978349;
                        }
                    }
                }
            }
        }
        for (int i_8 = 1; i_8 < 9;i_8 += 1)
        {
            var_23 = (min(var_23, (((((+((((arr_10 [i_8]) < 604195786))))) == ((((min((arr_25 [i_2] [i_8] [1] [i_8] [i_8 + 1]), 18374686479671623744))) ? ((max(-109, 42822))) : (arr_25 [i_2] [i_2] [i_8 + 1] [i_8] [i_8]))))))));
            arr_28 [i_8] = ((max(0, (arr_5 [i_8 - 1]))));
            arr_29 [i_8] = ((+(((arr_12 [i_8 + 1] [i_8 + 1]) ? ((72057594037927872 ? 14529926133180238521 : 9156346004756078661)) : (!18374686479671623743)))));
        }
        var_24 = (max(var_24, (arr_12 [i_2] [i_2])));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 13;i_9 += 1)
    {
        var_25 = (arr_0 [i_9]);
        var_26 = ((3916817940529313094 ? 13248819318692096639 : 1));
        var_27 *= (((-(arr_6 [i_9] [i_9] [i_9]))) != (arr_31 [i_9] [i_9]));
    }
    #pragma endscop
}
