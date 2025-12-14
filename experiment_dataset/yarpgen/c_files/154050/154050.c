/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154050
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = var_11;
        var_17 = (min(var_17, ((((((((var_13 < (arr_1 [i_0]))) ? (arr_1 [i_0 - 4]) : (131 % 37520)))) ? (max(2891892697349671589, 9066270520303139119)) : (((~((min(1, 1094)))))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                {
                    var_18 = (min(var_18, ((64417 % (max((arr_9 [i_0 - 4]), (arr_9 [i_0 - 3])))))));
                    var_19 = (((arr_10 [i_0 - 3] [i_0 - 2]) < (((arr_10 [i_0 - 4] [i_0 - 1]) ? (arr_10 [i_0 - 4] [i_0 + 1]) : (arr_10 [i_0 - 2] [i_0 - 2])))));
                    var_20 = (1 < -342846181);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_17 [i_0] [i_0] [i_0 - 1] [i_0] = ((1 + (~23498)));
                                var_21 = (((((-var_15 ? (!1) : (min(1500855895, 1))))) ? (-10 + -104) : (arr_13 [i_4] [i_0] [i_2] [i_2 - 1] [i_0] [i_0])));
                            }
                        }
                    }
                }
            }
        }
        arr_18 [i_0] [i_0 - 1] &= ((((max(((((((arr_16 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0] [i_0]) + 2147483647)) >> (((arr_9 [i_0]) - 2333433216632562646))))), ((-(arr_2 [i_0 - 1])))))) + (((var_10 / 1) / (min((arr_9 [i_0 - 1]), var_13))))));
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 20;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            {
                var_22 += (min(((((min(var_12, (arr_12 [i_6] [i_6] [i_6] [i_6]))) < (125 + 711089873)))), ((-342846181 ? 1099 : ((-(arr_20 [i_6] [i_5])))))));
                var_23 &= (((!1) & ((((arr_2 [i_5 + 1]) > (arr_5 [i_5] [i_6] [i_5 - 1]))))));
                var_24 *= ((((8795019280384 ^ (arr_4 [i_5 - 1]))) + ((((arr_4 [i_5 - 1]) ? (arr_4 [i_5 + 1]) : (arr_4 [i_5 + 2]))))));
                var_25 &= (((((-(arr_7 [i_5] [i_5 + 2] [i_5])))) < (max(15274734694617738212, (arr_12 [i_6] [i_5 + 2] [i_5] [i_5 - 1])))));
                /* LoopNest 3 */
                for (int i_7 = 1; i_7 < 19;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 19;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 20;i_9 += 1)
                        {
                            {
                                arr_32 [i_9 + 2] [i_8] [i_5] [i_5] [i_5] = ((((1 ? (arr_7 [i_5] [i_5 - 1] [i_5]) : 1))) ? (((arr_7 [i_5] [i_5 + 2] [i_5 - 1]) ? (arr_7 [i_5] [i_5 - 1] [i_5 + 2]) : (arr_7 [i_5 - 1] [i_5 + 2] [i_5 + 2]))) : ((max((arr_7 [i_5 + 1] [i_5 + 1] [i_5]), 1))));
                                arr_33 [i_5] [i_6] [i_7 - 1] [i_7] [i_8] [1] = (arr_19 [i_5 + 1]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_26 = var_6;
    #pragma endscop
}
