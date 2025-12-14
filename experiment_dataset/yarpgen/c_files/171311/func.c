/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171311
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
    var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_15))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            arr_7 [i_1] [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)27351)) ? (((/* implicit */int) arr_1 [i_0] [4U])) : (((/* implicit */int) (unsigned char)224))))) < (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-31366))) & (arr_4 [i_1] [i_1] [i_0])))));
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 19; i_3 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 1; i_4 < 18; i_4 += 3) 
                        {
                            var_18 -= ((/* implicit */unsigned char) ((arr_5 [i_3]) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_4 - 1] [i_4 - 1] [i_4 + 1])))));
                            var_19 -= ((/* implicit */unsigned char) (+(18446744073709551594ULL)));
                            var_20 |= ((((/* implicit */_Bool) arr_15 [i_4 + 1] [i_4 + 1] [i_4 - 1] [i_4] [i_4 + 1] [i_4])) && (((((/* implicit */_Bool) (-2147483647 - 1))) && (((/* implicit */_Bool) 1611664479)))));
                        }
                        var_21 = (~(arr_5 [i_1]));
                        var_22 = ((/* implicit */unsigned long long int) ((var_0) & (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)185)))))));
                        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) arr_15 [i_0] [i_1] [i_1] [i_1] [i_0] [i_0]))));
                        var_24 = ((/* implicit */unsigned char) max((var_24), (arr_3 [i_0] [i_1] [i_2])));
                    }
                } 
            } 
            arr_16 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_3 [i_0] [i_1] [i_0])))) + ((~(((/* implicit */int) arr_2 [i_1] [i_0]))))));
            var_25 = ((/* implicit */signed char) ((3048121911U) >> (((((((/* implicit */int) (unsigned char)194)) << (((/* implicit */int) (_Bool)1)))) - (358)))));
        }
        for (unsigned long long int i_5 = 1; i_5 < 17; i_5 += 2) 
        {
            var_26 -= ((/* implicit */_Bool) (~(((/* implicit */int) arr_15 [i_5 + 2] [i_5 + 2] [i_5 + 2] [i_5 + 1] [i_5 - 1] [i_5 - 1]))));
            arr_19 [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_5] [i_0])) ? (15826173464280446947ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */long long int) (+(((/* implicit */int) (signed char)-113))))) : (arr_14 [9U] [9U] [(signed char)2])));
            /* LoopNest 2 */
            for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 2) 
            {
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (short i_8 = 0; i_8 < 19; i_8 += 2) 
                        {
                            var_27 ^= ((/* implicit */unsigned int) (unsigned char)14);
                            var_28 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)1))) / (arr_14 [i_0] [i_0] [i_0]))))));
                        }
                        /* LoopSeq 1 */
                        for (short i_9 = 0; i_9 < 19; i_9 += 4) 
                        {
                            var_29 *= ((/* implicit */_Bool) var_7);
                            var_30 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (var_12) : (((/* implicit */unsigned int) -324000861))))) ? ((~(((/* implicit */int) (signed char)-105)))) : (((/* implicit */int) (short)31389))));
                            var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) (short)31393))));
                            arr_31 [i_0] [5ULL] [i_6] [i_5] [i_5] = ((/* implicit */long long int) arr_9 [i_5] [i_9] [i_6]);
                        }
                        arr_32 [i_5] [i_6] [i_5] [i_5] = (i_5 % 2 == zero) ? (((/* implicit */unsigned char) ((-229317537) | (((((/* implicit */int) (unsigned char)185)) << (((arr_21 [(unsigned short)14] [12LL] [i_5] [i_7]) - (89318518747590044ULL)))))))) : (((/* implicit */unsigned char) ((-229317537) | (((((/* implicit */int) (unsigned char)185)) << (((((arr_21 [(unsigned short)14] [12LL] [i_5] [i_7]) - (89318518747590044ULL))) - (2093394567176540160ULL))))))));
                    }
                } 
            } 
        }
        arr_33 [15U] = ((/* implicit */unsigned long long int) arr_9 [(unsigned short)6] [i_0] [i_0]);
        /* LoopNest 2 */
        for (long long int i_10 = 0; i_10 < 19; i_10 += 1) 
        {
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                {
                    arr_39 [i_10] [i_10] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)192)) ^ (((/* implicit */int) (short)-31396))))) ? (15826173464280446959ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) >> (((((/* implicit */int) arr_22 [i_0] [i_0] [i_0] [i_0])) + (23728))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_12 = 0; i_12 < 19; i_12 += 4) 
                    {
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            {
                                arr_45 [i_10] [i_10] [i_11] [i_12] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((2620570609429104687ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)103))))) : ((-(var_9)))));
                                var_32 = ((((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_38 [16LL] [i_12] [i_11]))) : (var_16))) % (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_41 [(short)12] [(short)12] [i_11])) || (((/* implicit */_Bool) var_10)))))));
                                var_33 = ((/* implicit */long long int) ((((((/* implicit */int) var_7)) <= (((/* implicit */int) (short)-32759)))) || (((/* implicit */_Bool) var_14))));
                                var_34 = ((/* implicit */unsigned char) (-(((((/* implicit */long long int) -1442660481)) - (var_16)))));
                            }
                        } 
                    } 
                    var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_10] [i_10] [i_10])) || (((/* implicit */_Bool) arr_36 [17ULL] [i_11] [i_10]))));
                    arr_46 [i_10] [i_10] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) -9223372036854775803LL))));
                    var_36 = ((/* implicit */_Bool) (+(arr_36 [i_0] [i_0] [i_10])));
                }
            } 
        } 
        arr_47 [i_0] = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */int) (unsigned char)68)) >= (((/* implicit */int) arr_22 [i_0] [i_0] [i_0] [i_0])))))));
    }
    for (long long int i_14 = 0; i_14 < 10; i_14 += 4) 
    {
        var_37 ^= ((/* implicit */unsigned char) (((+(((arr_21 [i_14] [i_14] [i_14] [i_14]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11))))))) + (((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) + (((/* implicit */int) arr_3 [i_14] [i_14] [i_14])))))));
        arr_52 [i_14] = ((/* implicit */unsigned int) 2840050166872691046ULL);
    }
    for (unsigned long long int i_15 = 0; i_15 < 22; i_15 += 3) 
    {
        arr_56 [i_15] [i_15] = ((/* implicit */signed char) var_12);
        arr_57 [i_15] [14ULL] = ((/* implicit */unsigned char) (-(((((/* implicit */long long int) ((/* implicit */int) arr_55 [i_15]))) % (((((/* implicit */_Bool) arr_53 [i_15] [4ULL])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-3921))) : (arr_54 [(short)19])))))));
    }
}
