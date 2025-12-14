/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141330
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
    for (int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) ((int) 0U))), (max((((/* implicit */long long int) arr_1 [i_0])), (-6245799586890067074LL))))), (((/* implicit */long long int) arr_0 [i_0]))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_2 = 1; i_2 < 14; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 17; i_3 += 2) 
                {
                    {
                        arr_10 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((arr_6 [i_0] [i_1] [i_1] [i_3]) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)25304)) ? (((/* implicit */int) arr_7 [i_3] [i_2] [6ULL] [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_2 + 2] [i_0])))))));
                        var_14 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_7 [i_2 + 2] [i_2 + 1] [i_2 - 1] [i_2]))));
                        arr_11 [i_1] [i_1] [i_2] [i_2] [i_3] [(short)6] = ((/* implicit */int) (+(6326970411725028236LL)));
                        var_15 = ((/* implicit */int) (unsigned short)20107);
                    }
                } 
            } 
            var_16 |= ((/* implicit */int) ((short) arr_0 [i_1]));
            var_17 = ((/* implicit */signed char) ((unsigned long long int) arr_4 [15U]));
        }
        for (long long int i_4 = 3; i_4 < 15; i_4 += 1) 
        {
            arr_14 [i_0] [i_0] [i_4] = ((unsigned int) var_10);
            arr_15 [i_4] = ((((/* implicit */_Bool) ((short) arr_0 [i_4 - 1]))) ? ((-(((/* implicit */int) var_11)))) : (((/* implicit */int) arr_0 [i_4 - 3])));
        }
        for (short i_5 = 0; i_5 < 17; i_5 += 2) /* same iter space */
        {
            var_18 = ((short) 8LL);
            var_19 = 4294967294U;
        }
        for (short i_6 = 0; i_6 < 17; i_6 += 2) /* same iter space */
        {
            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_19 [i_0] [i_6])))))));
            arr_20 [(signed char)12] [i_0] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((short) arr_8 [i_6] [(short)14] [i_0] [i_0]))) ? (((/* implicit */int) ((((/* implicit */int) (short)27632)) <= (402825020)))) : (-1954659275))), (((/* implicit */int) ((((/* implicit */int) (short)25304)) <= (((/* implicit */int) ((arr_13 [i_0] [i_0] [i_0]) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)-27633)))))))))));
        }
        arr_21 [14] [14] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0]))) > ((-(((((/* implicit */_Bool) 4753183862898403672ULL)) ? (((/* implicit */unsigned long long int) 7184855426626224394LL)) : (17979391757908276821ULL)))))));
        /* LoopSeq 1 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            arr_24 [i_7] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) (unsigned short)4)))))) > (((((/* implicit */_Bool) var_9)) ? (var_13) : (((((/* implicit */_Bool) arr_12 [i_7] [i_7])) ? (var_0) : (1954659267)))))));
            var_21 += ((/* implicit */long long int) arr_8 [i_0] [i_0] [i_0] [(short)0]);
            /* LoopSeq 1 */
            for (long long int i_8 = 0; i_8 < 17; i_8 += 1) 
            {
                var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((((/* implicit */long long int) (-(((/* implicit */int) (short)-26020))))) | (((var_10) / (((/* implicit */long long int) 1148562396)))))) | (((/* implicit */long long int) ((/* implicit */int) ((_Bool) -5533181430465658853LL)))))))));
                var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) (~(max((((/* implicit */unsigned long long int) 357422320)), ((-(11919558154277507759ULL))))))))));
            }
            var_24 += ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) max((((/* implicit */int) (short)-23155)), (var_9)))) ? (((((/* implicit */_Bool) var_9)) ? (402825034) : (var_13))) : ((-(((/* implicit */int) (signed char)-95)))))));
        }
        var_25 = ((/* implicit */int) (unsigned short)10181);
    }
    for (long long int i_9 = 0; i_9 < 12; i_9 += 1) 
    {
        /* LoopNest 3 */
        for (int i_10 = 4; i_10 < 11; i_10 += 1) 
        {
            for (signed char i_11 = 0; i_11 < 12; i_11 += 2) 
            {
                for (int i_12 = 0; i_12 < 12; i_12 += 1) 
                {
                    {
                        var_26 ^= ((/* implicit */long long int) (+(((arr_33 [i_11] [i_10 + 1]) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-95)))))));
                        arr_39 [i_9] [3U] = ((((/* implicit */_Bool) max((3162323096U), (((/* implicit */unsigned int) arr_9 [12ULL] [i_10] [i_11] [i_10]))))) ? (((((arr_27 [i_9] [i_10] [i_12]) >> (((((/* implicit */int) arr_26 [i_9] [i_9])) - (76))))) >> (((var_8) + (1280029542))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) 13012347374358072215ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-27622))) : (13693560210811147944ULL))) >= (max((((/* implicit */unsigned long long int) var_11)), (arr_18 [i_9] [i_9] [i_9]))))))));
                        arr_40 [i_9] [i_10 - 3] [i_9] [i_11] [i_12] [i_12] = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_25 [i_9] [(unsigned short)15] [i_9])) : (((/* implicit */int) (signed char)43)))));
                    }
                } 
            } 
        } 
        arr_41 [i_9] = ((/* implicit */_Bool) ((arr_38 [i_9] [i_9] [i_9] [i_9]) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1012685022)) ? (((/* implicit */int) (signed char)67)) : (((/* implicit */int) (_Bool)1)))))))) : (((int) arr_12 [i_9] [i_9]))));
        var_27 = ((/* implicit */signed char) ((unsigned long long int) (+(((/* implicit */int) (short)19486)))));
    }
    var_28 = ((/* implicit */short) ((long long int) (+(var_9))));
}
