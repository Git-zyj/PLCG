/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172077
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
    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (~(((/* implicit */int) var_4)))))));
    var_20 = ((/* implicit */signed char) max(((~(min((var_0), (var_0))))), (((/* implicit */int) var_14))));
    var_21 = ((/* implicit */short) (+((+(((/* implicit */int) (signed char)43))))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_22 = ((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */unsigned long long int) min((571816655), (571816637)))) : ((-(4917795424276458556ULL))))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) max((((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_10)))))))), (var_2)));
        var_23 = arr_1 [(signed char)12];
        /* LoopSeq 3 */
        for (unsigned int i_1 = 3; i_1 < 10; i_1 += 1) 
        {
            arr_6 [i_0] [i_1] [i_1] = ((/* implicit */long long int) (signed char)-43);
            var_24 = ((/* implicit */short) var_13);
            /* LoopNest 3 */
            for (signed char i_2 = 1; i_2 < 12; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (unsigned short i_4 = 0; i_4 < 13; i_4 += 2) 
                    {
                        {
                            arr_15 [i_0] = ((/* implicit */unsigned int) max(((~(((/* implicit */int) arr_0 [i_1 + 3])))), (((/* implicit */int) min((((/* implicit */signed char) ((_Bool) var_7))), (arr_11 [i_0] [i_0] [i_2 - 1] [i_0]))))));
                            arr_16 [i_4] [i_0] [i_2 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_7 [i_2 + 1] [i_0] [i_0])) : (var_12)))) ? (((/* implicit */int) ((((/* implicit */int) arr_9 [i_0] [i_3] [i_0])) < (((/* implicit */int) arr_9 [i_0] [i_0] [i_0]))))) : (((/* implicit */int) arr_4 [i_0]))));
                            arr_17 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */unsigned long long int) var_2);
                            var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) (((((_Bool)1) ? (((/* implicit */int) (short)-32659)) : (((/* implicit */int) (unsigned char)64)))) & (((/* implicit */int) arr_12 [i_4] [i_4])))))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (long long int i_5 = 0; i_5 < 13; i_5 += 1) 
        {
            var_26 ^= ((/* implicit */_Bool) ((((/* implicit */int) arr_20 [12ULL])) * (((/* implicit */int) (!(var_4))))));
            var_27 |= (-((-(((/* implicit */int) var_10)))));
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            arr_24 [i_0] [i_6] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (short)32659)) < (max((((/* implicit */int) arr_0 [i_0])), (var_12)))));
            var_28 ^= (((~(1134496679U))) & (((((/* implicit */_Bool) arr_18 [(short)8])) ? (arr_18 [(signed char)8]) : (((/* implicit */unsigned int) ((/* implicit */int) var_16))))));
            var_29 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) (_Bool)0))) ? (((((/* implicit */_Bool) 4917795424276458556ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (((unsigned long long int) (unsigned char)0)))) : (((/* implicit */unsigned long long int) 571816637))));
        }
    }
    for (signed char i_7 = 0; i_7 < 19; i_7 += 2) 
    {
        arr_27 [i_7] = ((/* implicit */short) (~((+(((unsigned int) (signed char)43))))));
        arr_28 [i_7] = ((/* implicit */int) min(((-(arr_25 [i_7]))), (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)43))) - (((((/* implicit */unsigned int) arr_26 [i_7] [i_7])) + (var_17)))))));
        arr_29 [i_7] = ((/* implicit */_Bool) arr_25 [i_7]);
    }
    for (long long int i_8 = 3; i_8 < 7; i_8 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_9 = 0; i_9 < 10; i_9 += 2) 
        {
            arr_36 [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((arr_32 [i_9] [i_8]), (((/* implicit */long long int) var_4))))), (var_1)))) ? (((/* implicit */int) arr_33 [i_8])) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)54669)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_3)))))))));
            var_30 += ((/* implicit */signed char) ((((/* implicit */_Bool) -591988149)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) max((arr_7 [i_9] [i_9] [i_9]), ((signed char)0))))))) : (var_17)));
        }
        /* vectorizable */
        for (unsigned short i_10 = 0; i_10 < 10; i_10 += 1) 
        {
            var_31 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_31 [(short)0] [i_10])) ? (((((/* implicit */_Bool) (signed char)42)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))));
            arr_40 [(unsigned char)4] [i_8 + 1] [(short)4] |= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_31 [(signed char)0] [i_8 + 3]))));
            arr_41 [i_8] = ((/* implicit */unsigned long long int) ((-8503409916507933780LL) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
            var_32 = ((/* implicit */long long int) arr_21 [i_8] [i_8] [i_10]);
        }
        arr_42 [i_8] = ((/* implicit */unsigned int) (~((-(((unsigned long long int) (short)0))))));
    }
}
