/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151480
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_15 = var_3;
        var_16 = (max(((32512 * (var_4 - 402653184))), ((~(arr_1 [i_0])))));
        arr_2 [i_0] = (((((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))) & var_1));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_17 = (((-32513 >= 32504) || ((min(7456059377380504614, var_11)))));
        var_18 = ((32748 ? (-32767 - 1) : -32512));
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        arr_8 [2] [2] = ((((((max(var_11, (arr_7 [11] [i_2])))) || (arr_7 [i_2] [i_2]))) || var_2));

        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            arr_11 [i_2] = (((((arr_9 [i_3] [i_3]) >= (arr_6 [i_2]))) ? (min((arr_7 [i_3] [i_3]), var_11)) : var_11));
            var_19 ^= var_2;
            arr_12 [i_3] = (min((-415419148 >= 8208005505047299482), ((((arr_7 [i_3] [1]) ? (arr_6 [1]) : -415419156)))));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            var_20 ^= -7456059377380504614;
            arr_15 [i_4] [i_2] = (((arr_6 [i_4]) - (arr_13 [i_2] [i_4] [i_4])));
        }
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            var_21 = (max(122, var_0));
            var_22 = var_5;
        }
    }
    for (int i_6 = 0; i_6 < 21;i_6 += 1)
    {

        for (int i_7 = 0; i_7 < 21;i_7 += 1)
        {
            arr_22 [i_6] [i_7] [i_6] = (((((arr_19 [i_6]) & var_8)) > (((max((arr_20 [i_7]), (arr_20 [i_6])))))));
            arr_23 [i_6] [i_7] [i_7] = ((4122210635 ? (((-415419167 >= ((var_8 ? 44082 : var_6))))) : ((12503878681846559918 ? 415419155 : 123))));
            arr_24 [i_6] [i_7] [i_6] = var_13;
        }
        /* vectorizable */
        for (int i_8 = 3; i_8 < 19;i_8 += 1)
        {
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 21;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 20;i_10 += 1)
                {
                    {
                        var_23 = (max(var_23, ((((((var_12 ? var_2 : -32517))) ? var_5 : var_7)))));
                        arr_33 [i_6] [i_8 - 2] [i_9] [i_10 - 1] = 15446;
                    }
                }
            }

            for (int i_11 = 0; i_11 < 21;i_11 += 1)
            {
                arr_36 [i_6] [i_8] [i_11] = ((arr_30 [i_8 - 2] [i_8 - 2] [i_8]) ^ var_12);
                var_24 = (((arr_28 [i_8] [i_8 - 2] [i_11]) << (var_2 - 3270)));
            }
        }
        var_25 = ((((arr_25 [i_6] [6] [i_6]) ? var_11 : var_0)));
    }
    var_26 = ((((max(var_1, var_4))) < var_4));
    var_27 = (min((!var_12), (min(var_0, var_13))));
    var_28 = (((~((min(46132, var_11))))));
    #pragma endscop
}
