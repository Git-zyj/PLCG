/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112041
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        var_17 += ((/* implicit */short) ((min((((((/* implicit */_Bool) var_15)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-50))))), (min((var_16), (((/* implicit */unsigned long long int) arr_1 [i_0])))))) == (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (signed char)-49)) ? (((/* implicit */int) (signed char)-49)) : (((/* implicit */int) (short)32753)))), (((/* implicit */int) arr_1 [i_0 + 2])))))));
        /* LoopNest 2 */
        for (signed char i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            for (long long int i_2 = 2; i_2 < 15; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (!(var_1))))) : (((((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)-34)), (var_10)))) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) (signed char)53)))))))))))));
                    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((min((arr_2 [(short)14] [i_1 + 3] [i_2 - 2]), (((/* implicit */long long int) arr_4 [i_2 - 1] [i_1 + 2] [i_1 - 2] [i_0 - 2])))) ^ (((((/* implicit */long long int) var_13)) - (var_10))))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            {
                                var_20 *= ((/* implicit */short) (!(((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_2] [i_2]))));
                                var_21 = ((/* implicit */_Bool) (signed char)62);
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-29)) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) arr_10 [i_0])) ? (((/* implicit */int) (signed char)34)) : (((/* implicit */int) (_Bool)1)))))))));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned char i_5 = 0; i_5 < 16; i_5 += 1) 
        {
            var_23 = ((((arr_7 [i_0] [i_0] [2]) ? (arr_9 [i_0] [i_0 + 2]) : (arr_9 [i_0] [i_0 - 2]))) & (((/* implicit */unsigned long long int) (~(var_10)))));
            /* LoopSeq 2 */
            for (int i_6 = 0; i_6 < 16; i_6 += 1) 
            {
                arr_18 [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_11 [i_0] [i_0] [i_0]) ? (((arr_6 [i_0 + 1] [i_0] [i_0] [i_0 + 1]) - (((/* implicit */long long int) ((/* implicit */int) var_7))))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_16 [(unsigned short)8] [i_0] [i_0])))))))) ? (((((/* implicit */int) (short)29253)) << (((((/* implicit */int) (signed char)11)) >> (((((/* implicit */int) var_2)) - (61182))))))) : (((int) min((((/* implicit */long long int) var_13)), (arr_2 [i_6] [i_5] [i_0]))))));
                var_24 ^= ((((/* implicit */_Bool) ((unsigned long long int) (+(((/* implicit */int) arr_7 [i_0] [i_5] [i_0])))))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_6]))))) : ((+(arr_6 [i_0] [i_0] [i_0] [i_6]))));
                var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) arr_17 [i_0] [i_5] [i_6]))));
                arr_19 [i_0] [i_5] [i_6] [i_6] = ((/* implicit */unsigned char) min((min((arr_13 [i_0]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned short)14)) : (((/* implicit */int) var_3))))))), (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_8 [i_0] [i_5] [i_5] [13U])), ((+(((/* implicit */int) var_2)))))))));
            }
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned short i_8 = 0; i_8 < 16; i_8 += 3) 
                {
                    for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 4) 
                    {
                        {
                            var_26 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_24 [i_0] [i_0] [i_7] [i_7] [(short)9] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_2 [i_0] [i_0] [i_0])))))) && (((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))));
                            var_27 = ((/* implicit */int) var_3);
                            var_28 = ((/* implicit */long long int) (signed char)-88);
                        }
                    } 
                } 
                var_29 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_7 [i_7] [i_5] [(short)3])) >> (((arr_2 [i_7] [i_0] [i_0]) + (526013065545010091LL)))));
                /* LoopSeq 1 */
                for (unsigned long long int i_10 = 1; i_10 < 13; i_10 += 2) 
                {
                    var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_9 [(signed char)11] [2ULL]), (((/* implicit */unsigned long long int) ((short) arr_27 [i_7] [i_7])))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)193))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_5])) ? (((/* implicit */int) (signed char)39)) : (((/* implicit */int) (_Bool)1))))) : (arr_3 [i_7] [i_7]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_28 [i_0 + 1] [i_5] [(signed char)9] [i_10 + 3] [i_5])) != (((/* implicit */int) var_2)))))))))));
                    var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) var_6))) ? (arr_9 [(signed char)6] [i_10]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)51730)) * (((/* implicit */int) var_7)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)4))))) : (((unsigned long long int) (short)-29267))));
                    var_32 = ((/* implicit */unsigned int) min((var_32), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)10843)) ? (1673503589635892343ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-29240)))))) ? (((unsigned int) arr_16 [i_0] [i_5] [i_7 - 1])) : (((/* implicit */unsigned int) ((((((var_12) - (((/* implicit */int) var_6)))) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_7])) || (((/* implicit */_Bool) arr_24 [i_0] [(short)14] [i_7] [i_0] [(short)14] [i_0] [i_5]))))))))))));
                }
            }
        }
        for (unsigned int i_11 = 0; i_11 < 16; i_11 += 3) 
        {
            var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((unsigned short)50371), ((unsigned short)51726)))) ? ((+(((/* implicit */int) var_4)))) : (((/* implicit */int) ((-25) > (((/* implicit */int) (_Bool)0)))))));
            /* LoopNest 2 */
            for (short i_12 = 4; i_12 < 14; i_12 += 4) 
            {
                for (unsigned short i_13 = 0; i_13 < 16; i_13 += 2) 
                {
                    {
                        var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_26 [i_0 + 2] [i_0 - 1] [i_13] [i_0 + 2] [i_11] [i_12 - 2]))))) ? (((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) arr_9 [i_12] [i_13])) || (((/* implicit */_Bool) (signed char)-17)))))) : (((arr_31 [i_0 + 1]) % (min((665888732045712003ULL), (((/* implicit */unsigned long long int) arr_16 [1ULL] [i_11] [i_12 + 2])))))))))));
                        var_35 = ((/* implicit */unsigned long long int) (!((!(arr_29 [i_0] [i_12])))));
                        var_36 = ((/* implicit */_Bool) arr_22 [i_0] [i_11] [i_12] [i_12]);
                    }
                } 
            } 
        }
        for (long long int i_14 = 3; i_14 < 13; i_14 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_15 = 3; i_15 < 14; i_15 += 2) 
            {
                for (unsigned long long int i_16 = 0; i_16 < 16; i_16 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                        {
                            var_37 &= ((/* implicit */short) (+(((arr_7 [i_0] [i_0] [i_16]) ? (arr_14 [i_0] [i_14 - 2] [i_15 + 1] [i_16]) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0])))))));
                            var_38 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_1 [i_15 - 2])) ? (arr_31 [i_16]) : (((/* implicit */unsigned long long int) var_13)))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) min(((signed char)-28), (((/* implicit */signed char) (_Bool)1))))))));
                            var_39 = ((/* implicit */unsigned long long int) ((long long int) (((~(arr_6 [i_0 - 2] [i_0] [10] [(unsigned short)0]))) > (arr_14 [i_14] [7ULL] [7ULL] [i_17]))));
                            var_40 = ((/* implicit */unsigned long long int) arr_43 [i_17] [i_16] [i_15 + 1] [i_15] [i_14] [i_0 - 1]);
                        }
                        /* LoopSeq 4 */
                        for (_Bool i_18 = 0; i_18 < 0; i_18 += 1) 
                        {
                            arr_49 [i_0] [i_15] [i_15] [i_16] [i_16] = ((/* implicit */unsigned long long int) arr_43 [i_0] [i_0] [i_15] [i_16] [i_18] [(unsigned char)9]);
                            var_41 = ((/* implicit */short) arr_6 [i_0] [i_0] [i_15 - 1] [i_0]);
                        }
                        for (unsigned char i_19 = 0; i_19 < 16; i_19 += 3) 
                        {
                            var_42 = ((/* implicit */unsigned long long int) min((var_42), (((/* implicit */unsigned long long int) (short)-29228))));
                            var_43 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)29267)) ? (arr_47 [i_0 - 2] [i_19] [i_15] [i_14]) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_14 + 1] [i_0]))))), (((/* implicit */long long int) ((4) > (((/* implicit */int) (short)18938)))))))) ? ((+(((/* implicit */int) (short)29242)))) : (((-10) ^ (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_4))))))));
                        }
                        for (signed char i_20 = 0; i_20 < 16; i_20 += 1) 
                        {
                            var_44 = ((/* implicit */long long int) ((((arr_42 [i_16] [i_0 - 2] [i_15 + 2] [i_16] [i_20]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)192))))) >= (((/* implicit */unsigned long long int) arr_33 [i_16] [i_15 - 1] [i_15 - 1]))));
                            var_45 = ((/* implicit */unsigned char) ((signed char) ((_Bool) arr_47 [i_15] [i_14 + 2] [i_0 - 2] [i_15])));
                        }
                        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                        {
                            arr_58 [i_0] [i_0] [(unsigned short)0] [i_21] [(unsigned short)0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)71))));
                            var_46 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-125))) >= (-9223372036854775800LL)));
                        }
                    }
                } 
            } 
            var_47 = ((/* implicit */signed char) min((var_47), (((/* implicit */signed char) 685118866U))));
        }
    }
    /* vectorizable */
    for (unsigned short i_22 = 2; i_22 < 18; i_22 += 2) 
    {
        var_48 = ((/* implicit */int) ((((/* implicit */_Bool) arr_60 [i_22] [i_22 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_0)));
        var_49 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) 15670851162638451347ULL)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_59 [i_22])) && (((/* implicit */_Bool) 268435455ULL)))))) : (((arr_59 [i_22 + 2]) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
        var_50 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) 4947328U))));
    }
    for (unsigned short i_23 = 0; i_23 < 13; i_23 += 1) 
    {
        var_51 &= ((/* implicit */_Bool) max((((/* implicit */int) arr_0 [i_23])), (((((/* implicit */_Bool) (+(var_8)))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_14)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_23] [i_23])))))))));
        var_52 = ((/* implicit */unsigned int) min((((/* implicit */int) arr_60 [i_23] [i_23])), (((((/* implicit */int) arr_16 [i_23] [i_23] [i_23])) ^ (((int) var_9))))));
    }
    var_53 = ((/* implicit */long long int) max((var_12), (((((/* implicit */_Bool) (~(15)))) ? (((/* implicit */int) var_9)) : ((+(((/* implicit */int) var_7))))))));
}
