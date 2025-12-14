/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168101
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_14 = arr_5 [i_1] [i_0 + 1] [i_1];
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_2] [i_3] [i_3] = ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) arr_8 [i_0 - 1] [i_1] [i_2])) - (arr_1 [i_1])))) ? (5086764311983190788LL) : (arr_1 [i_3])));
                                arr_13 [i_1] [i_3] [i_1] = ((/* implicit */long long int) 134216704);
                                arr_14 [i_4] [i_3] [i_3] [i_0] = ((unsigned int) ((((/* implicit */int) (signed char)-111)) & (((/* implicit */int) (signed char)-125))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) var_9);
    var_16 |= ((/* implicit */long long int) 2821256156U);
    /* LoopSeq 3 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
    {
        var_17 = ((((((arr_15 [i_5] [i_5]) > (arr_15 [i_5] [i_5]))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_5] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)125))) : (arr_15 [i_5] [i_5])))) : (((long long int) arr_15 [i_5] [i_5])))) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_5]))) >= (((arr_15 [i_5] [i_5]) - (arr_15 [11] [11]))))))));
        arr_17 [i_5] = 1473711151U;
        arr_18 [i_5] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((arr_15 [(signed char)10] [i_5]) >> (((arr_15 [i_5] [i_5]) - (2019289238U)))))) + (((((/* implicit */_Bool) arr_15 [i_5] [i_5])) ? (((/* implicit */unsigned long long int) arr_15 [i_5] [i_5])) : (50154440082519547ULL)))));
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
    {
        var_18 *= ((/* implicit */_Bool) arr_15 [i_6] [i_6]);
        arr_21 [9LL] = ((/* implicit */int) max((arr_15 [i_6] [i_6]), (((/* implicit */unsigned int) arr_19 [i_6]))));
    }
    /* vectorizable */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) arr_22 [i_7]))));
        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 841641748024631380ULL)) ? (((/* implicit */int) arr_19 [(short)3])) : (((/* implicit */int) arr_19 [i_7])))))));
        arr_24 [i_7] = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)10)) & (((/* implicit */int) (unsigned short)65535))));
        var_21 = ((/* implicit */long long int) ((((18396589633627032068ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)118))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_7])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_22 [i_7]))))) : (arr_15 [i_7] [i_7])));
        arr_25 [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_7])) ? (((/* implicit */int) arr_16 [i_7])) : (((/* implicit */int) arr_16 [i_7]))));
    }
}
