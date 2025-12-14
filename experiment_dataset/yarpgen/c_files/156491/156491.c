/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156491
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_14 = ((-(arr_1 [i_0])));
        arr_3 [i_0] [i_0] = (((arr_0 [i_0]) < (arr_0 [i_0])));
        var_15 = (((arr_2 [i_0] [i_0]) & var_10));
    }
    for (int i_1 = 3; i_1 < 15;i_1 += 1)
    {
        var_16 = (((min(1075, 5430861918792469404))) ? (((((var_7 ? (arr_7 [6]) : (arr_4 [i_1])))) ? ((((arr_5 [1] [i_1]) <= var_9))) : (arr_7 [i_1]))) : ((~((var_1 >> (((arr_6 [i_1]) + 37)))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                {
                    var_17 &= (((((~((27270 ? (arr_8 [i_1]) : var_9))))) ? ((((~(arr_4 [i_1 - 3]))) | (min(var_7, (arr_8 [i_3]))))) : (arr_11 [i_3] [i_2] [9] [9])));
                    arr_14 [i_3] [i_2] [i_1] = (((min(((-(arr_6 [i_2]))), (arr_11 [9] [i_1] [i_2] [i_3]))) >> ((((10867052652273747347 * (arr_10 [i_1 - 2] [i_1 - 2] [i_1]))) - 32591))));

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        var_18 = (((arr_10 [9] [i_2] [i_1 - 2]) && (arr_5 [i_1 - 3] [i_2])));
                        arr_17 [i_1] [i_2] [i_3] [i_2] &= ((arr_11 [i_1 - 3] [i_1] [i_1] [i_1 - 2]) ? (arr_15 [i_1] [i_1]) : (arr_11 [i_1] [i_1] [i_1] [i_1 + 2]));
                    }
                }
            }
        }
    }
    var_19 = (min((max((min(3885719872, var_2)), (((var_8 >> (var_5 - 2704717416407514963)))))), var_5));
    #pragma endscop
}
