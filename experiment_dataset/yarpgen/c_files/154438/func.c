/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154438
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_10 = ((/* implicit */short) (unsigned char)12);
        var_11 = ((/* implicit */unsigned long long int) arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        var_12 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)9))) / (4294967278U)));
        var_13 = max((((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (-17LL)))) ? (((/* implicit */int) (unsigned char)94)) : (((/* implicit */int) (unsigned char)199))))), (arr_3 [i_1]));
        var_14 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) arr_2 [6ULL])), (((unsigned long long int) ((((/* implicit */int) (short)23673)) | (((/* implicit */int) arr_2 [i_1])))))));
        /* LoopSeq 4 */
        for (short i_2 = 0; i_2 < 10; i_2 += 3) 
        {
            arr_6 [i_2] [i_1] = ((/* implicit */long long int) (unsigned short)14);
            arr_7 [i_2] = ((/* implicit */unsigned int) (-(((/* implicit */int) (!((_Bool)1))))));
            arr_8 [i_2] [i_2] [i_1] = ((/* implicit */long long int) max((((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2] [i_1] [i_1]))) < (576460752303423487ULL))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) (unsigned char)99))))) : (min((1772294491), (((/* implicit */int) (unsigned short)65526)))))), (((/* implicit */int) min(((!(((/* implicit */_Bool) var_5)))), (((var_5) >= (var_1))))))));
            var_15 = ((/* implicit */unsigned char) min((var_1), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)8)) != ((~(48062124))))))));
        }
        for (signed char i_3 = 0; i_3 < 10; i_3 += 1) 
        {
            var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((arr_5 [i_3]) ? (8168402513498841707ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)-1)) : (var_0))))))) ? ((((+(arr_9 [i_1] [i_3]))) / (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) * (4503599627370495ULL))))) : (((/* implicit */unsigned long long int) (-((+(var_3))))))));
            var_17 = ((/* implicit */int) arr_3 [i_1]);
        }
        /* vectorizable */
        for (short i_4 = 0; i_4 < 10; i_4 += 1) 
        {
            var_18 = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_9 [i_1] [i_4]))));
            var_19 = ((/* implicit */int) (((~(var_9))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (5503288395904941151LL) : (((/* implicit */long long int) var_5)))))));
            /* LoopSeq 1 */
            for (unsigned char i_5 = 0; i_5 < 10; i_5 += 4) 
            {
                arr_18 [i_1] [(_Bool)1] [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)2208)) < (((/* implicit */int) (unsigned short)65522)))))) >= ((+(arr_9 [i_1] [i_5])))));
                /* LoopSeq 2 */
                for (unsigned char i_6 = 0; i_6 < 10; i_6 += 4) 
                {
                    var_20 = ((((/* implicit */_Bool) ((short) arr_20 [i_1] [i_4] [i_4] [i_5] [i_6] [i_6]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_5]))) * (var_5)))) : ((-(18446744073709551615ULL))));
                    var_21 = ((/* implicit */signed char) (((-(((/* implicit */int) (unsigned short)65522)))) * ((~(((/* implicit */int) (signed char)5))))));
                    var_22 = ((/* implicit */short) ((unsigned int) ((-866297013) ^ (((/* implicit */int) (unsigned char)0)))));
                    arr_21 [i_1] [i_6] [i_5] [i_5] = ((/* implicit */unsigned char) ((unsigned short) ((short) (unsigned short)37277)));
                }
                for (long long int i_7 = 0; i_7 < 10; i_7 += 4) 
                {
                    /* LoopSeq 3 */
                    for (short i_8 = 0; i_8 < 10; i_8 += 2) 
                    {
                        arr_26 [i_1] [i_1] [i_1] [i_7] [i_8] [i_5] [i_5] = ((/* implicit */short) ((_Bool) (+(((/* implicit */int) var_6)))));
                        arr_27 [i_1] [i_5] [i_7] = ((/* implicit */unsigned int) (~(((((/* implicit */int) (short)22917)) * (((/* implicit */int) (unsigned short)28258))))));
                        arr_28 [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_7])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_0 [i_8]))));
                        var_23 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)125))) <= (var_3)));
                        var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-7249)) ^ (((/* implicit */int) var_7))))) ? ((~(var_1))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1)))))));
                    }
                    for (int i_9 = 0; i_9 < 10; i_9 += 1) 
                    {
                        var_25 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 35184372088831LL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1)))))));
                        var_26 = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) (signed char)92))) ? (-2353650056887873619LL) : ((~(arr_3 [i_5])))));
                        var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1835079462)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_5] [i_4])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)250))))))));
                        arr_31 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_1] [i_9] [i_5])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)4)) : (((/* implicit */int) arr_13 [i_1] [i_9] [i_5]))))) : (((((/* implicit */_Bool) var_8)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)1)))))));
                    }
                    for (unsigned short i_10 = 0; i_10 < 10; i_10 += 2) 
                    {
                        arr_34 [i_10] [i_7] [i_5] [i_5] [i_4] [i_4] [i_1] = ((/* implicit */_Bool) 5503288395904941151LL);
                        arr_35 [i_1] [i_4] [i_5] [i_7] [i_10] [i_4] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_29 [i_10] [i_7] [i_5] [i_4] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_5] [i_10]))) : (-5503288395904941132LL)))));
                    }
                    arr_36 [i_7] [i_5] [i_4] [i_1] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) 65535ULL)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
                    var_28 = ((/* implicit */unsigned int) (-(((((/* implicit */int) arr_13 [i_1] [i_4] [i_7])) - (((/* implicit */int) var_6))))));
                    var_29 = ((/* implicit */short) ((((/* implicit */int) ((1099511627775ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65515)))))) - (((((/* implicit */_Bool) (signed char)-29)) ? (var_0) : (var_0)))));
                    var_30 = ((((/* implicit */_Bool) arr_13 [i_4] [i_5] [(short)5])) ? (((((/* implicit */_Bool) arr_17 [i_4] [(_Bool)0] [i_7])) ? (var_8) : (var_8))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6)))));
                }
            }
        }
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            arr_39 [i_1] [i_1] [i_11] = max((((((/* implicit */_Bool) arr_37 [i_1] [i_11])) ? (((((/* implicit */int) var_2)) ^ (((/* implicit */int) var_7)))) : (((/* implicit */int) (unsigned short)65513)))), (((((/* implicit */int) ((((/* implicit */int) var_7)) <= (((/* implicit */int) (short)7248))))) / (((/* implicit */int) min(((unsigned short)65528), (((/* implicit */unsigned short) var_7))))))));
            var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 12596201130089811254ULL)) ? (var_5) : (arr_32 [i_1] [i_11] [i_11] [i_1])))) ? (-2963773234596723809LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (unsigned char)99)) : (((/* implicit */int) (short)-22)))))));
            /* LoopSeq 1 */
            for (short i_12 = 0; i_12 < 10; i_12 += 3) 
            {
                var_32 = ((/* implicit */unsigned char) (-(min((arr_9 [i_1] [i_11]), (arr_9 [i_12] [i_1])))));
                var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? ((-(max((var_8), (var_8))))) : (((/* implicit */int) ((unsigned char) (-(16U)))))));
                var_34 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)20))) - (var_4)))) ? (((((/* implicit */unsigned long long int) var_1)) - (var_9))) : (((12512305482036787569ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_1] [i_12] [i_12] [i_11] [i_11] [i_1])))))))) ? (min((arr_12 [i_12]), (((/* implicit */long long int) arr_32 [i_1] [i_1] [i_12] [i_1])))) : (((/* implicit */long long int) ((((995651509387055060ULL) <= (((/* implicit */unsigned long long int) arr_32 [i_12] [i_11] [i_11] [i_1])))) ? (((((/* implicit */_Bool) 16U)) ? (((/* implicit */int) (unsigned short)16896)) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) (unsigned char)29)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6)))))))));
            }
        }
    }
    var_35 = ((/* implicit */short) max((min((((unsigned long long int) (unsigned char)141)), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)255))))))), (((/* implicit */unsigned long long int) min((((var_5) * (((/* implicit */unsigned int) var_8)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)118))))))))));
    var_36 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_7))));
    var_37 = ((/* implicit */short) (unsigned short)61528);
}
