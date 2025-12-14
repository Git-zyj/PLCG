/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18066
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) -8830056119226830350LL)) ? (-8830056119226830350LL) : (8830056119226830350LL)));
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            var_13 ^= ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_5)), (var_7)))))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (int i_2 = 0; i_2 < 25; i_2 += 1) /* same iter space */
            {
                arr_9 [i_0] [i_2] = ((/* implicit */unsigned short) ((arr_2 [i_0] [i_0]) / (arr_2 [i_0] [i_1])));
                arr_10 [i_0] [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */long long int) (+(var_6)))) >= ((+(7150580416816465197LL)))));
                /* LoopNest 2 */
                for (long long int i_3 = 1; i_3 < 22; i_3 += 4) 
                {
                    for (unsigned int i_4 = 0; i_4 < 25; i_4 += 3) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned long long int) ((-8830056119226830337LL) != (8830056119226830350LL)));
                            arr_17 [i_0] [i_1] [i_4] [i_4] = ((/* implicit */long long int) var_2);
                        }
                    } 
                } 
            }
            for (int i_5 = 0; i_5 < 25; i_5 += 1) /* same iter space */
            {
                var_15 = (-(((min((((/* implicit */long long int) 2381348337U)), (8830056119226830347LL))) | (arr_2 [i_0] [i_5]))));
                var_16 = (-(((/* implicit */int) ((((((/* implicit */_Bool) arr_12 [i_5] [i_5] [i_5] [i_5])) ? (var_0) : (-8830056119226830350LL))) >= (((/* implicit */long long int) ((/* implicit */int) ((arr_7 [i_0]) > (((/* implicit */long long int) arr_21 [22ULL] [i_1]))))))))));
            }
            /* LoopNest 2 */
            for (unsigned char i_6 = 0; i_6 < 25; i_6 += 2) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        var_17 = ((/* implicit */int) min((var_17), (((((/* implicit */_Bool) ((signed char) -673919917))) ? (-154326084) : (((/* implicit */int) ((((8830056119226830350LL) >> (((-8830056119226830344LL) + (8830056119226830352LL))))) >= (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_1]))))))))));
                        arr_26 [i_7] [1ULL] [i_7] = ((/* implicit */long long int) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) -154326083)) || (((/* implicit */_Bool) (unsigned char)18))))), (max(((unsigned short)39725), (((/* implicit */unsigned short) arr_23 [i_0]))))));
                        var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_0] [i_1] [i_7])) && (((/* implicit */_Bool) arr_22 [i_0] [i_1] [i_6]))))) != (((((/* implicit */int) arr_22 [i_0] [i_1] [i_7])) >> (((((/* implicit */int) arr_22 [i_6] [i_1] [i_0])) - (42359)))))));
                        var_19 = ((/* implicit */unsigned long long int) ((unsigned short) (+(var_5))));
                    }
                } 
            } 
            var_20 &= ((/* implicit */unsigned short) ((((max((((/* implicit */unsigned long long int) arr_12 [i_0] [i_1] [i_0] [i_0])), (arr_14 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))) - (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_25 [i_0] [i_1] [i_1])) | (((/* implicit */int) (short)32767))))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [9U] [i_0] [i_0] [i_1] [i_1])))));
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            var_21 = ((/* implicit */unsigned int) ((min((8830056119226830351LL), (8830056119226830339LL))) >= (((/* implicit */long long int) max((2381348342U), (((/* implicit */unsigned int) ((var_6) / (1729867008)))))))));
            arr_29 [i_8] [i_8] = ((/* implicit */unsigned short) (+(((/* implicit */int) max((arr_0 [i_0]), (arr_0 [i_8]))))));
            /* LoopNest 2 */
            for (unsigned char i_9 = 2; i_9 < 24; i_9 += 3) 
            {
                for (long long int i_10 = 0; i_10 < 25; i_10 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_11 = 0; i_11 < 25; i_11 += 4) 
                        {
                            var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) -154326080))));
                            var_23 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_3)))) ? ((-(-8830056119226830350LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)-29639)))))));
                            var_24 = ((/* implicit */unsigned char) var_0);
                            arr_39 [i_9] [i_9 - 2] [i_9 + 1] [i_9] [i_8] [i_9 - 2] [i_9 - 1] = ((arr_12 [i_0] [i_0] [i_0] [i_0]) != (((/* implicit */unsigned int) ((arr_11 [i_11] [i_10] [i_9 - 1] [i_0]) | (((/* implicit */int) var_2))))));
                        }
                        for (unsigned int i_12 = 0; i_12 < 25; i_12 += 2) 
                        {
                            var_25 -= ((/* implicit */short) (unsigned short)39725);
                            var_26 = ((/* implicit */signed char) arr_27 [22U] [i_8] [i_0]);
                        }
                        arr_44 [i_8] [i_8] [i_9 - 1] [i_10] [i_10] [i_9] = ((/* implicit */short) ((unsigned char) 8830056119226830341LL));
                    }
                } 
            } 
        }
        /* LoopSeq 2 */
        for (short i_13 = 3; i_13 < 23; i_13 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned char i_14 = 0; i_14 < 25; i_14 += 2) 
            {
                arr_52 [(signed char)1] [(signed char)1] [(signed char)1] = ((max((((/* implicit */int) (!(((/* implicit */_Bool) -154326084))))), (((((/* implicit */int) (unsigned short)25811)) * (((/* implicit */int) var_9)))))) << (((((((/* implicit */_Bool) arr_32 [i_0] [i_0] [i_13 + 1] [i_0])) ? (arr_32 [i_0] [i_13 + 2] [i_13 - 3] [i_13]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_13 - 2] [i_13 + 2]))))) - (16172160103660280974ULL))));
                var_27 *= ((/* implicit */short) ((unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (238704783)))) / (((/* implicit */int) ((signed char) var_4))))));
            }
            arr_53 [i_0] [i_13] [i_13] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */int) (short)12903)), (arr_11 [i_13 - 3] [i_13 - 1] [i_13 - 3] [i_13 + 2]))))));
            arr_54 [i_13 - 1] = ((/* implicit */short) min(((-(6350269479324137187LL))), (((((/* implicit */long long int) ((unsigned int) -8830056119226830366LL))) - ((-(8830056119226830356LL)))))));
        }
        /* vectorizable */
        for (short i_15 = 3; i_15 < 23; i_15 += 1) /* same iter space */
        {
            var_28 += ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) 199821327)) : (6350269479324137187LL)))));
            /* LoopSeq 1 */
            for (signed char i_16 = 3; i_16 < 22; i_16 += 3) 
            {
                arr_61 [i_16 - 1] [i_15] [i_15] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) -154326083)) > (((arr_32 [i_0] [i_0] [i_0] [i_0]) << (((((/* implicit */int) var_9)) - (39214)))))));
                /* LoopSeq 2 */
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) arr_15 [i_0] [i_17] [i_16] [(short)7] [i_0]))));
                    var_30 += ((/* implicit */unsigned int) (+(arr_58 [i_15] [i_15 + 2])));
                    arr_65 [i_0] [i_0] [i_0] [(unsigned char)14] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_0 [i_0])) != (((/* implicit */int) arr_36 [i_0] [i_15] [i_16] [(unsigned char)4] [i_17])))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_28 [i_15] [i_0]))))) : (8830056119226830349LL)));
                }
                for (unsigned short i_18 = 0; i_18 < 25; i_18 += 3) 
                {
                    var_31 = ((/* implicit */unsigned char) (-((+(arr_2 [14ULL] [i_15 - 3])))));
                    var_32 *= ((/* implicit */_Bool) arr_34 [i_15 - 2] [i_16 - 1]);
                    var_33 = ((/* implicit */short) var_0);
                }
            }
        }
    }
    for (long long int i_19 = 0; i_19 < 24; i_19 += 1) 
    {
        arr_72 [i_19] = ((/* implicit */unsigned char) min((((/* implicit */int) ((((/* implicit */int) arr_4 [i_19] [i_19])) != ((~(var_6)))))), (var_8)));
        var_34 = ((/* implicit */unsigned long long int) arr_6 [i_19] [4U] [i_19]);
        var_35 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_14 [i_19] [i_19] [i_19] [i_19] [i_19] [i_19])) ? (((((/* implicit */_Bool) arr_31 [i_19])) ? (max((var_5), (8830056119226830351LL))) : (((/* implicit */long long int) arr_42 [i_19] [i_19] [(unsigned char)21] [i_19] [i_19] [i_19])))) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_19] [i_19] [i_19] [i_19])))));
        var_36 = ((/* implicit */unsigned long long int) max((var_36), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-12918)) && (((/* implicit */_Bool) -154326084)))))));
    }
    var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -154326084)) ? (((/* implicit */int) (unsigned short)53931)) : (((/* implicit */int) (signed char)-107))));
}
