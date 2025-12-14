/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143963
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
    var_18 = ((/* implicit */unsigned long long int) max((1976175183783933670LL), (((/* implicit */long long int) var_4))));
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) (short)-27305)) && (((/* implicit */_Bool) (unsigned char)136))));
    /* LoopSeq 2 */
    for (long long int i_0 = 3; i_0 < 17; i_0 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_0 [i_0])))) || (arr_1 [i_0 + 1])));
        /* LoopSeq 3 */
        for (int i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((min((((/* implicit */long long int) (short)-27305)), (-8278850507520566758LL))) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)255))))))));
            arr_4 [i_0 - 3] [4] = ((((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) (+(((/* implicit */int) var_3))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))) : (max((((/* implicit */unsigned int) (short)-27303)), (min((var_0), (((/* implicit */unsigned int) arr_2 [i_0])))))));
            var_22 += ((min((arr_3 [i_1] [i_1 + 1] [i_1]), (arr_3 [i_1] [i_1 + 1] [i_0]))) ? (((((/* implicit */_Bool) min((((/* implicit */long long int) var_3)), (140737471578112LL)))) ? (((((/* implicit */_Bool) 3221225472U)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (short)-27303)))) : (((/* implicit */int) arr_3 [i_1 - 1] [i_0 + 2] [i_0])))) : (((/* implicit */int) (unsigned char)131)));
        }
        /* vectorizable */
        for (short i_2 = 2; i_2 < 18; i_2 += 1) /* same iter space */
        {
            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(8278850507520566758LL)))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_2 [i_0 - 2]))));
            var_24 |= ((/* implicit */long long int) arr_5 [i_2 - 2] [i_0] [i_0 - 1]);
            /* LoopNest 3 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (unsigned short i_4 = 2; i_4 < 18; i_4 += 1) 
                {
                    for (short i_5 = 1; i_5 < 18; i_5 += 3) 
                    {
                        {
                            var_25 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_5 - 1])) ? (((((/* implicit */_Bool) arr_6 [(unsigned char)16] [i_5])) ? (arr_10 [i_5] [(unsigned short)18] [i_3] [i_2]) : (((/* implicit */int) (unsigned char)131)))) : (((arr_1 [3LL]) ? (((/* implicit */int) arr_5 [i_4] [i_4] [i_4])) : (arr_10 [i_0] [i_2] [i_3] [i_0])))));
                            var_26 ^= ((/* implicit */unsigned long long int) 4294967295U);
                            arr_16 [i_0] [i_2] [i_0] [(unsigned char)10] [i_5 + 1] [i_5 + 1] = ((/* implicit */unsigned int) arr_13 [i_2] [i_2]);
                        }
                    } 
                } 
            } 
        }
        for (short i_6 = 2; i_6 < 18; i_6 += 1) /* same iter space */
        {
            var_27 -= ((/* implicit */long long int) (((~(((/* implicit */int) var_3)))) + (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-27303)) ? (var_2) : (var_11)))) == ((~(15877382635751422941ULL))))))));
            arr_19 [i_6 + 1] [(signed char)13] = ((/* implicit */long long int) ((((3922294124U) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_6]))))) ? (((((/* implicit */int) (short)7881)) * (((/* implicit */int) (short)-27303)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_18 [(_Bool)1] [6U] [i_0 - 3])) || (((/* implicit */_Bool) arr_11 [i_0] [i_0 + 2] [(_Bool)1] [i_0])))))));
            var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_15 [(short)8] [i_6] [i_0 - 3] [i_0] [18ULL])))) || (((/* implicit */_Bool) arr_6 [10U] [18U]))));
            arr_20 [(_Bool)1] [i_6] = ((/* implicit */signed char) arr_13 [(_Bool)1] [i_6]);
        }
        arr_21 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_11 [(unsigned char)10] [i_0 + 1] [12] [(unsigned short)16])) ^ (max((((/* implicit */unsigned long long int) max((arr_12 [i_0] [i_0 - 2] [i_0 - 1] [i_0 - 3]), (((/* implicit */unsigned int) var_11))))), (((unsigned long long int) 9848335930709280384ULL))))));
        /* LoopSeq 3 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            var_29 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) -8278850507520566740LL)) ? ((~(((((/* implicit */_Bool) var_11)) ? (arr_14 [i_7] [i_7] [i_0] [i_7] [i_0] [i_0] [i_0]) : (2211497381U))))) : (((/* implicit */unsigned int) (+(((((/* implicit */int) var_1)) / (var_11))))))));
            arr_24 [i_7] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((arr_10 [9LL] [i_7] [12] [i_7]) | (((/* implicit */int) var_10))))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (~(((/* implicit */int) var_13))))), (min((arr_8 [i_0] [i_7] [i_0] [9]), (((/* implicit */long long int) var_3))))))) : (((((/* implicit */_Bool) ((arr_22 [i_0 + 2] [i_7]) / (((/* implicit */long long int) ((/* implicit */int) arr_5 [6U] [6U] [i_7])))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)124))))) : ((+(15877382635751422941ULL)))))));
            var_30 ^= ((/* implicit */unsigned short) (unsigned char)136);
        }
        for (unsigned long long int i_8 = 2; i_8 < 17; i_8 += 1) 
        {
            var_31 *= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_22 [0] [i_8 + 1])) || (((/* implicit */_Bool) (unsigned char)111))))), (((((/* implicit */_Bool) (unsigned char)48)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5188))) : (1462207128U)))));
            arr_29 [i_8] [i_8] = ((/* implicit */unsigned short) var_7);
            /* LoopNest 2 */
            for (unsigned long long int i_9 = 0; i_9 < 19; i_9 += 3) 
            {
                for (signed char i_10 = 0; i_10 < 19; i_10 += 3) 
                {
                    {
                        var_32 -= ((/* implicit */long long int) max(((+(((/* implicit */int) ((((/* implicit */_Bool) arr_25 [(unsigned short)14])) && (((/* implicit */_Bool) 2246814958828649355ULL))))))), (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) arr_0 [i_8 - 1])))))));
                        arr_35 [i_0] [i_8] [i_0] [i_10] = ((/* implicit */unsigned int) (+((-(max((((/* implicit */long long int) (unsigned char)194)), ((-9223372036854775807LL - 1LL))))))));
                    }
                } 
            } 
        }
        for (unsigned char i_11 = 2; i_11 < 18; i_11 += 2) 
        {
            arr_39 [i_0 + 1] = ((/* implicit */short) min((max((max((15877382635751422949ULL), (((/* implicit */unsigned long long int) (short)16383)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -5627936231114170024LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (7374462682455292937LL)))))), (((((/* implicit */_Bool) max((arr_13 [i_11] [i_11 - 2]), (((/* implicit */unsigned short) var_16))))) ? (((unsigned long long int) arr_12 [9] [i_11 - 1] [0U] [i_0])) : (min((((/* implicit */unsigned long long int) var_6)), (2569361437958128667ULL)))))));
            arr_40 [i_0] [i_11 + 1] |= ((/* implicit */signed char) (short)27303);
            /* LoopNest 3 */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                for (unsigned int i_13 = 0; i_13 < 19; i_13 += 1) 
                {
                    for (long long int i_14 = 0; i_14 < 19; i_14 += 1) 
                    {
                        {
                            arr_47 [i_12] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) (unsigned short)42158)) ? (((/* implicit */int) arr_0 [i_14])) : (((/* implicit */int) var_12))))));
                            var_33 = ((/* implicit */long long int) min((var_33), (((((((/* implicit */_Bool) (+(((/* implicit */int) var_14))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) > (3221225472U))))) : (max((((/* implicit */long long int) (unsigned short)7822)), (-2446276091616864745LL))))) / (((/* implicit */long long int) (~(((/* implicit */int) var_8)))))))));
                            var_34 = ((/* implicit */unsigned short) (((-(((/* implicit */int) arr_31 [i_11] [(_Bool)1])))) / (var_11)));
                        }
                    } 
                } 
            } 
        }
    }
    for (long long int i_15 = 3; i_15 < 17; i_15 += 1) /* same iter space */
    {
        var_35 = ((/* implicit */unsigned short) var_14);
        arr_51 [6] &= ((/* implicit */long long int) ((int) max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-27303))) : (arr_30 [i_15] [i_15]))), (((/* implicit */long long int) ((_Bool) (unsigned char)126))))));
        arr_52 [i_15] [i_15] = ((/* implicit */unsigned int) (-((+(((((/* implicit */_Bool) arr_44 [i_15 - 1] [i_15] [i_15 + 1] [i_15] [i_15 + 1] [i_15])) ? (((/* implicit */int) arr_43 [i_15] [i_15] [i_15])) : (((/* implicit */int) var_14))))))));
        var_36 = ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)36060))))) & (((/* implicit */int) (!(((/* implicit */_Bool) 2031616)))))));
    }
    var_37 += ((/* implicit */unsigned long long int) ((var_2) / (((/* implicit */int) ((signed char) ((unsigned long long int) var_9))))));
}
