/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142580
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
    for (short i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        var_20 = ((/* implicit */short) max((var_20), (((short) max((arr_1 [i_0 - 1] [i_0 - 1]), (((/* implicit */int) var_11)))))));
        arr_2 [8ULL] &= max((((((/* implicit */_Bool) (signed char)126)) ? (((((/* implicit */_Bool) (short)-28067)) ? (((/* implicit */int) (short)28075)) : (((/* implicit */int) (unsigned char)55)))) : (max((-712787898), (((/* implicit */int) (_Bool)1)))))), ((+(((/* implicit */int) ((short) (short)31744))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 2; i_1 < 8; i_1 += 2) 
    {
        var_21 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (short)-17397)))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_2)))) : (arr_1 [i_1 + 2] [i_1 + 3])));
        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) (~(arr_0 [i_1 - 2]))))));
        /* LoopSeq 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_8 [i_2] = ((/* implicit */int) ((short) var_7));
            /* LoopSeq 1 */
            for (short i_3 = 0; i_3 < 11; i_3 += 2) 
            {
                var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 14985463535770448892ULL)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                /* LoopSeq 1 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    arr_15 [i_2] [i_2] [i_2] [7LL] [i_2] = ((/* implicit */short) ((arr_13 [(short)8] [10U] [i_1 + 1] [i_1 + 2] [9U] [i_4]) ? (((((/* implicit */_Bool) arr_10 [i_1 + 2] [i_1 + 2] [i_1] [i_1 + 1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_3 [i_4])))) : (((((/* implicit */_Bool) arr_14 [i_1] [i_2] [i_2] [i_4])) ? (((/* implicit */int) arr_9 [i_1] [(short)2] [i_1] [i_1])) : (((/* implicit */int) arr_6 [i_3] [i_4]))))));
                    arr_16 [i_2] = ((/* implicit */short) ((unsigned char) ((unsigned char) arr_4 [(unsigned short)8] [(unsigned short)8])));
                    var_24 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_1 + 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1 - 1]))))) : ((-(((/* implicit */int) var_1))))));
                    var_25 *= ((/* implicit */short) arr_14 [i_1] [i_1] [i_3] [i_1]);
                    arr_17 [i_2] [i_2] = ((/* implicit */long long int) ((short) ((((/* implicit */long long int) ((/* implicit */int) (short)-17400))) / (-2719553490712718490LL))));
                }
            }
        }
        for (short i_5 = 0; i_5 < 11; i_5 += 1) 
        {
            arr_20 [(signed char)7] [i_5] [(signed char)7] = (-(((/* implicit */int) arr_3 [i_1 + 1])));
            arr_21 [i_5] [i_5] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_3 [3U]))))));
            var_26 = ((arr_18 [i_1 - 1] [i_1 + 1]) ? (((/* implicit */int) arr_18 [i_1 - 1] [i_1 + 1])) : (((/* implicit */int) arr_18 [i_1 + 3] [i_1 - 1])));
            /* LoopSeq 2 */
            for (long long int i_6 = 0; i_6 < 11; i_6 += 3) 
            {
                var_27 = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))));
                var_28 ^= ((/* implicit */unsigned int) var_14);
                /* LoopSeq 1 */
                for (unsigned int i_7 = 0; i_7 < 11; i_7 += 2) 
                {
                    var_29 = ((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)1) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)43550)))))) ? (((/* implicit */int) arr_13 [i_1] [(unsigned char)6] [i_6] [i_1] [(_Bool)1] [i_6])) : (((/* implicit */int) ((short) var_10)))));
                    arr_26 [i_5] [i_5] [i_6] [i_7] [i_1] [i_7] = ((unsigned int) arr_14 [i_1 + 2] [i_1 + 3] [i_5] [i_7]);
                }
                arr_27 [i_5] = var_2;
            }
            for (short i_8 = 0; i_8 < 11; i_8 += 3) 
            {
                var_30 &= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_0)) ? (arr_0 [(signed char)0]) : (arr_1 [i_1] [i_5])))));
                var_31 *= ((/* implicit */unsigned int) (~((+(0)))));
            }
            var_32 = ((/* implicit */unsigned short) ((unsigned int) (+(((/* implicit */int) arr_6 [i_1] [i_5])))));
        }
        var_33 = ((/* implicit */unsigned int) arr_11 [i_1] [(short)5] [i_1]);
    }
    /* LoopNest 2 */
    for (int i_9 = 1; i_9 < 21; i_9 += 3) 
    {
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            {
                arr_38 [i_9 + 2] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_9])) ? (arr_32 [i_9]) : (arr_32 [i_9])))) ? ((~(((/* implicit */int) arr_31 [i_9 - 1])))) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_33 [i_9 + 2] [i_9])) ? (((/* implicit */unsigned long long int) arr_35 [i_9] [i_9] [i_10])) : (arr_36 [i_9]))) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_9 + 1]))))))));
                var_34 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (short)-17381)))));
                var_35 = ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) max((min((((/* implicit */unsigned int) (short)-1)), (4294967295U))), (((/* implicit */unsigned int) var_4))))) : (((((/* implicit */_Bool) 1162938447)) ? (((/* implicit */unsigned long long int) -5867327307671429633LL)) : (8323821328679942134ULL))));
                arr_39 [(_Bool)1] [i_9] [(signed char)8] = ((/* implicit */short) max(((~(((/* implicit */int) arr_33 [i_9] [i_9])))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((unsigned short) var_0))) : ((-(((/* implicit */int) (unsigned short)2573))))))));
                var_36 *= ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) var_5)) ? (arr_32 [(_Bool)1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (arr_37 [4LL]) : (((/* implicit */int) arr_34 [i_9]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((arr_31 [i_9]) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [(signed char)0] [(unsigned char)6])))))))) : (((((/* implicit */_Bool) ((signed char) (unsigned short)59515))) ? (((((/* implicit */_Bool) var_18)) ? (arr_32 [4LL]) : (arr_32 [12]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_33 [i_10] [(short)22]), (((/* implicit */short) var_8))))))))));
            }
        } 
    } 
    var_37 = ((unsigned int) max((((var_10) ? (var_17) : (((/* implicit */int) var_11)))), (((var_8) ? (var_14) : (var_5)))));
}
