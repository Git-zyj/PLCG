/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112851
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
    var_14 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */int) (unsigned short)4095)) : (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) ((unsigned long long int) var_11))) ? (var_13) : (((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */int) (unsigned short)9502)) : (((/* implicit */int) (_Bool)1)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) var_9);
        var_15 += ((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) arr_1 [i_0 + 2])) : (((/* implicit */int) (_Bool)1))));
    }
    for (unsigned char i_1 = 3; i_1 < 14; i_1 += 2) 
    {
        var_16 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (unsigned short)33730)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1 + 3] [i_1 + 4]))) : (var_9)))));
        var_17 = ((/* implicit */unsigned short) var_13);
        /* LoopSeq 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_18 = arr_4 [i_1] [i_2];
            arr_8 [i_1] [i_1 - 3] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1 + 2] [i_1 - 2])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (0ULL))))));
            /* LoopSeq 4 */
            for (unsigned char i_3 = 0; i_3 < 18; i_3 += 2) /* same iter space */
            {
                arr_11 [i_1] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 0ULL)) || (((/* implicit */_Bool) arr_7 [i_1] [i_1])))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))));
                var_19 = ((/* implicit */unsigned short) (+((+(((/* implicit */int) (unsigned short)31754))))));
            }
            for (unsigned char i_4 = 0; i_4 < 18; i_4 += 2) /* same iter space */
            {
                arr_14 [i_1] [i_1] [i_4] = ((/* implicit */unsigned short) var_1);
                arr_15 [i_1] [i_1] [i_1] [i_2] = ((/* implicit */_Bool) (unsigned short)24267);
                var_20 = ((/* implicit */unsigned char) min((var_20), ((unsigned char)255)));
                arr_16 [i_1] [i_2] [i_1] = ((/* implicit */_Bool) var_0);
            }
            for (unsigned char i_5 = 2; i_5 < 17; i_5 += 4) 
            {
                var_21 *= ((/* implicit */_Bool) (+(((((((/* implicit */_Bool) (unsigned short)32752)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)33730)))))));
                arr_21 [i_1] = ((/* implicit */_Bool) arr_9 [i_1] [i_2] [i_1]);
            }
            /* vectorizable */
            for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 2) 
            {
                arr_26 [i_2] [i_2] [i_6] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_1] [(unsigned char)0] [i_6])) ? (((/* implicit */int) arr_6 [i_1 + 2] [i_2] [i_6])) : (((((/* implicit */_Bool) (unsigned char)227)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_1))))));
                arr_27 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_1] [i_1])) ? (arr_13 [i_1] [i_1] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_1] [i_2])))))) ? (((((/* implicit */_Bool) arr_10 [i_1] [4ULL] [i_1] [i_6])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_12)))) : (((((/* implicit */_Bool) arr_25 [i_1] [i_1] [i_6] [i_2])) ? (((/* implicit */int) arr_19 [i_6] [(unsigned short)15])) : (((/* implicit */int) arr_10 [i_1] [i_2] [i_6] [i_1]))))));
                arr_28 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) arr_19 [i_1] [i_2]);
                var_22 ^= ((((((/* implicit */int) (unsigned short)65535)) & (((/* implicit */int) (unsigned short)58979)))) < (((/* implicit */int) arr_18 [i_6] [i_6] [i_6] [i_1])));
            }
        }
        for (unsigned char i_7 = 0; i_7 < 18; i_7 += 4) 
        {
            arr_33 [i_1] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)0)) << (((/* implicit */int) (_Bool)0))));
            arr_34 [i_1] = ((/* implicit */unsigned char) min((max((((((/* implicit */int) arr_10 [i_1 + 4] [i_1 - 3] [i_1 + 4] [i_7])) << (((((/* implicit */int) (unsigned char)133)) - (120))))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_29 [i_1])) : (((/* implicit */int) var_8)))))), (((/* implicit */int) var_0))));
            arr_35 [i_1] [i_1] [i_7] = 18446744073709551615ULL;
            var_23 = (unsigned short)65535;
        }
        var_24 = ((/* implicit */unsigned short) var_4);
        arr_36 [i_1] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) + (((/* implicit */int) arr_4 [i_1] [i_1 - 2]))))) ? (((/* implicit */int) (unsigned char)82)) : (((/* implicit */int) (unsigned short)31806))))) & (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_23 [i_1] [i_1] [i_1] [(unsigned short)0])))) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)4389))))))))));
    }
    var_25 = ((/* implicit */unsigned short) var_9);
    var_26 = ((/* implicit */_Bool) (+(((/* implicit */int) var_7))));
}
