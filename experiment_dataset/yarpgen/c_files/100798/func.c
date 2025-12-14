/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100798
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            /* LoopNest 3 */
            for (short i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                for (signed char i_3 = 0; i_3 < 25; i_3 += 1) 
                {
                    for (unsigned short i_4 = 0; i_4 < 25; i_4 += 1) 
                    {
                        {
                            arr_13 [(unsigned short)13] [i_4] [i_3] [i_2] [i_1] [(unsigned short)1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))) + (arr_3 [i_0] [i_0])))))) ? (0) : ((+(((/* implicit */int) arr_11 [i_0] [i_0] [i_4] [i_3] [i_4]))))));
                            arr_14 [i_2] [i_2] [i_2] [i_2] [i_4] [i_2] = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) (unsigned char)160)) ? (((/* implicit */int) (unsigned short)48512)) : (-154875155))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned char i_5 = 0; i_5 < 25; i_5 += 4) 
            {
                for (unsigned short i_6 = 3; i_6 < 22; i_6 += 3) 
                {
                    {
                        var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) max((max(((~(arr_18 [i_6] [i_5] [i_5] [i_6]))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_8 [i_0] [7] [i_5] [(unsigned char)5]))))))), (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_19 [i_0] [i_1] [i_0] [i_6 + 1])) : (((/* implicit */int) arr_19 [i_0] [i_1] [i_5] [i_6]))))), (arr_18 [2] [i_6] [i_6 + 2] [i_6 + 2]))))))));
                        var_16 = ((/* implicit */unsigned char) max(((+(((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (var_4)))))), (((/* implicit */int) arr_11 [i_6] [i_5] [i_5] [i_1] [(short)13]))));
                        arr_20 [i_0] [i_0] [i_5] [i_6] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */int) (unsigned char)239)) > (((/* implicit */int) arr_19 [i_0] [i_0] [i_6 + 1] [i_5])))))));
                    }
                } 
            } 
            arr_21 [i_0] [i_0] [i_1] = ((/* implicit */short) ((10366139701172980666ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
            arr_22 [i_0] [i_1] = ((/* implicit */_Bool) var_2);
        }
        var_17 = ((/* implicit */unsigned short) ((arr_12 [i_0] [i_0] [21LL] [i_0] [i_0]) ? (((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)104)) ? (((/* implicit */int) (unsigned char)54)) : (((/* implicit */int) (short)13134))))) - (2708387426U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)-123)), (16662447207795032554ULL)))) ? ((((_Bool)1) ? (262144) : (((/* implicit */int) (unsigned char)212)))) : (((/* implicit */int) ((_Bool) arr_8 [i_0] [i_0] [i_0] [5LL]))))))));
        /* LoopSeq 2 */
        for (short i_7 = 1; i_7 < 23; i_7 += 1) 
        {
            var_18 = ((/* implicit */_Bool) arr_6 [i_0] [5ULL] [i_7]);
            var_19 = 128ULL;
        }
        /* vectorizable */
        for (long long int i_8 = 0; i_8 < 25; i_8 += 4) 
        {
            var_20 = ((/* implicit */unsigned long long int) max((var_20), (((arr_23 [i_0] [i_0]) | (arr_23 [i_0] [(unsigned char)6])))));
            arr_27 [i_8] [i_8] [i_0] = (signed char)27;
        }
        var_21 = ((/* implicit */unsigned char) ((((_Bool) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_19 [i_0] [i_0] [(unsigned char)2] [i_0])) ^ (((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_0]))))) : (((((/* implicit */_Bool) (short)14)) ? (((((/* implicit */_Bool) var_0)) ? (arr_7 [(_Bool)1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [(_Bool)1] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)20938))) : (arr_24 [i_0] [i_0]))))))));
    }
    for (unsigned int i_9 = 0; i_9 < 25; i_9 += 2) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned char) arr_19 [i_9] [i_9] [i_9] [15U]);
        var_23 = ((/* implicit */unsigned char) max((var_23), (min((((/* implicit */unsigned char) max((arr_16 [i_9] [i_9] [i_9] [i_9]), (arr_16 [i_9] [(unsigned short)1] [i_9] [i_9])))), ((unsigned char)46)))));
    }
    for (unsigned int i_10 = 0; i_10 < 25; i_10 += 2) /* same iter space */
    {
        arr_34 [13ULL] [i_10] = ((/* implicit */_Bool) 1459168200U);
        var_24 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_33 [i_10])) ? (((/* implicit */int) arr_33 [i_10])) : (((/* implicit */int) arr_33 [i_10])))) * (((/* implicit */int) (short)-32765))));
    }
    var_25 = ((/* implicit */int) min((((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) (signed char)82)) ? (-6718781240270257254LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-17374))))))), (((((/* implicit */_Bool) -4866791568949938211LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) var_8)) ? (9223372036854775806LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
}
