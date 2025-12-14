/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148210
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
    var_12 |= ((/* implicit */unsigned long long int) ((unsigned char) (unsigned short)13631));
    var_13 |= ((/* implicit */_Bool) var_4);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        var_14 = ((/* implicit */int) max((var_14), (((((((/* implicit */_Bool) (short)373)) ? (((/* implicit */int) arr_2 [i_0 - 2])) : (((/* implicit */int) (unsigned short)33232)))) | (((((/* implicit */int) arr_2 [i_0 + 1])) / (((/* implicit */int) arr_1 [i_0 + 1] [i_0 - 1]))))))));
        var_15 &= ((/* implicit */long long int) ((((arr_0 [i_0 - 1]) - (arr_0 [i_0 - 1]))) | (((unsigned long long int) arr_2 [i_0 - 1]))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_16 = ((/* implicit */unsigned long long int) var_9);
        arr_5 [i_1] [i_1] = ((/* implicit */_Bool) (-((+(((/* implicit */int) var_5))))));
        var_17 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) 8634178160092143794ULL)) ? ((-2147483647 - 1)) : (1252035236)))));
        /* LoopSeq 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_18 -= ((long long int) arr_6 [i_2]);
            arr_8 [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_1] [i_1])) || (((/* implicit */_Bool) arr_7 [i_1] [i_1]))));
            var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) -2108066277151344150LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) % (-6063317217996514381LL))))));
            arr_9 [i_1] [6LL] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (-2557353963918195703LL) : (((/* implicit */long long int) arr_4 [i_1]))));
        }
        for (long long int i_3 = 0; i_3 < 15; i_3 += 2) 
        {
            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)241)) ? (((/* implicit */unsigned long long int) (+(2483040157U)))) : (((((/* implicit */_Bool) 795918371945016172LL)) ? (5378843610622022297ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)190)))))));
            var_21 = ((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1] [i_3]))) : (((((/* implicit */_Bool) -1LL)) ? (484362516U) : (arr_10 [(_Bool)1] [i_3] [i_3]))));
            var_22 -= ((/* implicit */unsigned long long int) (-((+(-3266805930518100165LL)))));
            var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) (+(((unsigned long long int) (_Bool)1)))))));
            /* LoopSeq 2 */
            for (long long int i_4 = 2; i_4 < 14; i_4 += 1) 
            {
                var_24 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_4 [i_1])) ? (795918371945016172LL) : (-795918371945016172LL))) | (((/* implicit */long long int) ((/* implicit */int) ((arr_6 [i_3]) >= (((/* implicit */long long int) arr_10 [i_1] [i_1] [6ULL]))))))));
                arr_16 [i_1] = ((/* implicit */unsigned int) -1252035241);
            }
            for (unsigned int i_5 = 3; i_5 < 14; i_5 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_6 = 0; i_6 < 15; i_6 += 1) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_7 = 3; i_7 < 14; i_7 += 1) 
                    {
                        arr_25 [i_1] [7ULL] = ((/* implicit */long long int) (unsigned short)39141);
                        arr_26 [i_3] [i_3] [i_3] [4LL] [i_7 - 3] |= ((/* implicit */short) ((((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) var_0)))) ^ (((int) var_1))));
                        var_25 = ((/* implicit */unsigned short) arr_22 [i_1] [i_3] [i_5] [i_5] [i_7] [i_5]);
                        var_26 = ((/* implicit */_Bool) (+(((/* implicit */int) (short)-27734))));
                        arr_27 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_24 [i_7 - 1] [i_1] [(unsigned char)11] [i_7 - 1] [i_7] [i_1] [i_3])) ? (((((/* implicit */int) var_10)) + (((/* implicit */int) var_5)))) : (arr_20 [i_1] [i_1] [i_5 + 1] [i_7 - 3])));
                    }
                    for (signed char i_8 = 4; i_8 < 13; i_8 += 4) 
                    {
                        var_27 = ((((/* implicit */_Bool) ((long long int) 17909381312708872372ULL))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_1] [i_3] [i_5 + 1] [i_5] [i_5] [i_1] [(signed char)8]))) : (arr_10 [i_6] [i_5] [i_1])))) : (arr_17 [i_1] [i_1]));
                        arr_30 [12LL] [i_1] [i_6] [(_Bool)1] [i_1] [i_1] = ((/* implicit */unsigned char) ((short) (unsigned char)210));
                        var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_1] [4U] [i_8 - 3])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2473125732216017976LL)))))) : (-795918371945016176LL))))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned short i_9 = 0; i_9 < 15; i_9 += 4) 
                    {
                        arr_33 [i_1] [6ULL] [i_1] [i_1] [i_9] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)39141)) && (((/* implicit */_Bool) 1249570471))));
                        arr_34 [i_6] [(unsigned short)13] [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) var_6))));
                    }
                    /* LoopSeq 1 */
                    for (long long int i_10 = 0; i_10 < 15; i_10 += 4) 
                    {
                        arr_37 [i_1] [i_3] [i_3] [i_3] = ((/* implicit */int) (-((+(arr_10 [(_Bool)1] [(_Bool)1] [(_Bool)1])))));
                        arr_38 [4ULL] [(short)6] [i_1] = ((/* implicit */unsigned long long int) (signed char)-119);
                        var_29 ^= ((/* implicit */short) arr_21 [i_10] [(_Bool)1] [i_3] [i_10]);
                    }
                    /* LoopSeq 4 */
                    for (long long int i_11 = 3; i_11 < 13; i_11 += 4) 
                    {
                        arr_41 [i_1] [3U] [i_5] [i_6] [i_5] [i_11 + 1] [i_3] = ((((/* implicit */_Bool) (~(arr_0 [i_1])))) ? (((/* implicit */int) ((arr_29 [i_1] [i_3] [i_5] [i_6] [i_6] [(unsigned short)12]) < (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_11] [1LL] [5U])))))) : (((arr_20 [i_1] [i_3] [i_5 - 2] [i_6]) & (((/* implicit */int) arr_40 [i_1] [i_1] [i_1] [i_1] [i_1])))));
                        var_30 += ((/* implicit */long long int) (~(484362516U)));
                    }
                    for (unsigned int i_12 = 0; i_12 < 15; i_12 += 1) 
                    {
                        arr_44 [(short)1] [i_3] [i_5 + 1] [i_6] [i_1] = ((/* implicit */unsigned short) (-(arr_22 [4ULL] [8] [4ULL] [i_6] [i_6] [i_6])));
                        var_31 = ((/* implicit */unsigned short) (-(arr_28 [i_1] [i_5 + 1] [i_5 - 3])));
                        var_32 |= ((/* implicit */short) ((((/* implicit */long long int) -562702765)) == (-795918371945016172LL)));
                        arr_45 [i_1] [i_1] [i_1] [i_1] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_42 [i_1] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)511))))) : ((-(((/* implicit */int) (_Bool)1))))));
                    }
                    for (long long int i_13 = 0; i_13 < 15; i_13 += 1) 
                    {
                        var_33 = ((/* implicit */int) min((var_33), (((/* implicit */int) (+(2557353963918195702LL))))));
                        arr_49 [i_1] [i_6] [i_6] [i_5 - 3] [i_3] [i_1] [i_1] = ((/* implicit */int) 5926903100982412068LL);
                    }
                    for (unsigned long long int i_14 = 0; i_14 < 15; i_14 += 4) 
                    {
                        var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_17 [i_6] [14LL])) ? (arr_20 [(unsigned char)8] [i_5 - 1] [i_5] [i_5 - 1]) : (((/* implicit */int) (_Bool)1))));
                        arr_53 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((unsigned long long int) (_Bool)0));
                    }
                }
                var_35 = ((/* implicit */unsigned short) ((-2147483639) + (((/* implicit */int) (signed char)12))));
            }
        }
        var_36 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)234)) + (((131071) % (arr_48 [14ULL] [6LL])))));
    }
}
