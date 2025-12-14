/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105554
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_14 = ((/* implicit */int) var_6);
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) var_10))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                for (int i_3 = 2; i_3 < 11; i_3 += 1) 
                {
                    {
                        var_15 = ((/* implicit */unsigned short) ((long long int) var_1));
                        var_16 = ((/* implicit */signed char) ((unsigned long long int) max((((((/* implicit */_Bool) (signed char)117)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (0LL))), (((/* implicit */long long int) ((int) var_6))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 1; i_5 < 10; i_5 += 3) 
        {
            for (int i_6 = 0; i_6 < 11; i_6 += 3) 
            {
                {
                    var_17 = ((/* implicit */unsigned short) (-((-(((/* implicit */int) var_4))))));
                    var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_5 - 1])) ? (arr_10 [i_5 + 1]) : (arr_10 [i_5 - 1]))))));
                    /* LoopNest 2 */
                    for (short i_7 = 0; i_7 < 11; i_7 += 1) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 3) 
                        {
                            {
                                arr_22 [i_5] [i_5] [i_6] [i_6] [i_4] |= ((/* implicit */short) var_1);
                                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_5 + 1] [i_5])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_15 [i_5 + 1] [i_4]))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_20 = ((/* implicit */short) ((int) var_4));
    }
    for (short i_9 = 0; i_9 < 10; i_9 += 4) 
    {
        var_21 = (-(max((((/* implicit */unsigned int) var_8)), ((-(arr_16 [i_9] [i_9] [i_9]))))));
        var_22 = var_2;
        arr_25 [i_9] = ((/* implicit */int) ((short) max((((((/* implicit */int) var_2)) % (arr_9 [i_9]))), ((-(((/* implicit */int) var_8)))))));
    }
    /* vectorizable */
    for (unsigned int i_10 = 0; i_10 < 15; i_10 += 3) 
    {
        arr_28 [i_10] = ((/* implicit */int) var_1);
        var_23 = ((/* implicit */short) (signed char)127);
        arr_29 [i_10] [i_10] = ((/* implicit */long long int) (+(((unsigned long long int) arr_27 [5LL] [i_10]))));
    }
    /* LoopSeq 2 */
    for (unsigned int i_11 = 0; i_11 < 24; i_11 += 3) 
    {
        var_24 = ((/* implicit */unsigned long long int) max((var_24), (var_6)));
        var_25 = ((/* implicit */unsigned long long int) max((((unsigned short) var_13)), (((/* implicit */unsigned short) arr_30 [i_11]))));
        /* LoopNest 2 */
        for (long long int i_12 = 0; i_12 < 24; i_12 += 4) 
        {
            for (unsigned long long int i_13 = 0; i_13 < 24; i_13 += 4) 
            {
                {
                    var_26 = (~(arr_36 [i_11] [i_12] [i_13]));
                    var_27 = ((/* implicit */short) max((min((max((((/* implicit */unsigned long long int) var_10)), (arr_37 [i_11] [i_12] [i_13]))), (((/* implicit */unsigned long long int) ((var_5) << (((var_0) - (7019962813208873894LL)))))))), (((/* implicit */unsigned long long int) (unsigned char)30))));
                }
            } 
        } 
    }
    for (unsigned int i_14 = 0; i_14 < 12; i_14 += 1) 
    {
        arr_41 [i_14] = ((unsigned short) max((((/* implicit */int) arr_7 [i_14] [7ULL] [11] [i_14] [i_14] [i_14])), (arr_9 [i_14])));
        var_28 *= ((/* implicit */unsigned long long int) (((+(max((((/* implicit */unsigned int) arr_35 [i_14])), (arr_8 [i_14] [(signed char)1] [i_14] [i_14]))))) + (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) var_8)), (var_9))))))))));
        var_29 = ((/* implicit */unsigned int) var_7);
        var_30 &= ((/* implicit */int) (unsigned char)28);
    }
}
