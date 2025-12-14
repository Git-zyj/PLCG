/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11566
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
    for (long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_13 = ((/* implicit */short) max((((((/* implicit */_Bool) arr_2 [i_0])) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (140737488355200ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)2))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_2 [i_0]), (((/* implicit */unsigned short) (unsigned char)46)))))))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_1 [i_0])), (arr_0 [i_0]))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) -971649590))))));
    }
    /* LoopSeq 1 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_14 = ((/* implicit */unsigned short) arr_5 [i_1]);
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            /* LoopSeq 2 */
            for (short i_3 = 2; i_3 < 19; i_3 += 4) 
            {
                arr_13 [i_3] = ((/* implicit */int) ((((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))) * ((+(arr_11 [i_1] [i_1] [i_1] [i_2])))));
                var_15 = ((((/* implicit */_Bool) arr_12 [i_3 - 1] [i_3] [i_2] [14LL])) ? (arr_12 [i_3 + 3] [i_2] [17LL] [i_2]) : (arr_12 [i_3 - 2] [i_2] [21] [i_2]));
            }
            for (long long int i_4 = 0; i_4 < 22; i_4 += 3) 
            {
                arr_16 [i_1] [i_4] [(unsigned short)5] [i_4] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_1] [i_2])) ? (7438601154278000361ULL) : (((/* implicit */unsigned long long int) arr_8 [i_2] [i_4]))))) ? (arr_10 [i_4] [i_2]) : (arr_10 [i_1] [i_1]));
                var_16 += ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) (+(-20)))) : (11008142919431551237ULL)));
            }
            var_17 = ((/* implicit */int) min((var_17), (((arr_8 [i_1] [i_2]) / (((/* implicit */int) arr_7 [i_1] [i_2]))))));
        }
    }
    /* LoopNest 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) max(((!(((/* implicit */_Bool) (unsigned char)184)))), ((!(((/* implicit */_Bool) (unsigned char)145))))))) > ((+(((/* implicit */int) arr_22 [i_5]))))));
                /* LoopSeq 4 */
                for (unsigned short i_7 = 2; i_7 < 14; i_7 += 4) 
                {
                    var_19 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_9 [i_5] [i_5])), (arr_6 [i_6] [i_5])))) ? ((-(((/* implicit */int) arr_15 [(signed char)19] [i_6] [i_5])))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)145))) < (arr_17 [i_5]))))))) ? ((+(((/* implicit */int) (signed char)117)))) : (((/* implicit */int) ((((/* implicit */int) arr_24 [i_7 + 1] [i_7] [i_7 + 2] [i_7 - 1])) > (((/* implicit */int) ((arr_24 [i_5] [(unsigned char)11] [(unsigned char)11] [i_7]) || (((/* implicit */_Bool) arr_7 [(unsigned short)1] [i_5]))))))))));
                    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) (~(((((((/* implicit */_Bool) arr_11 [i_5] [(unsigned char)3] [(unsigned char)3] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)24728))) : (-3790500194906916688LL))) ^ ((~(arr_17 [i_5]))))))))));
                    var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) arr_24 [i_7 + 1] [i_7 - 2] [i_7 - 1] [i_7 + 2])) == (((/* implicit */int) arr_24 [i_7 + 1] [i_7 + 1] [i_7 - 1] [i_7 + 2]))))) & (((/* implicit */int) max((arr_9 [i_7 - 1] [i_7 + 1]), (arr_9 [i_7 - 2] [i_7 + 2])))))))));
                }
                /* vectorizable */
                for (short i_8 = 0; i_8 < 16; i_8 += 4) 
                {
                    arr_29 [i_8] [4LL] [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) 237573615)) ? (7U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)13906)))))) < (((((/* implicit */_Bool) arr_11 [(short)19] [i_8] [i_6] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [(_Bool)1]))) : (-4785963425837861957LL)))));
                    var_22 ^= ((/* implicit */short) arr_22 [i_6]);
                    arr_30 [i_6] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)253)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1204))) : (2857751297898824991LL))))));
                }
                /* vectorizable */
                for (signed char i_9 = 0; i_9 < 16; i_9 += 1) 
                {
                    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_23 [i_9] [i_5])) ? (((/* implicit */int) arr_20 [i_5])) : (((/* implicit */int) arr_20 [i_9]))));
                    arr_33 [i_6] [i_9] = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_5] [i_6]))) < ((+(140737488355203ULL))));
                }
                /* vectorizable */
                for (unsigned int i_10 = 0; i_10 < 16; i_10 += 4) 
                {
                    var_24 = ((/* implicit */long long int) arr_28 [i_5] [i_6] [i_10]);
                    /* LoopSeq 1 */
                    for (short i_11 = 0; i_11 < 16; i_11 += 4) 
                    {
                        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) arr_36 [i_11] [i_10] [i_6] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)47))) : (((((/* implicit */_Bool) arr_5 [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)56422))) : (1358203912177817734LL)))));
                        /* LoopSeq 2 */
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            var_26 = ((/* implicit */long long int) (~(((/* implicit */int) arr_36 [i_12] [i_11] [i_6] [i_5]))));
                            arr_42 [i_5] [i_6] [i_12] [i_12] = ((/* implicit */unsigned long long int) arr_32 [i_5] [i_6] [1ULL]);
                            var_27 ^= ((/* implicit */unsigned long long int) (~(arr_8 [i_6] [i_12])));
                            var_28 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [8LL])) ? (((/* implicit */int) (unsigned char)151)) : (arr_10 [i_11] [i_10])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 7438601154278000361ULL))))) : (((/* implicit */int) (_Bool)1))));
                            var_29 = ((/* implicit */int) (unsigned short)24728);
                        }
                        for (unsigned int i_13 = 0; i_13 < 16; i_13 += 4) 
                        {
                            var_30 = (-(((/* implicit */int) arr_27 [i_5])));
                            arr_47 [i_5] [i_5] [i_10] [i_11] [i_13] [i_6] |= ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (unsigned char)229)))))));
                            arr_48 [i_5] [i_6] [(unsigned short)6] [(unsigned char)5] [i_11] [i_13] = ((((/* implicit */_Bool) (+(4377211770232477048LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)122))))) : (((/* implicit */int) ((((/* implicit */int) arr_20 [i_11])) > (((/* implicit */int) (short)-28978))))));
                        }
                    }
                    var_31 = ((/* implicit */short) ((((/* implicit */_Bool) arr_45 [i_5] [i_6] [i_10])) ? ((-(arr_10 [i_5] [i_5]))) : (((/* implicit */int) ((140737488355208ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)59425))))))));
                    arr_49 [i_6] [i_6] [i_5] = ((/* implicit */unsigned long long int) (short)-15103);
                }
                var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_6] [i_6] [i_5])) ? (((/* implicit */int) arr_28 [i_5] [i_5] [i_6])) : (((/* implicit */int) (unsigned short)59425))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_5] [i_5] [i_6])))))) : (((((/* implicit */unsigned int) -5)) / (2007611319U)))));
            }
        } 
    } 
}
