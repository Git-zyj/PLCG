/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171690
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
    var_13 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-68))) + (12932053253755634037ULL))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)128)) && (((/* implicit */_Bool) (unsigned char)127)))))) : (4294967275U))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 10; i_0 += 2) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0 - 2] [i_0])) && (((/* implicit */_Bool) (unsigned char)91))));
        arr_4 [i_0] [i_0 + 1] = ((/* implicit */unsigned int) ((arr_1 [i_0 - 1]) > (var_6)));
    }
    for (long long int i_1 = 2; i_1 < 10; i_1 += 2) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 1) /* same iter space */
        {
            arr_9 [i_1] [i_2] = ((((/* implicit */_Bool) 12932053253755634047ULL)) ? (((12932053253755634055ULL) * (((/* implicit */unsigned long long int) arr_5 [i_1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)82))));
            arr_10 [i_2] [1] [i_1] = ((/* implicit */unsigned int) min((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)199))) / (8906535059425181950LL))), (((/* implicit */long long int) (-(((/* implicit */int) (signed char)100)))))));
            arr_11 [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)0)) * (((/* implicit */int) ((unsigned short) ((-338154887) / (var_7)))))));
            var_15 = ((/* implicit */long long int) (~(((/* implicit */int) ((unsigned short) var_7)))));
        }
        for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 1) /* same iter space */
        {
            var_16 = ((/* implicit */int) min((var_16), ((+(((/* implicit */int) (unsigned char)112))))));
            /* LoopNest 3 */
            for (long long int i_4 = 0; i_4 < 12; i_4 += 3) 
            {
                for (unsigned short i_5 = 2; i_5 < 8; i_5 += 3) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 2) 
                    {
                        {
                            var_17 ^= ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)146)) ? (25LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)67)))));
                            arr_22 [i_1] [i_1 + 1] [i_5] [i_4] [i_5 + 1] [7LL] [i_6] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) (signed char)-67)), ((unsigned char)174)));
                            arr_23 [i_1] [i_5] [i_4] [i_5] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)75)) % (((/* implicit */int) (unsigned char)1))));
                        }
                    } 
                } 
            } 
            var_18 = ((long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -18LL)) ? (((/* implicit */long long int) var_12)) : (var_5)))) * (max((((/* implicit */unsigned long long int) 8LL)), (12932053253755634015ULL)))));
            /* LoopSeq 3 */
            for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 2) 
            {
                arr_26 [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (8906535059425181960LL) : (((/* implicit */long long int) arr_21 [i_1 + 1] [i_1 - 1] [i_1]))))) || (((/* implicit */_Bool) (~(12932053253755634016ULL))))));
                /* LoopNest 2 */
                for (signed char i_8 = 0; i_8 < 12; i_8 += 4) 
                {
                    for (long long int i_9 = 2; i_9 < 10; i_9 += 4) 
                    {
                        {
                            arr_31 [i_3] [i_3] = ((((((/* implicit */long long int) ((/* implicit */int) (signed char)64))) / (5414765765714727570LL))) * (((/* implicit */long long int) ((/* implicit */int) (unsigned short)23183))));
                            var_19 &= ((/* implicit */long long int) arr_21 [i_1] [i_7] [i_8]);
                        }
                    } 
                } 
            }
            for (unsigned int i_10 = 2; i_10 < 10; i_10 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_11 = 3; i_11 < 9; i_11 += 4) 
                {
                    arr_36 [(signed char)0] [i_3] [i_10 - 1] [10ULL] = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)194))));
                    var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) 18446744073709551615ULL))));
                }
                /* vectorizable */
                for (unsigned int i_12 = 0; i_12 < 12; i_12 += 2) 
                {
                    var_21 -= ((/* implicit */signed char) (-(67043328U)));
                    var_22 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((-18LL) | (((/* implicit */long long int) ((/* implicit */int) (signed char)27))))))));
                    var_23 -= ((((/* implicit */_Bool) arr_17 [i_10 - 1] [i_10 - 1] [i_10 - 2] [i_1])) ? (67043309U) : (((/* implicit */unsigned int) arr_24 [i_10 + 2] [i_10] [2LL] [i_10 + 2])));
                    var_24 = ((/* implicit */signed char) ((arr_24 [i_1] [i_3] [i_10] [i_12]) == ((+(((/* implicit */int) (signed char)-60))))));
                }
                var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_10 - 2] [i_10] [i_10])) ? (var_5) : (arr_16 [i_10 + 2] [i_10] [i_10])))) ? (((/* implicit */long long int) (((+(((/* implicit */int) (signed char)-27)))) | (((/* implicit */int) ((5514690819953917590ULL) >= (arr_19 [i_10 - 2] [i_3] [(unsigned char)7] [i_1] [i_1] [i_1 + 2] [i_1]))))))) : (((((0LL) << (((var_12) - (1824536415U))))) << (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)36))) : (arr_5 [i_3])))))));
            }
            for (unsigned long long int i_13 = 0; i_13 < 12; i_13 += 3) 
            {
                var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) min((((/* implicit */int) (unsigned short)8184)), (-2030437243))))));
                var_27 = ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) -517223973)) ? (((/* implicit */int) (unsigned short)60497)) : (((/* implicit */int) (unsigned char)128))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)89)) : (((/* implicit */int) (unsigned char)128))))) ? (((/* implicit */int) (unsigned char)144)) : (((/* implicit */int) (signed char)47))))) : (((((/* implicit */long long int) ((/* implicit */int) (signed char)-37))) / (var_5))));
                /* LoopNest 2 */
                for (unsigned short i_14 = 1; i_14 < 11; i_14 += 1) 
                {
                    for (long long int i_15 = 0; i_15 < 12; i_15 += 4) 
                    {
                        {
                            var_28 = ((/* implicit */unsigned long long int) (signed char)-49);
                            arr_47 [i_13] [i_3] [i_13] [i_14] [i_14] [6ULL] = ((/* implicit */int) var_5);
                        }
                    } 
                } 
                var_29 = ((/* implicit */signed char) min((((/* implicit */long long int) (signed char)63)), (min((((/* implicit */long long int) (signed char)49)), (33LL)))));
            }
        }
        for (unsigned short i_16 = 0; i_16 < 12; i_16 += 4) 
        {
            arr_50 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (+(1464987708U)));
            arr_51 [i_1] = ((/* implicit */int) ((unsigned long long int) ((unsigned int) (unsigned char)156)));
        }
        var_30 = ((/* implicit */unsigned int) arr_45 [10LL] [i_1] [i_1 - 2] [i_1] [i_1 - 2]);
        arr_52 [i_1 - 1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)137))) : (-19LL)))) ? (min((var_10), (-8485629607767443871LL))) : (-41LL)));
        var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) (+(max((((/* implicit */unsigned int) (unsigned char)144)), (1347089604U))))))));
        /* LoopNest 2 */
        for (unsigned short i_17 = 0; i_17 < 12; i_17 += 4) 
        {
            for (int i_18 = 0; i_18 < 12; i_18 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_19 = 3; i_19 < 8; i_19 += 1) 
                    {
                        for (long long int i_20 = 2; i_20 < 11; i_20 += 4) 
                        {
                            {
                                arr_64 [i_1] [10LL] [i_18] [i_17] [i_20] [i_20 + 1] [i_18] |= ((/* implicit */unsigned int) 17592118935552LL);
                                var_32 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)81))))) && (((/* implicit */_Bool) var_4))))), (max((((/* implicit */long long int) (signed char)-123)), (51818573885529017LL)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_21 = 0; i_21 < 12; i_21 += 4) 
                    {
                        for (long long int i_22 = 0; i_22 < 12; i_22 += 2) 
                        {
                            {
                                var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) (unsigned short)8195))));
                                var_34 = ((/* implicit */unsigned int) (((((((-9223372036854775807LL - 1LL)) + (9223372036854775807LL))) + (9223372036854775807LL))) >> (((((/* implicit */int) (unsigned char)144)) - (128)))));
                                arr_70 [i_1] [i_17] [i_18] [i_21] [3] [i_17] = ((long long int) (-(arr_55 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 + 2])));
                                var_35 = ((/* implicit */unsigned int) max((var_35), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 3841903124U)) * (8444498926346515046ULL))))));
                            }
                        } 
                    } 
                    var_36 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)42920))));
                    /* LoopNest 2 */
                    for (unsigned int i_23 = 3; i_23 < 10; i_23 += 1) 
                    {
                        for (signed char i_24 = 1; i_24 < 10; i_24 += 3) 
                        {
                            {
                                var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_74 [i_24] [i_24] [i_24] [i_24 + 2] [i_24] [i_24 + 1])) ? (max((arr_37 [i_24] [i_24] [i_24] [i_24 + 2] [i_24] [i_24 + 1]), (arr_74 [i_24] [i_24] [i_24] [i_24 + 2] [i_24 + 2] [i_24 + 1]))) : ((+(752959649U)))));
                                arr_75 [i_1] [i_1] [i_18] [i_23] [i_24] = ((/* implicit */unsigned long long int) ((((unsigned int) (~(var_6)))) - (min((2729278713U), (((/* implicit */unsigned int) (unsigned short)35278))))));
                                var_38 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1 - 2])) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 67043309U))))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 16143052367327644556ULL)) ? (((/* implicit */int) arr_15 [i_1 - 1] [i_23 + 2] [i_24 + 1])) : (((((/* implicit */int) (signed char)-67)) * (((/* implicit */int) (unsigned short)59930))))))) : (((2046554947U) >> (((((/* implicit */int) (signed char)57)) - (45)))))));
                                var_39 += ((/* implicit */unsigned char) ((((/* implicit */long long int) 3841903124U)) <= (-5753914070568016659LL)));
                            }
                        } 
                    } 
                    var_40 = ((/* implicit */long long int) (((-(((/* implicit */int) ((-6334618661677641821LL) > (((/* implicit */long long int) ((/* implicit */int) (unsigned short)12288)))))))) / (((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)148))))));
                }
            } 
        } 
    }
    for (long long int i_25 = 2; i_25 < 10; i_25 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_26 = 0; i_26 < 12; i_26 += 4) 
        {
            for (unsigned long long int i_27 = 1; i_27 < 10; i_27 += 4) 
            {
                {
                    arr_83 [i_25 + 1] [i_26] = ((/* implicit */signed char) ((unsigned short) (!(((/* implicit */_Bool) -1LL)))));
                    /* LoopSeq 2 */
                    for (long long int i_28 = 0; i_28 < 12; i_28 += 4) 
                    {
                        arr_86 [i_25] [i_25] [i_25 + 1] [i_25] [i_25] [i_25 + 2] = ((/* implicit */unsigned long long int) ((((((-1508386116122640006LL) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)-64))))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)51)) ? (((/* implicit */int) (signed char)62)) : (((/* implicit */int) (unsigned char)109))))))) <= (((/* implicit */long long int) (-(((/* implicit */int) (signed char)-77)))))));
                        var_41 = ((/* implicit */int) ((long long int) ((4227923995U) ^ (((((/* implicit */_Bool) 1607629929U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32753))) : (2687337366U))))));
                        var_42 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_27 [i_27] [i_27] [i_27 - 1] [i_27 + 2] [i_28])))))));
                    }
                    /* vectorizable */
                    for (long long int i_29 = 0; i_29 < 12; i_29 += 4) 
                    {
                        arr_89 [i_25] [9U] [i_27] [i_27] = ((/* implicit */int) 2147483648U);
                        var_43 = ((/* implicit */unsigned int) min((var_43), (((/* implicit */unsigned int) 910731922656092756LL))));
                        arr_90 [i_25] [i_25] [i_25 - 1] [i_25] [i_25] = ((/* implicit */int) ((((/* implicit */_Bool) 2687337363U)) ? (((/* implicit */long long int) 2497104768U)) : (2598328685395232650LL)));
                    }
                    var_44 = ((/* implicit */unsigned int) max((var_44), (((((((/* implicit */_Bool) ((unsigned int) (signed char)12))) || (((/* implicit */_Bool) (signed char)62)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 5176881574749151053LL)))) : (((((((/* implicit */_Bool) (unsigned char)117)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2519))) : (4094224943U))) + (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)69)) | (985341433))))))))));
                }
            } 
        } 
        arr_91 [i_25] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)62))));
        var_45 = min((var_1), (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) & (var_9))))));
    }
    var_46 = ((/* implicit */unsigned long long int) max((var_46), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_6)))))));
}
