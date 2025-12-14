/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135674
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
    var_10 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32718)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-8207))))))) ? (((/* implicit */int) var_0)) : ((((-(((/* implicit */int) var_2)))) + ((-(((/* implicit */int) (signed char)-120))))))));
    var_11 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_9) : (((/* implicit */unsigned int) var_1))))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 9; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (short i_2 = 1; i_2 < 6; i_2 += 2) /* same iter space */
                {
                    arr_9 [i_1] [i_1] [i_1] [i_2] = ((/* implicit */unsigned short) ((276182659U) >= (((/* implicit */unsigned int) (~(((/* implicit */int) (short)32717)))))));
                    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (short)12035)) : (((/* implicit */int) (short)32767))));
                }
                for (short i_3 = 1; i_3 < 6; i_3 += 2) /* same iter space */
                {
                    arr_12 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (((_Bool)0) ? (10992365413017990033ULL) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)32718)))))))) ? (((/* implicit */int) (signed char)110)) : (((/* implicit */int) arr_11 [i_3] [i_0]))));
                    var_13 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (-2147483625) : ((~(((/* implicit */int) arr_7 [i_3] [i_3 + 3] [i_3 + 3])))))))));
                }
                /* vectorizable */
                for (short i_4 = 1; i_4 < 6; i_4 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (signed char i_6 = 0; i_6 < 10; i_6 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */short) 7454378660691561583ULL);
                                arr_20 [i_1] [i_1] [i_1] [i_1] [i_5] [i_1] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-8764)) ? (arr_2 [i_4 + 3] [i_4 + 3] [i_4 + 2]) : ((((_Bool)0) ? (((/* implicit */int) (short)20071)) : (((/* implicit */int) (unsigned short)20765))))));
                                var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-32718)) ? (2147483624) : (2147483584)));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned int) (-((+(((/* implicit */int) arr_6 [i_1] [i_1] [i_1] [i_1]))))));
                }
                /* LoopSeq 2 */
                for (unsigned long long int i_7 = 2; i_7 < 7; i_7 += 1) /* same iter space */
                {
                    arr_24 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) arr_13 [i_1] [i_1 - 2] [i_1 - 1]);
                    arr_25 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_7 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-15535))) : (arr_8 [i_7 + 2])))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) ((((((/* implicit */_Bool) (short)16831)) ? (((/* implicit */int) arr_3 [i_7 - 1] [i_1] [i_0])) : (((/* implicit */int) (short)-21311)))) >= ((~(((/* implicit */int) arr_1 [i_7])))))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (short i_8 = 0; i_8 < 10; i_8 += 4) 
                    {
                        var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_3 [i_7] [i_7] [i_7]))));
                        var_18 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_21 [i_1 + 1] [i_1 - 1]))));
                        arr_28 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) arr_15 [i_7] [i_7] [i_7] [i_7]);
                        arr_29 [i_1] [i_1] = ((/* implicit */int) (signed char)64);
                        arr_30 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_11 [i_1 - 2] [i_7 - 2]))));
                    }
                    for (unsigned int i_9 = 3; i_9 < 9; i_9 += 4) /* same iter space */
                    {
                        var_19 ^= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-29737)) ? (((((/* implicit */int) (signed char)21)) + (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) (unsigned short)3968)))))));
                        var_20 &= (~(((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)61566)) ^ (((/* implicit */int) arr_7 [i_0] [i_1] [i_7]))))) ? (((((/* implicit */int) arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ^ (((/* implicit */int) arr_13 [i_0] [i_1 - 3] [i_1 - 3])))) : (((((/* implicit */int) (short)-16145)) ^ (((/* implicit */int) arr_22 [i_0] [i_0] [i_7] [i_7])))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_10 = 3; i_10 < 9; i_10 += 4) /* same iter space */
                    {
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-8038))))) ? (((/* implicit */int) arr_13 [i_1] [i_10] [i_10])) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-16145)))))));
                        var_22 *= ((/* implicit */signed char) 3631641413U);
                        /* LoopSeq 3 */
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                        {
                            var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) (+(((/* implicit */int) arr_27 [i_1 + 1] [i_7 + 3] [i_7 - 2] [i_10 + 1] [i_7 + 3] [i_10 - 1])))))));
                            var_24 = ((/* implicit */short) (+((+(10992365413017990046ULL)))));
                            var_25 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_2 [i_0] [i_1 - 1] [i_7]) & (((/* implicit */int) (short)27585))))) ? ((((_Bool)0) ? (((/* implicit */int) arr_37 [i_11] [i_10] [i_7] [i_1] [i_0])) : (((/* implicit */int) (short)32767)))) : (((/* implicit */int) ((((/* implicit */int) arr_26 [i_0] [i_1] [i_0])) == (((/* implicit */int) arr_27 [i_0] [i_1] [i_7] [i_10] [i_11] [i_11])))))));
                        }
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                        {
                            arr_42 [i_10] [i_1] [i_10] [i_7] [i_7] [i_1] [i_0] = ((/* implicit */short) (unsigned short)63597);
                            var_26 |= ((/* implicit */unsigned int) (-(arr_38 [i_12] [i_10 - 1] [i_7 - 2] [i_1 - 2] [i_0])));
                            var_27 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */int) arr_16 [i_0] [i_0] [i_1] [i_0])) : (((/* implicit */int) (signed char)-38))))) ? ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) : (arr_8 [i_12]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-2457)) ? (((/* implicit */int) arr_22 [i_12] [i_1] [i_1] [i_0])) : (((/* implicit */int) (short)1835)))))));
                        }
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                        {
                            var_28 = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) ((((/* implicit */int) arr_10 [i_13] [i_0])) == (((/* implicit */int) arr_4 [i_0] [i_1])))))));
                            var_29 = ((/* implicit */short) ((((/* implicit */int) (!(arr_36 [i_10 - 1] [i_13])))) == (((((/* implicit */_Bool) arr_35 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (signed char)13)) : (arr_2 [i_0] [i_0] [i_0])))));
                            var_30 &= ((/* implicit */_Bool) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_6 [i_0] [i_0] [i_7] [i_0]))))) & (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) ^ (1295101121U)))));
                            arr_45 [i_1] [i_1] [i_7] [i_1] [i_13] = ((/* implicit */signed char) ((((/* implicit */int) (short)-32745)) & (((/* implicit */int) (short)4194))));
                        }
                        var_31 = ((/* implicit */short) arr_43 [i_10]);
                    }
                }
                for (unsigned long long int i_14 = 2; i_14 < 7; i_14 += 1) /* same iter space */
                {
                    arr_48 [i_0] [i_0] [i_1] = ((/* implicit */signed char) (!((_Bool)1)));
                    var_32 ^= ((/* implicit */unsigned short) ((((/* implicit */int) arr_5 [i_0] [i_0])) != (((/* implicit */int) ((((268435455) != (((/* implicit */int) arr_47 [i_0] [i_0] [i_0])))) || (((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))))))));
                    var_33 = ((/* implicit */short) ((((((/* implicit */_Bool) (+(((/* implicit */int) arr_40 [i_0] [i_14 - 1]))))) && (((/* implicit */_Bool) (~(((/* implicit */int) (short)30345))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_1])) ? (((/* implicit */int) arr_13 [i_1] [i_1] [i_14])) : (((/* implicit */int) arr_19 [i_0] [i_0] [i_1] [i_14] [i_14] [i_14]))))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (short)32743)) : (((/* implicit */int) arr_43 [i_14]))))) : ((+(arr_14 [i_0] [i_14] [i_1]))))) : (((/* implicit */unsigned long long int) 3510542981U))));
                }
                arr_49 [i_0] [i_1] &= (!(((/* implicit */_Bool) ((((2776153086U) == (((/* implicit */unsigned int) ((/* implicit */int) arr_43 [i_0]))))) ? (((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_1])) ? (((/* implicit */int) arr_5 [i_0] [i_1 - 2])) : (((/* implicit */int) (unsigned short)32768)))) : ((~(((/* implicit */int) (_Bool)1))))))));
            }
        } 
    } 
    var_34 = ((((/* implicit */_Bool) ((((1295101121U) == (((/* implicit */unsigned int) ((/* implicit */int) (short)23464))))) ? ((-(1048575))) : (((((/* implicit */int) var_5)) << (((((/* implicit */int) var_0)) - (3704)))))))) ? (((/* implicit */int) ((((/* implicit */int) ((3949132402U) == (((/* implicit */unsigned int) ((/* implicit */int) (short)-18196)))))) == (((/* implicit */int) (short)10283))))) : ((+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-4195)))))));
}
