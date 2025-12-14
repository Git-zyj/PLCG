/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108184
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        arr_2 [8LL] |= ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) arr_1 [(unsigned short)6])) ? (((/* implicit */int) arr_0 [12LL])) : (((/* implicit */int) (unsigned short)4)))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_1 = 4; i_1 < 21; i_1 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            for (short i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) arr_8 [i_1 - 3] [i_1 + 1] [i_1 - 3]))));
                var_14 ^= ((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_2])) - (((/* implicit */int) arr_0 [i_2]))));
                var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_1] [(unsigned short)16] [i_1 + 1])) ? (arr_8 [i_1] [i_1] [i_1 - 1]) : (arr_8 [i_1] [i_1] [i_1 - 1]))))));
                var_16 = ((/* implicit */long long int) (unsigned short)4);
            }
            var_17 = ((unsigned char) ((arr_5 [i_0] [i_0] [i_1]) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4)))));
        }
        for (short i_3 = 4; i_3 < 21; i_3 += 3) /* same iter space */
        {
            /* LoopNest 3 */
            for (short i_4 = 0; i_4 < 22; i_4 += 1) 
            {
                for (short i_5 = 0; i_5 < 22; i_5 += 2) 
                {
                    for (short i_6 = 0; i_6 < 22; i_6 += 4) 
                    {
                        {
                            arr_21 [i_5] [i_5] [i_5] [i_5] [i_5] [i_0] [i_5] = ((/* implicit */unsigned char) (unsigned short)65519);
                            var_18 = ((/* implicit */short) ((unsigned short) arr_19 [i_0] [i_3] [i_3] [i_4] [i_5] [i_6]));
                            var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_18 [i_0] [19U] [i_4] [(unsigned short)18] [i_6])) ? (((((/* implicit */unsigned long long int) (+(-6602149666040067266LL)))) * (((0ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0] [i_3] [i_5] [(signed char)17] [i_6]))))))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) max((((/* implicit */unsigned short) arr_18 [i_5] [i_5] [i_5] [i_5] [i_5])), ((unsigned short)33329)))), ((-(((/* implicit */int) arr_18 [i_0] [i_3] [i_4] [i_0] [(short)13]))))))))))));
                        }
                    } 
                } 
            } 
            var_20 = ((/* implicit */unsigned short) min((((arr_5 [i_3 - 1] [i_3] [i_3 + 1]) >> (((0ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0]))))))), ((((~(18446744073709551615ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [(_Bool)1] [i_3 - 2] [i_0])))))));
        }
        for (short i_7 = 4; i_7 < 21; i_7 += 3) /* same iter space */
        {
            arr_24 [i_0] = ((/* implicit */short) ((((((/* implicit */int) arr_19 [i_7 - 2] [i_7] [i_7 + 1] [i_7] [0LL] [(_Bool)1])) + (((/* implicit */int) arr_7 [i_7 + 1] [i_7 + 1] [i_7] [i_0])))) + ((+(((/* implicit */int) arr_19 [i_7 - 1] [i_7] [i_7 + 1] [i_7] [i_7] [i_7]))))));
            arr_25 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_12 [i_0] [i_7] [i_7])) & (((/* implicit */int) min((arr_22 [i_0] [i_7 - 1]), (arr_22 [i_0] [i_7 - 2]))))));
            /* LoopNest 2 */
            for (unsigned short i_8 = 2; i_8 < 20; i_8 += 1) 
            {
                for (unsigned long long int i_9 = 2; i_9 < 20; i_9 += 3) 
                {
                    {
                        /* LoopSeq 4 */
                        for (unsigned char i_10 = 0; i_10 < 22; i_10 += 4) 
                        {
                            var_21 = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) 434218174U)) != (18446744073709551615ULL))))));
                            var_22 = ((/* implicit */unsigned int) 2043173597);
                            var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) (unsigned short)55271))));
                        }
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            arr_38 [i_0] = ((/* implicit */unsigned int) ((_Bool) (unsigned short)65355));
                            var_24 = ((/* implicit */unsigned char) arr_31 [(unsigned short)0] [i_7] [i_8]);
                            arr_39 [0LL] |= ((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) arr_32 [i_7 - 2])))));
                        }
                        for (short i_12 = 0; i_12 < 22; i_12 += 3) 
                        {
                            arr_42 [i_0] [i_12] [18LL] [i_8] [i_8] [i_7] [i_0] = ((/* implicit */short) max((min(((~(2784861941U))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_30 [(unsigned short)13] [i_7] [i_0])) / (((/* implicit */int) arr_19 [i_0] [i_0] [i_7] [i_8] [i_9] [i_12]))))))), (((/* implicit */unsigned int) ((((((/* implicit */int) arr_6 [(_Bool)1] [i_7] [i_8])) * (((/* implicit */int) arr_31 [i_0] [i_7] [i_8])))) != (((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_0] [i_7] [i_0] [i_9])) || (((/* implicit */_Bool) arr_5 [i_12] [i_8] [i_7]))))))))));
                            var_25 = max(((unsigned short)55253), ((unsigned short)4));
                            arr_43 [i_12] [i_0] [i_8] [i_0] [(_Bool)1] = min(((~(arr_5 [i_7 + 1] [i_8 - 1] [i_9 - 2]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) && (((/* implicit */_Bool) arr_5 [i_7 + 1] [i_8 + 2] [i_9 + 1]))))));
                            var_26 += ((/* implicit */signed char) (~(((/* implicit */int) ((((((/* implicit */_Bool) arr_30 [i_7] [i_8] [(_Bool)1])) || (((/* implicit */_Bool) arr_15 [16] [i_7] [i_8] [18ULL])))) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_35 [i_7] [i_9] [i_12])), (arr_40 [i_0] [(short)16] [i_8] [i_8] [i_9] [i_12])))))))));
                            var_27 = ((/* implicit */int) ((((/* implicit */_Bool) (short)-22267)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)43573))) : (511ULL)));
                        }
                        for (long long int i_13 = 0; i_13 < 22; i_13 += 3) 
                        {
                            var_28 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((int) (unsigned short)65530))) ? (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_30 [i_0] [i_9] [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 1426296174846072241ULL)))))), (((/* implicit */unsigned long long int) ((int) (unsigned short)49152)))));
                            var_29 += ((/* implicit */long long int) arr_7 [i_7] [i_8] [i_9] [(unsigned char)18]);
                        }
                        var_30 = ((/* implicit */long long int) (-(((/* implicit */int) arr_26 [i_0] [i_7 - 1]))));
                    }
                } 
            } 
            var_31 = ((/* implicit */signed char) ((((/* implicit */int) arr_37 [i_0] [i_7] [i_7 + 1] [i_7])) == (((((/* implicit */int) arr_37 [i_0] [i_7] [i_7 + 1] [i_7])) % (((/* implicit */int) arr_37 [i_0] [(_Bool)1] [i_7 - 4] [i_7]))))));
        }
        arr_48 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (((arr_5 [i_0] [i_0] [(short)0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [4LL] [i_0] [i_0] [i_0])))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)1434)) == (((/* implicit */int) min((arr_18 [i_0] [(unsigned short)8] [i_0] [i_0] [i_0]), (arr_18 [i_0] [i_0] [i_0] [i_0] [i_0]))))))))));
    }
    var_32 = ((/* implicit */unsigned char) var_2);
    var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((unsigned short)65531), (((/* implicit */unsigned short) (_Bool)1))))) ? (min((((/* implicit */long long int) (unsigned char)60)), (var_10))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_8))))))))) ? (((/* implicit */long long int) ((var_5) & (((((/* implicit */int) var_2)) >> (((var_8) + (6160732582910021469LL)))))))) : (var_11)));
}
