/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17713
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
    var_18 = (~(((/* implicit */int) var_8)));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        var_19 = ((/* implicit */long long int) arr_1 [6LL]);
        var_20 = ((/* implicit */unsigned int) (~(((arr_1 [i_0]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
        arr_2 [i_0] [8ULL] = ((((/* implicit */_Bool) arr_1 [(short)1])) ? (arr_1 [(short)1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))));
        var_21 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) > (7996719451605197656ULL)))) - (((/* implicit */int) arr_0 [i_0]))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        var_22 = ((/* implicit */long long int) var_7);
        arr_6 [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_5 [(short)22]))));
    }
    for (long long int i_2 = 0; i_2 < 10; i_2 += 3) 
    {
        var_23 = ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_2] [i_2])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_4 [i_2] [i_2]))))) : ((+(arr_1 [4U])))));
        var_24 += ((/* implicit */unsigned int) ((((/* implicit */int) var_8)) + (((/* implicit */int) arr_7 [i_2]))));
        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) arr_4 [i_2] [i_2]))));
        /* LoopNest 3 */
        for (unsigned short i_3 = 3; i_3 < 9; i_3 += 4) 
        {
            for (signed char i_4 = 0; i_4 < 10; i_4 += 4) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 2) 
                {
                    {
                        var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 10140751954870636279ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)36696))));
                        arr_15 [i_5] = ((/* implicit */unsigned short) arr_3 [i_5]);
                        var_27 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)232))))) ? (((arr_9 [i_5] [i_3] [i_2]) ? (240884849U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_5 [i_5])))))))));
                        var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_13 [1] [i_3] [i_4] [(unsigned short)5]))))) ? (((/* implicit */int) var_11)) : (((((((((/* implicit */_Bool) (short)-23812)) ? (((/* implicit */int) (signed char)-52)) : (((/* implicit */int) (signed char)-56)))) + (2147483647))) << (((((/* implicit */int) arr_13 [i_2] [i_3 - 3] [i_4] [i_5])) - (248)))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_6 = 3; i_6 < 11; i_6 += 3) 
    {
        var_29 = ((/* implicit */unsigned char) min((((/* implicit */long long int) arr_18 [i_6])), (((((/* implicit */_Bool) arr_16 [8LL])) ? (((/* implicit */long long int) arr_16 [i_6])) : (((((/* implicit */_Bool) arr_16 [7ULL])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_17 [i_6] [i_6])))))));
        var_30 = ((/* implicit */unsigned char) arr_1 [i_6 - 2]);
    }
}
