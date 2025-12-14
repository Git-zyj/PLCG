/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109094
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
    var_16 = ((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned char) ((((/* implicit */unsigned int) var_4)) > (var_15)))), (var_6))), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_14)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))));
    var_17 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) var_4)) : (558871825U)))) ? (((/* implicit */int) ((((/* implicit */unsigned int) var_4)) < (var_3)))) : (((/* implicit */int) ((var_3) < (((/* implicit */unsigned int) var_5)))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            arr_7 [i_0] [i_0] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-17))))) : (((((/* implicit */_Bool) (signed char)-106)) ? (((/* implicit */int) (unsigned short)50375)) : (((/* implicit */int) arr_0 [(unsigned short)5]))))))));
            var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_0])) : (arr_2 [i_0])))))) ? (((((/* implicit */_Bool) -6571860059523842022LL)) ? (3736095471U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-17))))) : (((/* implicit */unsigned int) -1830710880))));
        }
        for (short i_2 = 0; i_2 < 23; i_2 += 1) 
        {
            var_19 = ((/* implicit */unsigned char) ((((((140737479966720ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))))) < (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2]))) : (var_11))))) ? ((+(((((/* implicit */_Bool) 0U)) ? (4294967295U) : (arr_9 [i_0]))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_7)))))));
            /* LoopSeq 1 */
            for (long long int i_3 = 2; i_3 < 21; i_3 += 2) 
            {
                arr_13 [i_0] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_0 + 1] [i_0])) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) arr_2 [i_0]))) + (((((/* implicit */_Bool) -7281391619227237398LL)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (short)15236)))))))));
                arr_14 [i_0] [i_2] [i_2] [i_3] = (+(((((/* implicit */_Bool) (-(arr_4 [i_0] [15])))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65535)) && (((/* implicit */_Bool) arr_4 [i_0] [i_0]))))) : (((/* implicit */int) var_8)))));
                var_20 = ((((((/* implicit */unsigned long long int) ((/* implicit */int) max(((signed char)99), ((signed char)-1))))) | (((140737479966720ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-100))))))) | (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-12)) & (((/* implicit */int) (signed char)0))))));
            }
        }
        for (unsigned long long int i_4 = 1; i_4 < 21; i_4 += 2) 
        {
            arr_18 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) var_7)) | (((/* implicit */int) (short)11634))));
            var_21 = ((/* implicit */int) arr_9 [i_0]);
        }
        arr_19 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((-(1602055067U))), (arr_5 [i_0] [i_0] [i_0])))) ? (((var_11) >> (((((((/* implicit */_Bool) arr_17 [i_0 + 1] [i_0])) ? (18446744073709551615ULL) : (18446603336229584895ULL))) - (18446744073709551613ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0 + 1] [i_0])))));
        arr_20 [i_0] = ((/* implicit */_Bool) min((((((arr_2 [i_0]) > (((/* implicit */unsigned long long int) arr_5 [i_0 + 1] [i_0 + 1] [i_0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_16 [i_0 + 1] [(unsigned char)5]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)33266)))))) : (min((((/* implicit */unsigned long long int) arr_16 [i_0 + 1] [i_0])), (var_2))))), (((/* implicit */unsigned long long int) ((long long int) (signed char)-56)))));
    }
}
