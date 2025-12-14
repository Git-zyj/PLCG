/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188250
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
    var_16 = ((/* implicit */signed char) (+(((/* implicit */int) min((((/* implicit */short) (signed char)-112)), ((short)(-32767 - 1)))))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_17 = ((/* implicit */long long int) max((((var_12) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)31))) : (2181359412U))), (((/* implicit */unsigned int) max(((short)32767), (((/* implicit */short) min((arr_0 [i_0]), (var_13)))))))));
        var_18 -= ((/* implicit */unsigned short) (-(174702223433719129ULL)));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-123)) != (((/* implicit */int) (signed char)-110))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 16; i_1 += 4) 
    {
        var_19 = ((/* implicit */unsigned int) arr_4 [i_1] [i_1]);
        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (max((((/* implicit */unsigned long long int) (signed char)122)), (12417398722654790751ULL))))))))));
        /* LoopSeq 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-123)) || (((/* implicit */_Bool) (signed char)47)))))));
            var_22 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-111)) ? (2586367346U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)113)))));
            arr_8 [i_2] = ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */long long int) ((/* implicit */int) (short)32767))) : (-8077186101120342980LL));
        }
        /* vectorizable */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
        {
            var_23 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((unsigned int) (signed char)-126))) > ((+(-6765726572102423015LL)))));
            arr_12 [i_1 - 2] [i_1 - 2] [i_3] = ((/* implicit */int) ((unsigned int) (~(-2139069263))));
            var_24 *= ((/* implicit */unsigned long long int) var_14);
            /* LoopNest 2 */
            for (long long int i_4 = 2; i_4 < 15; i_4 += 4) 
            {
                for (signed char i_5 = 3; i_5 < 14; i_5 += 2) 
                {
                    {
                        var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_4 + 2])) || (((/* implicit */_Bool) (unsigned short)29158))));
                        /* LoopSeq 1 */
                        for (unsigned short i_6 = 0; i_6 < 17; i_6 += 2) 
                        {
                            var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) (short)32767))) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))))));
                            var_27 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) (unsigned char)171))) ? (((/* implicit */int) ((15130339645115389562ULL) == (var_3)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255)))))));
                            arr_22 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_17 [i_1] [i_3] [i_4 + 2] [i_5 - 2])) ? (((/* implicit */int) (signed char)114)) : (((/* implicit */int) (_Bool)0))));
                        }
                        arr_23 [i_3] [i_3] [i_4 - 2] [i_5] = ((/* implicit */unsigned int) ((long long int) -8077186101120342994LL));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 2) 
            {
                /* LoopNest 2 */
                for (short i_8 = 0; i_8 < 17; i_8 += 4) 
                {
                    for (long long int i_9 = 0; i_9 < 17; i_9 += 4) 
                    {
                        {
                            var_28 = ((/* implicit */short) (signed char)-116);
                            var_29 = (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL))));
                            var_30 = ((/* implicit */int) (_Bool)1);
                        }
                    } 
                } 
                arr_32 [i_3] [i_3] [i_3] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) 4294967295U)) || (((/* implicit */_Bool) arr_14 [i_1] [i_1] [i_1 - 1] [i_1 - 2]))));
                var_31 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (2147483635) : (((/* implicit */int) var_13))))) || (((/* implicit */_Bool) 0LL))));
                arr_33 [i_1] |= ((/* implicit */_Bool) (~(((/* implicit */int) ((var_10) != (var_8))))));
                var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) var_13))));
            }
        }
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
        {
            var_33 = ((/* implicit */unsigned short) (+(min((((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)-126)) + (2147483647))) >> (((var_2) - (11078191043278079641ULL)))))), (511U)))));
            /* LoopNest 2 */
            for (long long int i_11 = 0; i_11 < 17; i_11 += 4) 
            {
                for (signed char i_12 = 2; i_12 < 16; i_12 += 1) 
                {
                    {
                        var_34 *= ((/* implicit */signed char) (-(5941374866720633501ULL)));
                        var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_15), (((/* implicit */short) ((((/* implicit */_Bool) -2147483636)) && (((/* implicit */_Bool) (signed char)-103)))))))) || ((!(((/* implicit */_Bool) ((unsigned long long int) (unsigned char)0)))))));
                    }
                } 
            } 
            var_36 ^= 1763543265;
        }
    }
    for (unsigned short i_13 = 1; i_13 < 24; i_13 += 1) /* same iter space */
    {
        var_37 -= ((/* implicit */signed char) ((int) (!(((/* implicit */_Bool) arr_42 [i_13 - 1] [(signed char)18])))));
        var_38 *= min((max((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) != (var_3)))), (((((/* implicit */_Bool) var_4)) ? (arr_43 [(short)0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_42 [(_Bool)1] [(_Bool)1]))))))), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-32766)))))) != (var_5)))));
        /* LoopSeq 2 */
        for (unsigned char i_14 = 0; i_14 < 25; i_14 += 2) 
        {
            var_39 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) (short)-19716)) != (((/* implicit */int) (unsigned char)255))))) == (-2147483636)));
            arr_48 [i_14] [i_14] &= ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)0)), ((short)-19716)))) ? (max((((/* implicit */long long int) 380458439)), (var_5))) : (((/* implicit */long long int) var_6))))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (long long int i_15 = 0; i_15 < 25; i_15 += 4) 
            {
                var_40 = ((/* implicit */long long int) (((((+(((/* implicit */int) (short)(-32767 - 1))))) + (2147483647))) >> (((((/* implicit */int) var_14)) + (2676)))));
                var_41 += ((/* implicit */signed char) (~(((((/* implicit */_Bool) (signed char)93)) ? (((/* implicit */int) (unsigned short)61751)) : (((/* implicit */int) var_13))))));
            }
            for (unsigned long long int i_16 = 0; i_16 < 25; i_16 += 1) /* same iter space */
            {
                var_42 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned int) (~(-2147483636)))))));
                var_43 -= ((/* implicit */short) (signed char)-117);
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned short i_17 = 0; i_17 < 25; i_17 += 2) 
                {
                    var_44 = ((/* implicit */unsigned long long int) ((unsigned short) 0ULL));
                    var_45 = ((/* implicit */unsigned long long int) min((var_45), (((/* implicit */unsigned long long int) (signed char)28))));
                    var_46 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_46 [i_13] [i_13 + 1] [i_14])) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)255)) || (((/* implicit */_Bool) (signed char)-85))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_4)))))));
                }
                for (short i_18 = 0; i_18 < 25; i_18 += 4) 
                {
                    arr_60 [i_13] [i_13 - 1] [i_14] [i_16] [i_16] [i_13] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32757)) ? (2951916584U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)103)))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)28485))) ? (((/* implicit */long long int) arr_53 [i_13 - 1] [i_13 - 1] [i_13 + 1])) : (max((((/* implicit */long long int) 0U)), (var_5))))))));
                    var_47 |= ((/* implicit */unsigned long long int) (short)-20797);
                }
                for (unsigned long long int i_19 = 1; i_19 < 22; i_19 += 4) 
                {
                    arr_64 [i_13] [i_13] [(signed char)11] = ((/* implicit */unsigned int) (~(-2147483639)));
                    arr_65 [i_13] [i_13] = var_12;
                    var_48 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_54 [i_16]))));
                    var_49 = ((/* implicit */unsigned long long int) min((var_49), (((/* implicit */unsigned long long int) max((((long long int) max((((/* implicit */unsigned int) var_15)), (var_0)))), (((/* implicit */long long int) ((6893044912413785959ULL) > (((/* implicit */unsigned long long int) 1109266934))))))))));
                }
                var_50 ^= ((/* implicit */unsigned long long int) var_0);
            }
            for (unsigned long long int i_20 = 0; i_20 < 25; i_20 += 1) /* same iter space */
            {
                var_51 = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */int) var_7)) > (((/* implicit */int) (signed char)-110)))))));
                var_52 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) max((((/* implicit */short) arr_66 [(unsigned short)23] [i_20])), (var_7)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) : (((((/* implicit */_Bool) (short)-26043)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-26043))) : (var_3))))), (((((/* implicit */_Bool) 2147483635)) ? (18446744073709551615ULL) : (16314786223898808998ULL)))));
                /* LoopSeq 1 */
                for (short i_21 = 0; i_21 < 25; i_21 += 1) 
                {
                    var_53 -= ((/* implicit */unsigned int) var_11);
                    arr_72 [i_20] [i_20] [i_13] [i_20] = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) (short)-32765)) && (((/* implicit */_Bool) 18446744073709551615ULL)))));
                    arr_73 [i_13] [i_14] [i_13] [i_14] = ((/* implicit */int) ((((/* implicit */_Bool) 2306333278U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2733))) : (0ULL)));
                    var_54 = ((/* implicit */unsigned int) max((var_54), (((/* implicit */unsigned int) 14598037774233572730ULL))));
                }
            }
        }
        /* vectorizable */
        for (signed char i_22 = 2; i_22 < 21; i_22 += 2) 
        {
            /* LoopSeq 1 */
            for (int i_23 = 0; i_23 < 25; i_23 += 4) 
            {
                arr_78 [i_13] [i_13] [12LL] [i_23] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_55 [i_23] [i_22 + 1] [i_22 + 4] [i_13])) ? (((/* implicit */int) (unsigned char)30)) : (((/* implicit */int) (signed char)25))))) || (((2116296707) != (((/* implicit */int) (unsigned short)65516))))));
                var_55 = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) (short)30704)) || (((/* implicit */_Bool) 2834906163U)))))));
                arr_79 [i_23] [i_22] [i_22] [i_13 - 1] |= ((/* implicit */short) (!((!((_Bool)1)))));
                var_56 = ((/* implicit */signed char) max((var_56), (((/* implicit */signed char) ((unsigned char) (((_Bool)1) || (((/* implicit */_Bool) 5558648911800648754ULL))))))));
                var_57 = ((/* implicit */long long int) (unsigned short)15879);
            }
            var_58 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1692081558)) ? (((/* implicit */int) (unsigned short)20)) : (((/* implicit */int) (_Bool)1))));
        }
        var_59 += ((/* implicit */int) (!(((/* implicit */_Bool) (short)2732))));
    }
    /* vectorizable */
    for (unsigned short i_24 = 1; i_24 < 24; i_24 += 1) /* same iter space */
    {
        arr_83 [i_24] [i_24 + 1] = ((/* implicit */int) ((short) var_8));
        var_60 += ((/* implicit */unsigned long long int) (unsigned char)221);
        var_61 = (-(2147483636));
        arr_84 [i_24] [(unsigned char)15] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_76 [i_24 + 1]))));
    }
    var_62 = ((/* implicit */unsigned long long int) ((short) max((((/* implicit */unsigned long long int) var_14)), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (var_10))))));
    /* LoopSeq 1 */
    for (unsigned int i_25 = 0; i_25 < 17; i_25 += 1) 
    {
        arr_89 [i_25] = var_1;
        var_63 = ((((/* implicit */_Bool) 5941374866720633501ULL)) ? (((/* implicit */int) (short)-30704)) : (((/* implicit */int) (unsigned char)0)));
        var_64 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 451980406U)) ? (((/* implicit */int) ((5941374866720633501ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-81)))))) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_80 [i_25] [i_25])) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_9)) != (((/* implicit */int) (signed char)80)))))))))));
    }
}
