/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153601
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_8)))) >= (((/* implicit */int) arr_0 [i_0]))));
        var_17 = ((((/* implicit */_Bool) 2077989882)) ? (((/* implicit */int) (signed char)79)) : (((/* implicit */int) var_8)));
        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)39064)) * (((((/* implicit */int) var_7)) % (arr_1 [i_0] [i_0]))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        var_19 += ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (0U)))));
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned char) ((((int) var_10)) <= ((+(arr_3 [i_1])))));
        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 2452962594245114907ULL)) && (((/* implicit */_Bool) var_14)))))));
        /* LoopSeq 3 */
        for (long long int i_2 = 2; i_2 < 12; i_2 += 3) 
        {
            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((unsigned int) arr_0 [i_1])) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
            /* LoopNest 2 */
            for (unsigned int i_3 = 0; i_3 < 16; i_3 += 1) 
            {
                for (signed char i_4 = 0; i_4 < 16; i_4 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_5 = 0; i_5 < 16; i_5 += 3) 
                        {
                            var_22 &= ((/* implicit */int) (!(arr_6 [i_2 + 4])));
                            var_23 -= ((signed char) 4294967295U);
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 2) 
                        {
                            var_24 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (signed char)1)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-6281))))) << ((((-(1771295992U))) - (2523671275U)))));
                            var_25 = ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) ^ (((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_1]))))) | (((((/* implicit */_Bool) (unsigned short)20697)) ? (((/* implicit */unsigned long long int) 1668872935)) : (1159403849335094764ULL))));
                        }
                        var_26 = ((/* implicit */unsigned char) (-(4912496969432561516ULL)));
                    }
                } 
            } 
            var_27 = ((/* implicit */int) min((var_27), (((((/* implicit */_Bool) 205133141U)) ? (((/* implicit */int) (unsigned char)241)) : ((+(((/* implicit */int) (short)12670))))))));
        }
        for (long long int i_7 = 0; i_7 < 16; i_7 += 2) /* same iter space */
        {
            var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) (((!(((/* implicit */_Bool) (signed char)58)))) ? ((~(((/* implicit */int) arr_15 [i_7] [10ULL] [i_7] [i_7])))) : (((((/* implicit */int) var_0)) - (((/* implicit */int) (short)32764)))))))));
            var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_7] [i_7] [i_7] [i_1] [i_7] [i_1] [i_7])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_19 [6ULL] [i_1] [i_1] [i_1]))))) ? (((/* implicit */int) ((_Bool) var_13))) : (((/* implicit */int) ((unsigned short) var_4)))));
            var_30 = ((/* implicit */unsigned char) (((+(((/* implicit */int) (_Bool)1)))) & (((/* implicit */int) (!(((/* implicit */_Bool) 17776651099684294506ULL)))))));
        }
        for (long long int i_8 = 0; i_8 < 16; i_8 += 2) /* same iter space */
        {
            var_31 ^= ((/* implicit */int) ((unsigned char) ((((/* implicit */long long int) 3355400133U)) - (arr_4 [i_1] [i_1]))));
            var_32 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)230)) ? (((/* implicit */unsigned long long int) 48697732U)) : (18446744073709551615ULL))))));
            var_33 += ((/* implicit */unsigned long long int) ((short) ((((/* implicit */int) var_1)) | (-401707257))));
            arr_25 [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) 1327679303U)) & (15993781479464436709ULL)));
            var_34 = ((/* implicit */_Bool) min((var_34), (((((/* implicit */int) arr_0 [i_8])) >= (((/* implicit */int) ((signed char) var_13)))))));
        }
    }
    var_35 = ((/* implicit */unsigned short) max((var_35), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((signed char) max((((/* implicit */unsigned int) var_8)), (1151320717U))))), (((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)21))) - (3150457936U)))) - (min((14970730496045212747ULL), (((/* implicit */unsigned long long int) 205133139U)))))))))));
}
