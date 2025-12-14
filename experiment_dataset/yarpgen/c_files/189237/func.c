/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189237
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
    var_11 = ((/* implicit */int) ((((unsigned long long int) max((((/* implicit */short) var_6)), (var_5)))) ^ (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_8))))), (((unsigned long long int) var_8))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 22; i_0 += 1) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_9)))) * (((/* implicit */int) var_5)))))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 21; i_2 += 4) 
            {
                for (unsigned char i_3 = 1; i_3 < 21; i_3 += 1) 
                {
                    {
                        arr_9 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_4);
                        arr_10 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */unsigned int) ((var_4) / (arr_5 [i_0 - 1] [i_2 + 1])));
                        var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_3] [16ULL] [16ULL] [i_0])) > (((/* implicit */int) arr_4 [i_0 - 1] [i_0 - 1] [(unsigned char)12] [i_1])))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_4 = 1; i_4 < 22; i_4 += 1) /* same iter space */
    {
        var_14 *= ((/* implicit */_Bool) ((unsigned long long int) var_10));
        arr_15 [i_4] [i_4] = ((/* implicit */unsigned int) min((((/* implicit */long long int) (unsigned char)251)), ((-9223372036854775807LL - 1LL))));
        arr_16 [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_1 [i_4])) : (((/* implicit */int) var_10)))), (((((/* implicit */_Bool) var_4)) ? (arr_6 [i_4] [i_4] [i_4]) : (var_1)))))) ? (((min((((/* implicit */long long int) var_6)), (var_7))) / (((/* implicit */long long int) arr_6 [i_4 - 1] [i_4] [(signed char)20])))) : (min((((var_4) + (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_4] [i_4]))))), (((/* implicit */long long int) min((((/* implicit */short) arr_12 [i_4] [i_4])), (var_8))))))));
        var_15 = ((/* implicit */unsigned long long int) (+(min((((/* implicit */long long int) var_10)), (var_4)))));
    }
    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
    {
        var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_5] [i_5])) ? (((/* implicit */int) (signed char)-15)) : (((/* implicit */int) ((_Bool) var_7)))))) ? (((/* implicit */long long int) max((((/* implicit */int) var_6)), (max((((/* implicit */int) var_6)), (var_1)))))) : (((((/* implicit */_Bool) arr_17 [i_5])) ? (max((var_7), (((/* implicit */long long int) var_1)))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_2 [i_5 + 1] [8ULL] [i_5])))))))))));
        /* LoopNest 3 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (long long int i_7 = 0; i_7 < 11; i_7 += 2) 
            {
                for (unsigned char i_8 = 0; i_8 < 11; i_8 += 4) 
                {
                    {
                        arr_27 [i_5] [i_5 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((((/* implicit */long long int) arr_6 [i_5 + 1] [i_6] [i_6])) < (arr_0 [i_5] [i_5 + 1])))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_23 [i_5] [i_7] [i_5]))))) > (((unsigned int) var_0)))))));
                        var_17 -= ((/* implicit */unsigned long long int) ((long long int) (unsigned char)229));
                        arr_28 [i_5 + 1] [i_6] [i_6] [i_6] [i_8] = ((/* implicit */unsigned long long int) var_10);
                    }
                } 
            } 
        } 
        arr_29 [i_5] = ((/* implicit */unsigned int) ((arr_24 [9U] [i_5 + 1] [i_5]) * (((/* implicit */long long int) ((/* implicit */int) ((((unsigned long long int) arr_1 [i_5])) <= (((((/* implicit */_Bool) var_0)) ? (arr_26 [i_5] [i_5] [(short)9] [i_5] [i_5] [i_5]) : (arr_18 [i_5] [i_5])))))))));
    }
    var_18 = ((/* implicit */unsigned int) ((unsigned long long int) ((long long int) ((((/* implicit */int) var_6)) - (var_1)))));
}
