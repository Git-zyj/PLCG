/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144954
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
    var_11 = ((/* implicit */long long int) min((((/* implicit */int) ((short) var_5))), ((-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_8)) : (var_5)))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                for (signed char i_3 = 0; i_3 < 14; i_3 += 4) 
                {
                    {
                        arr_12 [i_0] = ((/* implicit */signed char) (((-(((((/* implicit */_Bool) arr_9 [i_2] [(_Bool)1] [i_2] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_0))))) <= (((/* implicit */long long int) ((/* implicit */int) var_1)))));
                        arr_13 [i_0] [i_0] = ((/* implicit */short) (((+(((((/* implicit */int) (unsigned char)121)) * (((/* implicit */int) arr_1 [i_0])))))) % (((((/* implicit */_Bool) (~(var_10)))) ? (((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_3])) : (var_5)))));
                    }
                } 
            } 
        } 
        var_12 -= ((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) (+(((/* implicit */int) (short)25523))))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) ((36136677) >> (((((/* implicit */int) var_1)) - (2442)))))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) var_10)) : (arr_8 [i_0] [i_0] [(_Bool)1] [(_Bool)1])))))));
        /* LoopNest 2 */
        for (signed char i_4 = 0; i_4 < 14; i_4 += 2) 
        {
            for (short i_5 = 1; i_5 < 12; i_5 += 4) 
            {
                {
                    arr_20 [i_0] [i_0] [i_5] [(_Bool)1] = ((/* implicit */signed char) arr_6 [i_4]);
                    /* LoopSeq 3 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        arr_25 [i_0] [i_6] [i_5] [4LL] [i_0] = (i_0 % 2 == zero) ? (((/* implicit */long long int) ((((/* implicit */int) min(((unsigned short)15340), (((/* implicit */unsigned short) (_Bool)0))))) << (((((((/* implicit */_Bool) min((-7407760979936291611LL), (((/* implicit */long long int) (_Bool)1))))) ? (arr_10 [i_6] [i_0] [i_6] [i_6]) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)204))))))) + (1121642765003791129LL)))))) : (((/* implicit */long long int) ((((/* implicit */int) min(((unsigned short)15340), (((/* implicit */unsigned short) (_Bool)0))))) << (((((((((/* implicit */_Bool) min((-7407760979936291611LL), (((/* implicit */long long int) (_Bool)1))))) ? (arr_10 [i_6] [i_0] [i_6] [i_6]) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)204))))))) + (1121642765003791129LL))) + (4706109682485917659LL))))));
                        var_13 = (unsigned char)54;
                        arr_26 [i_0] [i_4] [(_Bool)1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)123)) ? (-2099721739) : (330220455)))) ? ((-(((/* implicit */int) var_3)))) : (((((/* implicit */_Bool) arr_24 [(unsigned char)0] [(unsigned char)0] [(unsigned char)10] [i_5 + 1])) ? (((/* implicit */int) (unsigned short)15340)) : (((/* implicit */int) arr_24 [i_5] [i_5] [i_5] [i_5 + 2]))))));
                        arr_27 [i_4] [i_0] = ((/* implicit */short) ((5094524740885944471LL) != (((/* implicit */long long int) ((/* implicit */int) (unsigned short)56079)))));
                        var_14 = ((/* implicit */_Bool) ((unsigned short) (_Bool)1));
                    }
                    for (short i_7 = 0; i_7 < 14; i_7 += 3) 
                    {
                        arr_31 [i_0] [i_0] [i_4] [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */int) var_4)) > (min(((~(((/* implicit */int) (unsigned char)230)))), (((((/* implicit */_Bool) -2014293725)) ? (-243350434) : (((/* implicit */int) arr_11 [i_0]))))))));
                        arr_32 [i_0] [i_4] [i_4] [i_0] = ((/* implicit */int) arr_11 [i_0]);
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 14; i_8 += 4) 
                    {
                        var_15 += ((/* implicit */signed char) ((((_Bool) arr_30 [i_0] [10LL] [i_4] [i_5] [i_8])) ? (((/* implicit */int) ((var_7) != (((/* implicit */int) var_8))))) : (((/* implicit */int) (short)-7082))));
                        arr_35 [i_0] [i_4] [i_4] [(short)12] = ((/* implicit */short) (-(-8819963666592773684LL)));
                        var_16 = ((/* implicit */unsigned short) ((int) var_8));
                    }
                    var_17 &= ((/* implicit */short) (-(((unsigned long long int) (~(((/* implicit */int) (unsigned char)227)))))));
                    var_18 = ((/* implicit */short) min(((-(((int) (unsigned short)18111)))), (((/* implicit */int) ((unsigned short) ((2147221504) << (((((/* implicit */int) var_2)) - (7378)))))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned short i_9 = 0; i_9 < 14; i_9 += 4) /* same iter space */
        {
            var_19 = ((/* implicit */signed char) ((((((/* implicit */int) arr_30 [i_0] [i_0] [(_Bool)1] [(_Bool)1] [(_Bool)1])) << (((((/* implicit */int) var_6)) - (62782))))) > ((~(((/* implicit */int) arr_30 [i_0] [i_0] [i_9] [i_9] [i_9]))))));
            var_20 *= ((/* implicit */signed char) (short)-31693);
        }
        for (unsigned short i_10 = 0; i_10 < 14; i_10 += 4) /* same iter space */
        {
            var_21 *= ((/* implicit */unsigned short) max((min((((/* implicit */long long int) 36136677)), (arr_10 [i_0] [i_10] [i_0] [i_0]))), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(5094524740885944475LL)))) ? (((arr_5 [i_0] [i_0] [i_0]) >> (((((/* implicit */int) arr_9 [i_10] [i_10] [(short)2] [(unsigned char)0])) - (1693))))) : (((/* implicit */int) ((signed char) (_Bool)1))))))));
            arr_42 [i_0] [i_0] = ((/* implicit */signed char) (+(((int) ((var_8) || (((/* implicit */_Bool) (unsigned char)246)))))));
        }
        var_22 = (((-(((/* implicit */int) arr_28 [i_0] [i_0] [i_0] [i_0])))) % (((((/* implicit */_Bool) arr_28 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_28 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_28 [i_0] [i_0] [i_0] [i_0])))));
    }
    for (unsigned short i_11 = 0; i_11 < 14; i_11 += 3) /* same iter space */
    {
        var_23 = ((/* implicit */long long int) (~(((/* implicit */int) ((var_10) == (((/* implicit */int) min(((unsigned short)57869), (arr_30 [i_11] [3ULL] [3] [(unsigned short)0] [i_11])))))))));
        var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((max((((/* implicit */int) (unsigned short)5370)), ((-(((/* implicit */int) arr_39 [4ULL] [i_11])))))) > (((/* implicit */int) (_Bool)1)))))));
        var_25 = ((/* implicit */short) (~(((/* implicit */int) (signed char)5))));
        var_26 *= ((/* implicit */unsigned char) ((int) ((((/* implicit */int) (unsigned short)44230)) << (((((/* implicit */int) (signed char)35)) - (28))))));
    }
    /* LoopNest 2 */
    for (long long int i_12 = 0; i_12 < 15; i_12 += 3) 
    {
        for (unsigned char i_13 = 0; i_13 < 15; i_13 += 1) 
        {
            {
                var_27 = ((int) max((((/* implicit */unsigned short) (signed char)1)), (arr_51 [i_12] [i_13])));
                arr_52 [i_12] [i_13] = ((/* implicit */_Bool) 36136648);
                var_28 = ((/* implicit */signed char) (+(var_7)));
                arr_53 [i_12] = ((/* implicit */unsigned long long int) (short)25523);
                /* LoopNest 2 */
                for (signed char i_14 = 0; i_14 < 15; i_14 += 3) 
                {
                    for (short i_15 = 0; i_15 < 15; i_15 += 2) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                            {
                                var_29 = ((/* implicit */long long int) ((((/* implicit */int) (signed char)78)) * (((/* implicit */int) (_Bool)0))));
                                var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((-9212887100067830430LL), (((/* implicit */long long int) (unsigned char)255))))) ? (arr_61 [i_12] [i_13] [i_12] [i_12] [i_16]) : ((-(((/* implicit */int) (unsigned short)0))))));
                                var_31 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_47 [i_14] [i_15])) ? (((/* implicit */int) (unsigned char)10)) : (((/* implicit */int) arr_47 [i_16] [i_15]))))) ? (((/* implicit */unsigned long long int) ((var_5) + (max((arr_61 [i_12] [i_12] [i_14] [i_15] [(unsigned short)4]), (arr_49 [i_15] [i_13] [i_16])))))) : (((((unsigned long long int) (unsigned char)246)) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_46 [i_15])) ? (var_10) : (((/* implicit */int) (unsigned char)100)))))))));
                                var_32 *= ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)235))));
                            }
                            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
                            {
                                var_33 = ((/* implicit */int) min((var_33), (((((/* implicit */_Bool) arr_51 [i_15] [(short)4])) ? (((/* implicit */int) ((((/* implicit */int) (signed char)124)) < ((+(((/* implicit */int) (_Bool)0))))))) : (433770713)))));
                                arr_66 [i_12] = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) (unsigned char)22)) ? (((/* implicit */int) arr_58 [i_13] [i_14] [i_15] [i_17])) : (((/* implicit */int) arr_58 [i_12] [(unsigned char)12] [i_12] [i_15])))));
                                var_34 = ((/* implicit */unsigned char) min((var_34), (((/* implicit */unsigned char) var_3))));
                                var_35 = ((/* implicit */int) min(((signed char)-35), ((signed char)-1)));
                            }
                            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) /* same iter space */
                            {
                                var_36 = ((/* implicit */_Bool) max((var_36), (((/* implicit */_Bool) ((long long int) max((((/* implicit */unsigned char) (signed char)-1)), ((unsigned char)220)))))));
                                var_37 = ((/* implicit */signed char) ((short) (-9223372036854775807LL - 1LL)));
                                var_38 ^= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_57 [i_13] [i_15] [i_15] [i_15])) ? (((/* implicit */int) arr_57 [i_12] [i_13] [i_14] [i_15])) : (((/* implicit */int) (signed char)-29))))));
                            }
                            var_39 ^= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) > (9223372036854775807LL)));
                        }
                    } 
                } 
            }
        } 
    } 
}
