/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104784
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
    /* LoopSeq 4 */
    for (unsigned char i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) (_Bool)1))));
        arr_2 [(short)2] |= ((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [i_0]))));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 17; i_1 += 1) 
    {
        var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) (-(((/* implicit */int) (_Bool)1)))))));
        arr_5 [i_1] = ((/* implicit */signed char) (-(((arr_3 [i_1]) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
    }
    for (short i_2 = 0; i_2 < 15; i_2 += 4) 
    {
        var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) ((signed char) ((_Bool) ((unsigned short) arr_6 [i_2] [i_2])))))));
        var_14 ^= ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (arr_7 [i_2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_2])))))) : (var_4)))));
        var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) (~(((/* implicit */int) ((((_Bool) arr_4 [i_2] [i_2])) && ((!(((/* implicit */_Bool) var_10))))))))))));
        var_16 *= ((/* implicit */unsigned int) min((((/* implicit */int) ((unsigned char) (_Bool)0))), (((((((/* implicit */_Bool) arr_6 [i_2] [i_2])) && (((/* implicit */_Bool) (short)-4708)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_2] [i_2]))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_2] [i_2])) && (((/* implicit */_Bool) arr_4 [i_2] [i_2])))))))));
    }
    for (signed char i_3 = 0; i_3 < 25; i_3 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_4 = 3; i_4 < 23; i_4 += 2) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (long long int i_6 = 0; i_6 < 25; i_6 += 4) 
                    {
                        var_17 |= ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) ((((/* implicit */int) arr_15 [i_3] [i_4] [i_5] [i_6])) != (((/* implicit */int) (_Bool)0)))))));
                        var_18 *= ((/* implicit */int) (+(((unsigned long long int) arr_16 [i_4] [i_5]))));
                    }
                    for (unsigned int i_7 = 1; i_7 < 23; i_7 += 3) 
                    {
                        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) max((((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_11 [i_5] [i_7])), (arr_12 [i_3] [i_5])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)122)) ? (arr_9 [i_3]) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) arr_18 [i_3] [i_3] [i_4] [i_5] [i_5] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_3] [i_4] [i_5] [i_7]))) : (arr_12 [i_3] [i_4]))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_14 [i_4 - 3] [i_7 + 1])) * (((/* implicit */int) ((unsigned char) var_7)))))))))));
                        arr_22 [i_3] [i_3] = ((/* implicit */unsigned short) max((var_9), (((/* implicit */short) var_7))));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_20 = ((/* implicit */long long int) ((unsigned long long int) var_6));
                        arr_27 [i_3] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)0)) ? (((((/* implicit */_Bool) arr_11 [i_4 - 2] [i_4 - 3])) ? (((/* implicit */int) arr_11 [i_4 - 2] [i_4 - 3])) : (((/* implicit */int) arr_11 [i_4 - 2] [i_4 - 3])))) : (((/* implicit */int) (_Bool)1))));
                    }
                    var_21 = ((/* implicit */unsigned char) var_7);
                    arr_28 [i_4] [i_5] = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
                    arr_29 [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) max((((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_18 [i_3] [i_4] [i_5] [i_5] [i_5] [i_5])) ? (((/* implicit */int) var_2)) : (var_8)))))), (((((/* implicit */long long int) var_8)) / (arr_13 [i_4] [i_4 + 1] [i_4] [i_4 + 1])))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (unsigned char i_10 = 0; i_10 < 25; i_10 += 3) 
            {
                {
                    var_22 = ((/* implicit */long long int) (signed char)-123);
                    arr_35 [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((arr_19 [i_3] [i_3] [i_3] [i_9] [i_9] [i_10]) - (arr_19 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_3] [i_3] [i_3] [i_3])))))) ? ((~(((/* implicit */int) var_3)))) : ((~(((((/* implicit */int) arr_24 [i_3] [i_3] [i_9] [i_9] [i_9] [i_10])) ^ (((/* implicit */int) (_Bool)1))))))));
                    arr_36 [i_3] [i_9] [i_9] [i_10] = ((/* implicit */long long int) ((_Bool) arr_12 [i_3] [i_3]));
                    var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) arr_8 [i_3] [i_10]))));
                }
            } 
        } 
        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) (-(var_1))))));
    }
    var_25 = ((/* implicit */signed char) (unsigned short)24081);
    var_26 = var_8;
}
