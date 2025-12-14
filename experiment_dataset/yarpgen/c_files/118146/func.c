/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118146
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((~(((/* implicit */int) (signed char)25)))), (-30378828)))) ? (((/* implicit */int) (signed char)25)) : ((~(((/* implicit */int) (unsigned short)61366))))));
            var_18 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (arr_0 [i_0] [i_0]))))));
            var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)49)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)26890))) : (3469525967U)));
            var_20 = ((/* implicit */unsigned short) (signed char)42);
        }
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 18; i_2 += 4) 
        {
            arr_8 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_16);
            var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) max((((/* implicit */unsigned long long int) (unsigned char)52)), (11172053944506923770ULL))))));
            var_22 |= ((/* implicit */long long int) min((((/* implicit */int) arr_1 [i_0] [i_0])), ((+(((/* implicit */int) min(((_Bool)0), (arr_0 [i_2] [i_2]))))))));
        }
        arr_9 [i_0] = max(((unsigned short)34741), (((/* implicit */unsigned short) (unsigned char)110)));
    }
    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 3) 
        {
            arr_16 [(unsigned short)5] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0ULL)) ? (825441349U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_3] [i_4])))));
            var_23 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_3] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)64))) : (var_16)));
            var_24 ^= ((/* implicit */unsigned long long int) (unsigned short)61361);
        }
        for (unsigned int i_5 = 1; i_5 < 15; i_5 += 3) 
        {
            var_25 = ((/* implicit */unsigned short) ((unsigned int) arr_12 [i_5 + 1] [i_5 - 1] [i_5 - 1]));
            var_26 ^= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_5 [i_5 + 1] [i_3])) ? (((unsigned long long int) -1250438876555977255LL)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_3] [i_3])))))));
            var_27 *= ((/* implicit */short) min((-560812795), ((((_Bool)1) ? (((/* implicit */int) arr_18 [i_3] [i_3])) : (((/* implicit */int) (short)-30572))))));
            var_28 += ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) min(((signed char)-113), ((signed char)96)))), (min((var_8), (((/* implicit */unsigned short) var_10)))))))) : (((((/* implicit */_Bool) arr_14 [i_3])) ? (arr_14 [i_5 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3] [i_3])))))));
        }
        arr_19 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_3] [i_3])) ? (min((((/* implicit */long long int) (_Bool)1)), (9223372036854775807LL))) : (((/* implicit */long long int) ((/* implicit */int) ((16059491130607840816ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)224)))))))));
        var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((2986516084U), (((/* implicit */unsigned int) (unsigned short)28177))))) ? ((~((~(((/* implicit */int) arr_18 [i_3] [i_3])))))) : ((~(arr_6 [i_3] [i_3] [i_3]))))))));
        arr_20 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -6125255530297411740LL)), (11331726435124792240ULL)))) ? ((+(((/* implicit */int) arr_1 [i_3] [i_3])))) : (((/* implicit */int) arr_1 [i_3] [i_3]))));
    }
    for (short i_6 = 1; i_6 < 14; i_6 += 3) 
    {
        var_30 = ((/* implicit */short) 1111476064U);
        var_31 += ((/* implicit */unsigned char) max((arr_22 [(short)0]), (max((((/* implicit */unsigned long long int) var_12)), (arr_22 [14ULL])))));
        arr_24 [i_6] = ((/* implicit */_Bool) var_1);
    }
    var_32 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_13)), (((((/* implicit */_Bool) var_11)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 1182620653U))))))));
}
