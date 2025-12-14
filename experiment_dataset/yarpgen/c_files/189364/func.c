/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189364
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
    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (-2147483647 - 1)))));
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (var_3) : (((/* implicit */unsigned long long int) -2147483645))))) ? (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_3))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (signed char)-2)), (4956801976707643755LL))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (2147483647) : ((-2147483647 - 1))))) ? (max((16915233757271862225ULL), (((/* implicit */unsigned long long int) 2147483647)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))) : (var_3)));
    /* LoopSeq 4 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0])));
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(-926917821)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)255))) : (898559541U)))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 12; i_1 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 3) 
        {
            arr_7 [i_1] |= ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_1] [i_1])) | (-1)))) ? (((((/* implicit */_Bool) -8184149506578309907LL)) ? (((/* implicit */unsigned long long int) -1937668462)) : (arr_1 [i_1]))) : (((/* implicit */unsigned long long int) ((arr_5 [i_2] [i_1]) ? (((/* implicit */int) (signed char)7)) : (2147483623)))));
            var_22 = ((/* implicit */unsigned short) arr_4 [i_1]);
            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2])) ? (-2147483624) : (((/* implicit */int) (signed char)-7))))) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (10ULL) : (((/* implicit */unsigned long long int) 2147483647)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (((/* implicit */int) arr_6 [i_1] [i_2] [8ULL])) : (((/* implicit */int) arr_4 [i_1])))))));
            arr_8 [(signed char)1] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-7))))) ? (((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)237))) : (2413473653U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1] [i_2])))));
        }
        for (long long int i_3 = 0; i_3 < 12; i_3 += 4) 
        {
            var_24 = 18446744073709551615ULL;
            arr_13 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [(unsigned char)8] [(unsigned char)8])) ? (((/* implicit */int) (unsigned short)12420)) : (((/* implicit */int) (signed char)-120))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147483625)) ? (((/* implicit */int) (signed char)2)) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) -8184149506578309894LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1]))) : (arr_1 [i_1])))));
            arr_14 [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_1])) ? (((/* implicit */int) arr_6 [i_3] [i_1] [i_1])) : (((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */unsigned long long int) (~(arr_3 [(unsigned char)11])))) : (0ULL)));
            var_25 = ((((/* implicit */_Bool) (signed char)117)) ? (2723192704U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-87))));
        }
        var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_1] [i_1])) ? (arr_10 [i_1]) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (2413473653U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-7)))))))))));
        arr_15 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-14638)) ? (18015968862516881510ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_5 [(unsigned char)9] [i_1]))));
        var_27 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_6 [i_1] [i_1] [i_1]))));
    }
    /* vectorizable */
    for (long long int i_4 = 0; i_4 < 24; i_4 += 2) 
    {
        var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_17 [i_4])) ? (arr_18 [i_4] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_4])))));
        var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_19 [i_4] [i_4])) ? (arr_19 [i_4] [i_4]) : (arr_19 [i_4] [i_4])));
        var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_19 [i_4] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_4]))) : (arr_19 [i_4] [i_4]))))));
    }
    /* vectorizable */
    for (signed char i_5 = 1; i_5 < 14; i_5 += 3) 
    {
        var_31 -= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) > (((((/* implicit */_Bool) arr_21 [13U])) ? (arr_21 [i_5]) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_5])))))));
        var_32 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_17 [i_5 + 1]))));
        var_33 = ((/* implicit */long long int) (+(2413473645U)));
        var_34 -= ((/* implicit */long long int) arr_18 [i_5] [i_5]);
    }
    var_35 = min((((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (short)-18718)) : (((/* implicit */int) var_8))))) : ((((_Bool)1) ? (759733085U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)17))))))), (((/* implicit */unsigned int) var_10)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_6 = 2; i_6 < 17; i_6 += 1) 
    {
        var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_24 [i_6] [i_6 - 1])))) ? (arr_19 [i_6] [0ULL]) : ((~(arr_18 [i_6 - 1] [i_6 - 1])))));
        arr_26 [i_6] = ((((/* implicit */_Bool) arr_23 [i_6 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_6 + 2]))) : ((~(arr_19 [i_6] [i_6]))));
        var_37 = -3235070158776884057LL;
        arr_27 [i_6] [16U] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)63488)) ? ((-2147483647 - 1)) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_6] [i_6]))) > (0U))))));
    }
    /* vectorizable */
    for (signed char i_7 = 1; i_7 < 21; i_7 += 1) 
    {
        var_38 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_16 [i_7 + 2] [i_7 - 1])) ? ((~(arr_19 [i_7] [i_7]))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)18724)))));
        var_39 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_18 [i_7] [i_7 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_7] [i_7 + 1]))) : (arr_18 [i_7] [i_7 + 2])));
    }
}
