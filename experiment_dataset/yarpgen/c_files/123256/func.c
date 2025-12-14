/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123256
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_17 ^= var_15;
        arr_2 [i_0] = (unsigned short)26332;
        var_18 = ((/* implicit */unsigned int) min((((2199022206976ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))), (((/* implicit */unsigned long long int) (unsigned short)65535))));
        var_19 = ((/* implicit */short) (+(((/* implicit */int) var_16))));
    }
    for (unsigned short i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (long long int i_2 = 1; i_2 < 20; i_2 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_3 = 0; i_3 < 24; i_3 += 1) 
            {
                var_20 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) 2199022206976ULL)))) ? (((/* implicit */int) ((((/* implicit */int) arr_7 [i_1] [i_2] [i_1])) >= (((/* implicit */int) arr_7 [i_1] [i_1] [i_2 + 4]))))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)6692)) && (((/* implicit */_Bool) 2199022206982ULL)))))));
                var_21 = ((/* implicit */unsigned short) ((((15583510393644783412ULL) + (arr_3 [i_1] [(unsigned short)18]))) ^ (arr_5 [i_1])));
                arr_11 [i_1] = ((/* implicit */unsigned char) arr_6 [i_3] [i_1] [i_3]);
            }
            arr_12 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) var_6);
        }
        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 1) 
        {
            arr_15 [i_1] = ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1] [(unsigned short)20] [i_4]))) + (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)20))) : (arr_3 [i_1] [i_4])))));
            var_22 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_8 [i_1] [i_4] [i_1])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_1] [i_4] [i_1])) || (((/* implicit */_Bool) arr_8 [14U] [i_4] [i_1]))))) : (((/* implicit */int) arr_8 [i_1] [i_1] [i_1]))));
        }
        for (unsigned short i_5 = 0; i_5 < 24; i_5 += 1) 
        {
            arr_19 [i_1] = ((/* implicit */long long int) max(((-(18446741874687344644ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)255)) || (((/* implicit */_Bool) 2305842974853955584LL)))))) == (min((18254178991820888527ULL), (((/* implicit */unsigned long long int) (unsigned char)29)))))))));
            var_23 += ((/* implicit */unsigned long long int) ((long long int) (unsigned char)127));
            var_24 = ((/* implicit */unsigned long long int) (+(((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (unsigned short)11506)))) / (((long long int) 3203430610U))))));
            arr_20 [i_1] = ((/* implicit */long long int) 2199022206976ULL);
        }
        /* vectorizable */
        for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 1) 
        {
            var_25 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_11)))))) / (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)18))) : (arr_16 [i_1] [i_6] [8ULL]))));
            /* LoopNest 2 */
            for (long long int i_7 = 0; i_7 < 24; i_7 += 1) 
            {
                for (unsigned long long int i_8 = 1; i_8 < 22; i_8 += 1) 
                {
                    {
                        var_26 *= ((/* implicit */unsigned short) (+(arr_24 [i_8 - 1] [22ULL] [i_8 + 1] [i_8])));
                        arr_28 [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_25 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 + 2]);
                        arr_29 [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_17 [i_1]))));
                    }
                } 
            } 
            var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_13 [i_1] [i_1] [i_6]))))) ? (((/* implicit */int) arr_9 [i_1] [i_1] [i_1])) : (((/* implicit */int) (unsigned short)25210))));
        }
        arr_30 [i_1] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) 11363175620485557724ULL)) || (((/* implicit */_Bool) 18446744073709551602ULL))))) - ((~(((/* implicit */int) (_Bool)0)))))))));
        var_28 += ((/* implicit */unsigned short) (+(((/* implicit */int) ((_Bool) (_Bool)1)))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_9 = 0; i_9 < 14; i_9 += 1) 
    {
        var_29 += ((long long int) arr_8 [i_9] [i_9] [(unsigned char)20]);
        arr_34 [i_9] [i_9] = ((/* implicit */unsigned char) (!((_Bool)1)));
        /* LoopSeq 3 */
        for (long long int i_10 = 1; i_10 < 10; i_10 += 1) 
        {
            arr_38 [i_9] [i_10] [i_10] = ((/* implicit */unsigned short) -626393284502108512LL);
            var_30 = ((/* implicit */short) 0U);
            arr_39 [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (unsigned char)112))));
            arr_40 [i_10] [i_10] = ((/* implicit */signed char) ((-1099183678296931213LL) > (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_9] [i_9] [i_9])) ? (((/* implicit */int) (unsigned short)54056)) : (((/* implicit */int) arr_23 [i_10])))))));
            arr_41 [i_10] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_3 [i_9] [i_9])))) ? (((unsigned long long int) var_2)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 626393284502108487LL)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)189))))))));
        }
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            var_31 = ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_11] [(signed char)12] [i_9])) ? ((-(((/* implicit */int) (unsigned char)224)))) : (((/* implicit */int) arr_21 [(unsigned short)8]))));
            arr_45 [i_9] [i_11] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned char)192))) ? (((/* implicit */unsigned long long int) ((var_0) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)48502)))))) : (((((/* implicit */_Bool) arr_0 [i_9] [13LL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (var_1)))));
        }
        for (unsigned char i_12 = 0; i_12 < 14; i_12 += 1) 
        {
            arr_49 [i_12] = ((/* implicit */unsigned short) arr_43 [i_12]);
            var_32 += ((/* implicit */signed char) (((~(var_13))) & (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (unsigned char)96))))));
        }
        var_33 = ((/* implicit */long long int) (-(13487662759218901343ULL)));
    }
}
