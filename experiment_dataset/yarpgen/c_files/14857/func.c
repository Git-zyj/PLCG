/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14857
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
    for (unsigned long long int i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */int) ((2221047648U) ^ (2221047655U)));
        var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2073919647U)) ? (2659812560U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)12))))))))), (max((arr_1 [i_0 - 2]), (((((arr_1 [i_0]) + (2147483647))) >> (((((/* implicit */int) arr_0 [i_0])) - (69))))))))))));
    }
    /* LoopSeq 2 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_14 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)33702))));
        arr_7 [(unsigned short)8] [i_1] = ((/* implicit */long long int) arr_0 [i_1]);
    }
    for (unsigned char i_2 = 0; i_2 < 12; i_2 += 3) 
    {
        var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((unsigned int) (((+(((/* implicit */int) arr_8 [8LL] [i_2])))) - (((/* implicit */int) ((((/* implicit */int) arr_0 [i_2])) == (((/* implicit */int) (unsigned char)253)))))))))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned char i_3 = 1; i_3 < 9; i_3 += 3) 
        {
            var_16 |= (-(((/* implicit */int) (((_Bool)0) && (((/* implicit */_Bool) (unsigned char)237))))));
            arr_13 [i_2] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_10 [i_2] [i_3] [i_3]))));
            var_17 *= ((/* implicit */_Bool) 0ULL);
        }
        for (short i_4 = 0; i_4 < 12; i_4 += 4) 
        {
            /* LoopSeq 4 */
            for (unsigned int i_5 = 0; i_5 < 12; i_5 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_6 = 0; i_6 < 12; i_6 += 1) 
                {
                    arr_22 [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_6] [i_5]))) - (min((arr_11 [9ULL]), (arr_21 [(unsigned short)9] [(_Bool)1])))))) % (((((/* implicit */_Bool) (+(arr_17 [i_2] [i_5] [i_2])))) ? (arr_16 [i_6] [i_5] [i_2]) : (((arr_12 [i_2]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_5])))))))));
                    var_18 = (((!(((/* implicit */_Bool) arr_16 [i_2] [i_4] [i_6])))) ? ((((!((_Bool)1))) ? (((arr_16 [i_2] [i_4] [i_2]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (short)16343)), (7509398642264023094LL)))))) : (((((/* implicit */_Bool) arr_9 [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_2] [(unsigned short)2])) && (arr_10 [i_2] [i_5] [(unsigned char)9]))))) : (min((arr_20 [i_2] [i_2] [(unsigned short)11] [i_6]), (((/* implicit */unsigned long long int) (_Bool)0)))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_7 = 0; i_7 < 12; i_7 += 1) 
                    {
                        var_19 = ((/* implicit */int) (+(arr_11 [i_7])));
                        var_20 *= ((/* implicit */short) ((((/* implicit */_Bool) ((arr_20 [i_4] [i_5] [(unsigned char)4] [i_7]) % (5075842339527002175ULL)))) ? ((-(7914370386349470132ULL))) : (((/* implicit */unsigned long long int) arr_15 [i_4] [i_4]))));
                    }
                    /* vectorizable */
                    for (unsigned char i_8 = 0; i_8 < 12; i_8 += 4) 
                    {
                        arr_29 [5] [i_4] [i_5] [i_2] [i_5] = (!(((/* implicit */_Bool) (unsigned short)19752)));
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_2] [i_4] [i_5] [3U] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_2] [(unsigned char)1] [i_2]))) : (arr_15 [i_5] [(_Bool)1])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2]))) : (((((/* implicit */_Bool) arr_26 [i_2] [(signed char)1] [i_5] [i_6] [i_2] [i_4] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) (short)29330))) : (arr_28 [i_2] [11ULL] [i_2] [i_2] [i_2] [i_2] [i_2])))));
                        arr_30 [i_2] [i_2] [i_4] [i_4] [6LL] [(_Bool)1] |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 134217727))));
                    }
                }
                var_22 -= ((/* implicit */int) ((((/* implicit */unsigned int) max((-530492909), (((/* implicit */int) (_Bool)1))))) / (((((/* implicit */_Bool) arr_21 [i_2] [i_4])) ? (((/* implicit */unsigned int) (-(arr_1 [i_4])))) : (min((arr_15 [i_5] [i_4]), (((/* implicit */unsigned int) arr_27 [i_5] [i_5] [i_5] [i_4] [i_2]))))))));
                arr_31 [i_2] [i_4] [i_4] [i_4] = ((/* implicit */_Bool) min((max((((/* implicit */unsigned int) arr_8 [i_2] [i_4])), (((((/* implicit */_Bool) 11634310627279353960ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-7423))) : (arr_17 [i_2] [i_2] [i_2]))))), (((/* implicit */unsigned int) min(((((_Bool)1) ? (((/* implicit */int) arr_26 [i_2] [2LL] [i_4] [i_4] [i_5] [(unsigned short)0] [i_5])) : (arr_14 [i_2] [i_2]))), (((/* implicit */int) (!((_Bool)1)))))))));
                var_23 = ((/* implicit */short) min((((/* implicit */unsigned int) 2147483647)), (max((1993569006U), (((/* implicit */unsigned int) (_Bool)1))))));
                var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_27 [(unsigned char)10] [i_4] [i_2] [(short)2] [11U])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_2] [i_2] [i_4])))))) : (min((((/* implicit */unsigned long long int) arr_18 [i_2] [i_2] [i_4])), (arr_16 [9LL] [10U] [i_5]))))), (((((/* implicit */_Bool) (unsigned short)22674)) ? (10499278352092864341ULL) : (((/* implicit */unsigned long long int) 2603583349U)))))))));
            }
            for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
            {
                arr_35 [i_2] [i_4] [i_2] [i_2] = ((/* implicit */long long int) ((_Bool) max((arr_20 [i_2] [0] [i_9 + 1] [i_2]), (((/* implicit */unsigned long long int) arr_18 [i_9 + 1] [i_9 + 1] [i_2])))));
                arr_36 [i_2] [1U] [(_Bool)1] = (~((+(((/* implicit */int) arr_25 [i_2] [i_9 + 1] [11LL])))));
            }
            for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 4) 
            {
                var_25 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_4] [i_2])) ? (((/* implicit */unsigned long long int) 2073919622U)) : (18446744073709551615ULL)))) ? (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)0)), (arr_23 [6U] [(unsigned short)2] [i_10] [i_10] [i_4])))) : ((~(((/* implicit */int) arr_8 [11LL] [(_Bool)1]))))))) ? (((/* implicit */int) ((unsigned char) (~(((/* implicit */int) arr_27 [i_4] [i_4] [i_2] [(unsigned short)4] [i_4])))))) : (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)11)), ((unsigned short)32935))))));
                var_26 = ((/* implicit */unsigned long long int) (~(2301398289U)));
                arr_40 [i_2] [8LL] [i_2] [i_4] = ((/* implicit */short) min((((/* implicit */unsigned long long int) (((~(arr_37 [i_4] [i_2]))) == (((/* implicit */int) arr_34 [0ULL] [i_2]))))), (min((((/* implicit */unsigned long long int) ((int) arr_19 [i_2] [i_2] [i_2]))), (((arr_10 [(signed char)3] [i_4] [(unsigned short)1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_2] [i_4] [i_2] [i_10] [i_2]))) : (arr_19 [i_2] [i_4] [i_2])))))));
            }
            for (short i_11 = 0; i_11 < 12; i_11 += 3) 
            {
                var_27 = ((/* implicit */unsigned short) ((unsigned int) (+(((/* implicit */int) (signed char)7)))));
                var_28 = ((/* implicit */short) (~(7947465721616687274ULL)));
            }
            arr_43 [i_2] = ((/* implicit */unsigned short) arr_38 [i_2] [i_2] [(short)11] [i_4]);
        }
        for (unsigned char i_12 = 0; i_12 < 12; i_12 += 3) 
        {
            arr_48 [i_2] [i_2] = ((/* implicit */short) (((-(-2541044114490567938LL))) * (((/* implicit */long long int) ((min((arr_21 [2] [2]), (((/* implicit */unsigned int) arr_34 [(unsigned short)4] [i_2])))) & (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_2] [i_12] [i_12]))))))));
            var_29 = ((/* implicit */_Bool) (unsigned short)0);
            var_30 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)11)))))))) ? (((((((/* implicit */int) (unsigned short)384)) == (15))) ? (((9079418177277967653ULL) * (13370901734182549441ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_12] [i_12] [(unsigned short)2] [i_12] [8ULL])) ? (((/* implicit */int) arr_0 [(short)3])) : (((/* implicit */int) (unsigned short)36442))))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2905629404U)) || (((/* implicit */_Bool) (signed char)16))))), (min((13697144669862781100ULL), (((/* implicit */unsigned long long int) arr_37 [i_2] [(unsigned char)0]))))))));
            var_31 = ((/* implicit */unsigned long long int) arr_37 [7ULL] [i_2]);
            var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)65535)) ? (13370901734182549433ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)231)))));
        }
        for (int i_13 = 3; i_13 < 11; i_13 += 2) 
        {
            arr_52 [i_2] = ((/* implicit */unsigned short) ((((arr_28 [(short)1] [i_13 - 2] [i_2] [(signed char)8] [i_13] [(unsigned char)10] [i_13]) / (arr_28 [7ULL] [i_13 - 2] [i_13] [10ULL] [(unsigned char)4] [(unsigned char)4] [(short)3]))) / (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_2] [(_Bool)1] [i_13])))));
            var_33 = ((/* implicit */unsigned char) ((((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_20 [i_2] [i_13] [(unsigned short)9] [i_13])) ? (((/* implicit */int) (signed char)111)) : (((/* implicit */int) arr_0 [i_2]))))))) ^ (((long long int) arr_1 [i_13 + 1]))));
        }
        var_34 = ((/* implicit */unsigned int) arr_9 [7]);
    }
}
