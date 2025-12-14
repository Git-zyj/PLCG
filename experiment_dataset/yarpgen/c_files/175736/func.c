/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175736
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 23; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_16 ^= ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (3737769205U)));
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_3 = 2; i_3 < 21; i_3 += 4) 
                    {
                        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)26419)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_13))))) ? ((~(((/* implicit */int) (unsigned short)56161)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 5037065410103479786ULL)))))));
                        var_18 |= ((/* implicit */short) (-(((((/* implicit */_Bool) var_15)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))))));
                        var_19 = arr_6 [i_0 + 1] [i_0] [i_0 + 1] [i_3];
                        /* LoopSeq 1 */
                        for (signed char i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) 4398046511103ULL))));
                            var_21 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)24)) - (((/* implicit */int) (unsigned char)70))))) - (((unsigned long long int) (-9223372036854775807LL - 1LL)))));
                        }
                    }
                    var_22 *= (((+(min((((/* implicit */long long int) var_8)), (9223372036854775807LL))))) / (((/* implicit */long long int) (-(((var_9) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) var_7))))))));
                }
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_5 = 1; i_5 < 24; i_5 += 2) /* same iter space */
    {
        var_23 = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5] [i_5 + 1] [0ULL])) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (9223372036854775791LL)))), (((((/* implicit */_Bool) min((9223372036854775787LL), (((/* implicit */long long int) var_1))))) ? ((-(15236058404201808539ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))));
        /* LoopNest 3 */
        for (unsigned char i_6 = 1; i_6 < 23; i_6 += 2) 
        {
            for (unsigned char i_7 = 2; i_7 < 22; i_7 += 4) 
            {
                for (unsigned short i_8 = 1; i_8 < 22; i_8 += 1) 
                {
                    {
                        arr_21 [i_6] [i_8 + 1] [i_7 - 2] = ((/* implicit */_Bool) var_1);
                        var_24 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (-(max((((/* implicit */long long int) (_Bool)1)), (-9223372036854775807LL)))))) * (max((((/* implicit */unsigned long long int) 974970704U)), (6583304740040887272ULL)))));
                        arr_22 [i_5] [17ULL] [i_5] = ((/* implicit */long long int) ((int) -1171233237));
                        arr_23 [i_5 + 1] [(unsigned short)22] [i_7] [i_7 - 2] [i_5] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) (unsigned char)255))) ? ((-2147483647 - 1)) : (((/* implicit */int) min((var_8), (((/* implicit */unsigned char) var_11)))))))));
                    }
                } 
            } 
        } 
        var_25 |= ((/* implicit */int) ((long long int) ((((18035586786826058548ULL) << (((((/* implicit */int) var_14)) - (85))))) << ((((~(((/* implicit */int) (_Bool)1)))) + (28))))));
        var_26 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (unsigned short)57344)), (1712992164415427741ULL)));
    }
    /* vectorizable */
    for (unsigned int i_9 = 1; i_9 < 24; i_9 += 2) /* same iter space */
    {
        arr_26 [i_9 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_9] [i_9]))))) : (arr_6 [(signed char)8] [(unsigned short)4] [(_Bool)1] [i_9 - 1])));
        var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) (!(((/* implicit */_Bool) 960560995893656448LL)))))));
        /* LoopSeq 2 */
        for (unsigned short i_10 = 4; i_10 < 24; i_10 += 4) 
        {
            arr_30 [i_9 - 1] [i_10 - 4] |= ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_12))));
            var_28 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) 3319996598U)) < (15726570683721338449ULL))) ? (((((/* implicit */_Bool) (short)28672)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)4095)))) : (((/* implicit */int) arr_28 [i_9] [i_9 - 1]))));
        }
        for (int i_11 = 3; i_11 < 23; i_11 += 1) 
        {
            var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) * (((/* implicit */int) var_3))))) ? (((/* implicit */int) ((((/* implicit */int) var_8)) >= (var_10)))) : (((/* implicit */int) ((((/* implicit */int) var_8)) > (((/* implicit */int) var_7)))))));
            var_30 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_5))))));
            var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) var_4))));
        }
        /* LoopSeq 2 */
        for (unsigned int i_12 = 0; i_12 < 25; i_12 += 4) 
        {
            var_32 = ((/* implicit */unsigned char) ((arr_7 [i_9] [i_9 - 1] [i_9 + 1] [i_9 + 1]) ? (8287920282462975418ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-12)))));
            var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) (~(((/* implicit */int) arr_29 [i_9 - 1])))))));
            /* LoopNest 2 */
            for (unsigned long long int i_13 = 1; i_13 < 23; i_13 += 2) 
            {
                for (unsigned int i_14 = 0; i_14 < 25; i_14 += 4) 
                {
                    {
                        arr_40 [i_9] [i_9] [i_12] [i_12] [i_13 + 1] [i_9] = ((/* implicit */long long int) var_5);
                        /* LoopSeq 1 */
                        for (long long int i_15 = 4; i_15 < 23; i_15 += 1) 
                        {
                            var_34 = ((/* implicit */int) (!(((((/* implicit */unsigned long long int) -1756361143)) != (23697027281284943ULL)))));
                            var_35 += ((/* implicit */unsigned char) var_3);
                            var_36 = ((/* implicit */unsigned char) var_3);
                        }
                        var_37 = ((/* implicit */_Bool) (~(((/* implicit */int) (short)8412))));
                        arr_45 [i_13] [i_12] [i_13] [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) var_4))) ? (((/* implicit */int) ((unsigned char) var_8))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_9 - 1] [i_9 - 1] [i_9] [i_9 + 1] [i_9 + 1] [(unsigned char)13] [i_9 - 1])))))));
                    }
                } 
            } 
        }
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            var_38 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned short) 13854993633525182948ULL)))));
            var_39 += ((/* implicit */_Bool) (~(-5875070276986176270LL)));
            var_40 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)8191)) | (((/* implicit */int) (_Bool)1))));
        }
        /* LoopSeq 2 */
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned short i_18 = 4; i_18 < 22; i_18 += 1) 
            {
                var_41 = ((/* implicit */_Bool) (~(((/* implicit */int) var_0))));
                /* LoopSeq 2 */
                for (int i_19 = 3; i_19 < 22; i_19 += 1) 
                {
                    /* LoopSeq 2 */
                    for (short i_20 = 0; i_20 < 25; i_20 += 1) 
                    {
                        arr_61 [i_9] [i_17] [i_19 - 3] [(short)5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3210685669507743076ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-7740201094436181745LL)));
                        arr_62 [i_9 + 1] [i_9 + 1] [i_17] [i_19] [i_20] = ((/* implicit */long long int) 1756361143);
                        var_42 = ((/* implicit */int) ((((((/* implicit */int) (unsigned short)8204)) % (((/* implicit */int) var_8)))) != ((+(((/* implicit */int) var_0))))));
                    }
                    for (signed char i_21 = 1; i_21 < 24; i_21 += 4) 
                    {
                        arr_65 [(_Bool)1] [i_17] [i_19 - 2] [i_18] [i_17] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (10158823791246576176ULL) : (((((/* implicit */_Bool) 4503599627370495ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)40795))) : (549755813887ULL)))));
                        var_43 &= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) >> ((((-(-3132275434512497600LL))) - (3132275434512497595LL)))));
                    }
                    arr_66 [i_17] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)57344)) ? (((((/* implicit */int) var_9)) / (((/* implicit */int) var_5)))) : (((/* implicit */int) arr_1 [i_9 - 1] [i_9 + 1]))));
                    var_44 = ((/* implicit */unsigned long long int) (((((-(((/* implicit */int) (short)16037)))) + (2147483647))) >> (((arr_64 [i_19] [i_19 + 3] [i_19 - 2] [(unsigned char)12] [i_19 - 2] [1LL] [i_19 + 1]) - (14531139520742129001ULL)))));
                }
                for (unsigned short i_22 = 0; i_22 < 25; i_22 += 2) 
                {
                    /* LoopSeq 2 */
                    for (int i_23 = 0; i_23 < 25; i_23 += 1) 
                    {
                        arr_73 [i_17] [(unsigned short)0] [i_17] = ((/* implicit */unsigned short) ((short) (short)887));
                        var_45 = ((/* implicit */_Bool) ((unsigned char) (unsigned char)35));
                        var_46 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_72 [i_18 + 1] [i_18 + 2] [(short)11] [i_18 - 4] [i_18 + 1] [i_18 - 4]))));
                        arr_74 [i_9] [7ULL] [i_17] [10ULL] [i_23] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((3319996592U) <= (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))));
                    }
                    for (int i_24 = 0; i_24 < 25; i_24 += 1) 
                    {
                        arr_78 [i_9] [i_22] [i_22] [i_22] [i_22] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) << (((-800217165) + (800217176)))))) ? (((/* implicit */int) ((_Bool) (_Bool)1))) : (((((/* implicit */int) var_3)) << (((/* implicit */int) (_Bool)1))))));
                        var_47 *= ((/* implicit */_Bool) (short)31229);
                        var_48 += ((/* implicit */_Bool) var_0);
                        var_49 |= ((/* implicit */unsigned long long int) ((short) (unsigned short)0));
                    }
                    var_50 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (17197969910063743589ULL)))) ? (((/* implicit */int) ((signed char) var_14))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_11 [i_18] [(_Bool)1] [(_Bool)1] [i_18] [i_18] [i_18 - 1])) : (((/* implicit */int) (short)-24796))))));
                }
            }
            arr_79 [i_9] [i_17] = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */int) (_Bool)1)) <= (var_10))));
        }
        for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) /* same iter space */
        {
            var_51 *= ((/* implicit */unsigned char) (+(((/* implicit */int) arr_32 [i_9 + 1] [i_9 + 1] [i_9 + 1]))));
            var_52 = ((/* implicit */int) ((unsigned char) (signed char)-43));
            var_53 = ((/* implicit */_Bool) var_10);
        }
    }
}
