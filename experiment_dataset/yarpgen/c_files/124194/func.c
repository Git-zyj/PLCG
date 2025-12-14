/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124194
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
    var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((signed char) var_8)))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_7) / (((((/* implicit */_Bool) (unsigned short)51295)) ? (arr_0 [i_0] [(unsigned short)11]) : (((/* implicit */unsigned long long int) arr_2 [i_0]))))))) ? (((((16383LL) < (((/* implicit */long long int) ((/* implicit */int) (unsigned short)25265))))) ? (max((arr_0 [i_0] [(short)11]), (arr_0 [i_0 + 2] [i_0 - 1]))) : (((/* implicit */unsigned long long int) var_9)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [(short)8] [i_0])) && ((_Bool)1)))))));
        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) max((((/* implicit */short) (_Bool)1)), ((short)-8719)))), (max((12591356547871103464ULL), (((/* implicit */unsigned long long int) var_9)))))) << (((((/* implicit */unsigned long long int) (((-9223372036854775807LL - 1LL)) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))) * (17800162247221078342ULL))))))));
        var_21 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((arr_1 [i_0 + 1] [i_0]), (arr_1 [i_0 + 1] [i_0]))))));
        /* LoopNest 2 */
        for (short i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        var_22 = ((/* implicit */unsigned char) (+((~(max((7494798554050805344ULL), (((/* implicit */unsigned long long int) (unsigned char)128))))))));
                        var_23 ^= ((/* implicit */int) (short)-19);
                        var_24 &= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_7 [4ULL])), (var_10)))) ? (max((((/* implicit */unsigned long long int) ((signed char) arr_7 [i_0]))), ((+(15067211324621957657ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (short)5842)), (-16375LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) : (max((arr_7 [i_0]), (arr_7 [i_0]))))))));
                        arr_12 [i_2] [i_1] [i_2] [i_2] = ((/* implicit */unsigned long long int) arr_7 [i_1]);
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned long long int i_4 = 2; i_4 < 12; i_4 += 2) 
                        {
                            arr_15 [i_0] [i_1] [i_1] [i_0] [i_4] [i_0 + 1] [(_Bool)1] = ((/* implicit */signed char) (~(646581826488473274ULL)));
                            arr_16 [i_0] [i_0] [i_1] [(signed char)3] [i_0] [i_0] = ((/* implicit */_Bool) var_10);
                            var_25 -= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)9689)))))) != (((((/* implicit */_Bool) var_3)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)124)))))));
                        }
                        for (signed char i_5 = 1; i_5 < 10; i_5 += 1) 
                        {
                            var_26 = ((/* implicit */unsigned long long int) min((var_26), (((unsigned long long int) max((17203443721000549622ULL), (((/* implicit */unsigned long long int) (unsigned char)65)))))));
                            var_27 = ((/* implicit */signed char) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) + (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (7494798554050805328ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)8719)))))))));
                            var_28 ^= ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */int) (_Bool)1)) < (((((/* implicit */_Bool) (unsigned char)124)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_12)))))));
                            var_29 ^= ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) -3923391532792292257LL)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-43)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 646581826488473260ULL)))) : (max((3458764513820540928ULL), (((/* implicit */unsigned long long int) arr_18 [i_5 + 2] [i_1] [i_2] [i_3] [i_3])))))) >> (((((((/* implicit */int) max(((unsigned short)112), ((unsigned short)2)))) ^ (((/* implicit */int) max((arr_1 [i_5 + 1] [i_1]), (((/* implicit */unsigned char) arr_14 [i_0] [i_0] [i_2] [i_3] [i_3] [2ULL] [i_2]))))))) - (163)))));
                        }
                    }
                    for (int i_6 = 0; i_6 < 13; i_6 += 2) 
                    {
                        arr_24 [i_0] [i_1] [i_2] [i_6] = ((/* implicit */short) ((((((/* implicit */_Bool) var_12)) ? (arr_2 [i_1 - 1]) : (var_10))) < (((/* implicit */long long int) ((/* implicit */int) ((short) arr_9 [i_0] [i_0] [i_0] [i_0 - 1] [(_Bool)1] [3LL]))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_7 = 0; i_7 < 13; i_7 += 2) 
                        {
                            var_30 &= ((/* implicit */unsigned char) ((signed char) (-9223372036854775807LL - 1LL)));
                            var_31 ^= ((/* implicit */unsigned char) (!(arr_21 [i_6] [i_7] [(unsigned char)6] [i_0 + 3] [i_7] [i_0 + 3])));
                            var_32 *= ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_9 [(signed char)3] [(signed char)3] [(signed char)3] [i_2] [(signed char)3] [i_7])) ? (-1943924321592275354LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)120))))) | ((-(1943924321592275354LL)))));
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 0; i_8 < 13; i_8 += 3) 
                    {
                        for (short i_9 = 0; i_9 < 13; i_9 += 4) 
                        {
                            {
                                arr_32 [i_0] [i_1 - 1] [i_0] [i_1] = ((/* implicit */short) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_22 [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_16))))), (((((/* implicit */_Bool) arr_2 [i_0 + 2])) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [(_Bool)1] [(_Bool)1] [i_2] [i_8] [i_1])))))))), (max((((/* implicit */unsigned long long int) var_16)), (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (17203443721000549614ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))))));
                                var_33 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_15))));
                                arr_33 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) max(((~(((/* implicit */int) (signed char)90)))), (((/* implicit */int) ((((/* implicit */int) (unsigned char)112)) >= (((/* implicit */int) (signed char)120)))))))) ? (((unsigned long long int) (signed char)71)) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_31 [i_8] [i_1])) >> ((((~(((/* implicit */int) (signed char)117)))) + (145))))))));
                                arr_34 [i_0] [i_2] [(_Bool)1] [2ULL] [i_1] = ((((/* implicit */_Bool) var_11)) ? (((((((/* implicit */_Bool) (signed char)-120)) || (((/* implicit */_Bool) (unsigned short)51588)))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-117)), (arr_25 [i_0] [i_2] [i_1] [i_2]))))) : (max((((/* implicit */long long int) (unsigned short)49226)), (var_10))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (signed char)57)))));
                            }
                        } 
                    } 
                    var_34 |= ((/* implicit */unsigned char) ((((((/* implicit */int) max(((unsigned short)4707), (((/* implicit */unsigned short) (short)8726))))) | (((/* implicit */int) var_1)))) + (((((/* implicit */int) var_1)) + (((/* implicit */int) arr_25 [i_1 - 1] [i_1] [(signed char)8] [(unsigned short)8]))))));
                    var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((max((var_3), (((/* implicit */unsigned short) (_Bool)1)))), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)65534)) != (((/* implicit */int) var_1)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-1)) >= (((/* implicit */int) (signed char)11))))), (max((var_1), (arr_29 [i_2] [i_1 + 3] [i_1] [i_1]))))))) : ((((!(((/* implicit */_Bool) var_0)))) ? (((((/* implicit */_Bool) arr_23 [(unsigned char)0] [i_1] [i_2] [(short)8])) ? (4116488772287853133ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)85))))) : (max((12263150137654172853ULL), (((/* implicit */unsigned long long int) var_17))))))));
                    var_36 = ((((/* implicit */_Bool) max(((unsigned short)32275), (((/* implicit */unsigned short) ((((/* implicit */int) arr_31 [i_0 - 1] [i_1])) > (((/* implicit */int) var_15)))))))) ? (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) && (((/* implicit */_Bool) arr_28 [(_Bool)1] [(_Bool)1] [i_1] [(unsigned short)12] [i_0])))))) % (((-5177989541738734452LL) / (((/* implicit */long long int) ((/* implicit */int) (short)9264))))))) : (((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_6 [0LL] [i_1 - 1] [i_2] [i_2])) ? (((/* implicit */int) (signed char)103)) : (((/* implicit */int) (unsigned char)228))))))));
                }
            } 
        } 
        var_37 = ((/* implicit */unsigned char) 255ULL);
    }
    for (signed char i_10 = 0; i_10 < 11; i_10 += 2) /* same iter space */
    {
        var_38 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_10] [i_10] [i_10] [i_10] [i_10])) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [(signed char)5] [i_10] [i_10] [i_10])))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4105))) != (12199535820463272910ULL)))) : (((/* implicit */int) (!((_Bool)1))))));
        var_39 = ((/* implicit */long long int) ((_Bool) (~(((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (70360154243072ULL))))));
        var_40 = ((/* implicit */signed char) min((var_40), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_29 [i_10] [i_10] [i_10] [i_10])) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_23 [(unsigned char)4] [i_10] [i_10] [i_10]))))) : (((((((/* implicit */_Bool) -1LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (5177989541738734446LL))) ^ (((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)15), ((unsigned char)64))))))))))));
        var_41 = ((short) (unsigned short)65535);
        var_42 *= ((/* implicit */signed char) (-(((/* implicit */int) var_6))));
    }
    /* vectorizable */
    for (signed char i_11 = 0; i_11 < 11; i_11 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (long long int i_12 = 0; i_12 < 11; i_12 += 4) 
        {
            arr_44 [i_11] [(unsigned short)8] [i_12] = ((/* implicit */unsigned short) ((8831083950361844227ULL) - (((((/* implicit */_Bool) (unsigned short)6277)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16946)))))));
            var_43 = ((/* implicit */unsigned long long int) ((unsigned char) (-(((/* implicit */int) arr_6 [i_11] [4ULL] [i_11] [i_11])))));
            arr_45 [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_12] [i_11] [i_11] [i_11])) && (((/* implicit */_Bool) 1604867581U))));
            /* LoopNest 2 */
            for (short i_13 = 0; i_13 < 11; i_13 += 3) 
            {
                for (unsigned long long int i_14 = 2; i_14 < 10; i_14 += 4) 
                {
                    {
                        var_44 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_5 [i_11] [i_14 - 1])) - (((/* implicit */int) arr_5 [i_11] [i_14 - 1]))));
                        var_45 |= ((/* implicit */unsigned char) ((var_2) + (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_37 [i_13]))))))));
                        var_46 = ((/* implicit */unsigned long long int) min((var_46), (((/* implicit */unsigned long long int) ((arr_22 [i_14 - 1]) / (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)55)) : (-2147483647)))))))));
                        var_47 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_12] [i_12] [i_14] [i_14 - 2])) ? (((/* implicit */int) arr_13 [i_11] [i_11] [i_12] [i_12] [2LL] [i_14 + 1] [i_14 + 1])) : (((/* implicit */int) arr_20 [i_14 + 1] [i_14] [i_14 + 1] [i_14] [i_14 - 2]))));
                        /* LoopSeq 3 */
                        for (int i_15 = 0; i_15 < 11; i_15 += 2) 
                        {
                            var_48 = ((/* implicit */unsigned int) var_5);
                            var_49 = ((/* implicit */unsigned short) ((arr_43 [i_14 - 1]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_14 + 1] [i_14 - 2] [i_12] [i_14 - 2])))));
                        }
                        for (unsigned short i_16 = 1; i_16 < 10; i_16 += 1) 
                        {
                            var_50 |= ((/* implicit */unsigned char) ((short) var_7));
                            arr_54 [i_12] [i_12] [i_13] [i_14] [i_16] [6ULL] = ((/* implicit */long long int) ((((/* implicit */int) ((var_11) >= (var_8)))) - (((/* implicit */int) arr_42 [i_13]))));
                        }
                        for (signed char i_17 = 1; i_17 < 10; i_17 += 3) 
                        {
                            var_51 = ((/* implicit */unsigned short) (~(((/* implicit */int) (short)11403))));
                            arr_57 [i_11] [i_12] [i_13] [i_13] [i_13] [(unsigned char)6] [i_17] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) arr_30 [i_11] [i_14 - 2] [i_14 - 1] [i_14 - 1] [i_14 - 1]))));
                            var_52 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_2))));
                            var_53 = ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_11] [i_14 - 2] [i_13] [i_12] [i_17 + 1] [i_12])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)125))) : (var_10)));
                        }
                    }
                } 
            } 
            arr_58 [i_11] [i_12] [i_11] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)10)) / (((((/* implicit */_Bool) 5177989541738734451LL)) ? (((/* implicit */int) (unsigned char)246)) : (((/* implicit */int) (unsigned short)36153))))));
        }
        var_54 -= ((((((/* implicit */_Bool) (unsigned short)65532)) && (((/* implicit */_Bool) var_18)))) && ((!(((/* implicit */_Bool) (unsigned char)2)))));
    }
    var_55 += ((/* implicit */short) ((5575168870277187415ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)23)))));
    var_56 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 1099511627776ULL)) ? (12ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)20676))))) / (((/* implicit */unsigned long long int) ((((/* implicit */int) var_16)) << (((((var_10) + (6859820184642298594LL))) - (20LL))))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)189))) : (max((max((((/* implicit */unsigned long long int) (signed char)64)), (4611686017353646080ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)64)) : (((/* implicit */int) var_16)))))))));
    var_57 = ((((/* implicit */_Bool) (-(((((/* implicit */int) var_6)) / (((/* implicit */int) (signed char)82))))))) ? (((((/* implicit */_Bool) ((signed char) var_15))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (unsigned char)64)) : (((/* implicit */int) (_Bool)0))))) : (((18446742974197923840ULL) * (12ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) max(((short)-12), (((/* implicit */short) var_6))))) == ((+(((/* implicit */int) (signed char)-93)))))))));
}
