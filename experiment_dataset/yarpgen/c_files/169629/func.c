/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169629
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 10; i_0 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    arr_6 [0LL] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2])) ? (((/* implicit */int) var_11)) : ((-2147483647 - 1)))) > (((/* implicit */int) var_10))));
                    arr_7 [i_0] = ((/* implicit */long long int) (~(2147483647)));
                    arr_8 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((((((/* implicit */int) var_13)) + (2147483647))) >> (((arr_2 [i_0]) + (5922121354830965371LL)))))) : (((unsigned int) arr_2 [i_0]))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned short i_3 = 0; i_3 < 11; i_3 += 2) 
        {
            var_14 *= ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_6)) ? (2076127109243264237LL) : (var_0)))));
            /* LoopNest 3 */
            for (short i_4 = 3; i_4 < 9; i_4 += 1) 
            {
                for (signed char i_5 = 0; i_5 < 11; i_5 += 2) 
                {
                    for (short i_6 = 0; i_6 < 11; i_6 += 4) 
                    {
                        {
                            arr_21 [i_6] [i_5] [i_4] [i_0] [i_0] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (1722820772U)))));
                            arr_22 [i_3] [i_5] [(signed char)5] [i_3] [(signed char)3] [(signed char)3] = ((((/* implicit */_Bool) -2076127109243264237LL)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)32767)))))) : (arr_2 [i_3]));
                        }
                    } 
                } 
            } 
        }
        arr_23 [i_0] = ((/* implicit */short) arr_10 [i_0]);
    }
    for (signed char i_7 = 2; i_7 < 10; i_7 += 4) /* same iter space */
    {
        /* LoopSeq 3 */
        for (signed char i_8 = 1; i_8 < 10; i_8 += 1) /* same iter space */
        {
            var_15 |= ((/* implicit */long long int) ((((/* implicit */long long int) ((int) ((arr_9 [i_7] [i_7] [i_7]) | (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))) == (max((((/* implicit */long long int) ((((/* implicit */int) var_8)) << ((((((((-2147483647 - 1)) - (-2147483647))) + (28))) - (7)))))), (min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) -959487580))))))));
            var_16 = ((((/* implicit */long long int) (-(((/* implicit */int) var_7))))) | (72057594037927935LL));
            var_17 = ((/* implicit */unsigned long long int) arr_15 [i_7] [i_7] [i_8 + 1] [i_8]);
            /* LoopNest 2 */
            for (unsigned short i_9 = 0; i_9 < 11; i_9 += 4) 
            {
                for (long long int i_10 = 0; i_10 < 11; i_10 += 4) 
                {
                    {
                        var_18 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) -4113581558066266750LL)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) var_13))))) / (((/* implicit */long long int) ((/* implicit */int) var_6)))))) != (((((/* implicit */unsigned long long int) (-(0LL)))) / (var_12)))));
                        var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) (_Bool)0))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned long long int i_11 = 0; i_11 < 11; i_11 += 4) /* same iter space */
                        {
                            var_20 &= ((/* implicit */short) var_3);
                            var_21 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) <= (9223372036854775807LL)));
                        }
                        for (unsigned long long int i_12 = 0; i_12 < 11; i_12 += 4) /* same iter space */
                        {
                            arr_40 [i_7] [i_7] = ((/* implicit */int) ((_Bool) ((unsigned long long int) var_0)));
                            arr_41 [i_7] [i_8] [1ULL] [i_10] [i_12] = ((/* implicit */long long int) (signed char)26);
                            var_22 += ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (signed char)127)), ((unsigned short)63439)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max(((signed char)111), ((signed char)-26))))))) : (((/* implicit */int) ((signed char) max((((/* implicit */long long int) (short)-27306)), (arr_25 [i_8])))))));
                            var_23 = (_Bool)1;
                        }
                        /* vectorizable */
                        for (unsigned long long int i_13 = 0; i_13 < 11; i_13 += 4) /* same iter space */
                        {
                            var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (arr_35 [i_13] [i_10] [i_9] [i_8] [i_7]))))));
                            arr_45 [i_9] [i_8] [i_7] = ((/* implicit */signed char) (~(((/* implicit */int) arr_27 [i_8] [i_9] [i_13]))));
                        }
                    }
                } 
            } 
        }
        for (signed char i_14 = 1; i_14 < 10; i_14 += 1) /* same iter space */
        {
            arr_48 [i_7] [i_14] [i_14] = ((/* implicit */_Bool) (signed char)-65);
            var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) ((((/* implicit */_Bool) ((int) (-(((/* implicit */int) arr_43 [i_14])))))) ? (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) 7274597865120686777LL))))), ((-(arr_33 [i_7] [i_7] [i_7] [i_7] [i_14] [i_7]))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))));
        }
        for (short i_15 = 3; i_15 < 10; i_15 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_16 = 0; i_16 < 11; i_16 += 4) 
            {
                var_26 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) 2076127109243264219LL))))) << (((((((/* implicit */int) var_13)) ^ (((/* implicit */int) var_1)))) + (265)))))) ? (max((arr_49 [i_7] [i_15] [i_15 - 3]), (arr_49 [i_7] [i_15] [i_15 - 2]))) : (((/* implicit */unsigned long long int) -9223372036854775807LL))));
                arr_55 [i_16] [i_15] [i_16] [i_16] = ((/* implicit */unsigned char) arr_11 [i_15] [i_7]);
            }
            for (int i_17 = 0; i_17 < 11; i_17 += 2) 
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_18 = 3; i_18 < 10; i_18 += 4) /* same iter space */
                {
                    var_27 = ((1099511627775LL) * (((/* implicit */long long int) (-(((/* implicit */int) var_4))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_19 = 4; i_19 < 10; i_19 += 2) 
                    {
                        var_28 += ((/* implicit */unsigned char) 2076127109243264262LL);
                        arr_63 [i_7] [i_7] [i_17] [i_17] [i_15] [i_19] = ((/* implicit */unsigned char) ((short) (-(var_9))));
                    }
                    arr_64 [10LL] [i_15] [i_17] [i_17] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_59 [i_7] [i_15] [i_7] [i_15 - 3])) ? (((((/* implicit */int) arr_32 [i_7] [i_15] [1U] [i_15] [i_17] [i_18])) + (((/* implicit */int) (short)32760)))) : (((((/* implicit */_Bool) (signed char)-65)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_11))))));
                    var_29 = ((/* implicit */signed char) arr_5 [i_7] [i_7]);
                }
                /* vectorizable */
                for (signed char i_20 = 3; i_20 < 10; i_20 += 4) /* same iter space */
                {
                    arr_67 [i_15] [i_17] [i_15] [i_15] [i_15] = ((/* implicit */unsigned char) ((((_Bool) arr_9 [i_15] [i_17] [i_20])) && (((((/* implicit */long long int) arr_35 [i_7] [i_15] [i_15] [i_17] [i_20])) == ((-9223372036854775807LL - 1LL))))));
                    arr_68 [i_20] [i_15] [i_15] [i_7] = ((/* implicit */unsigned short) (-(-1)));
                    arr_69 [i_7] [i_7] [i_15] [i_20] [i_20] = ((/* implicit */unsigned char) (~(var_9)));
                }
                var_30 = ((/* implicit */int) ((max((((/* implicit */long long int) var_4)), ((-9223372036854775807LL - 1LL)))) != (((((/* implicit */_Bool) arr_66 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-8))) : (arr_25 [i_7])))));
            }
            arr_70 [i_7] [i_7] [i_15] = ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) -1LL)) ? (arr_2 [i_7]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))))))) ? (((((/* implicit */_Bool) ((unsigned char) 959487580))) ? (((72057594037927935LL) >> (((9223372036854775802LL) - (9223372036854775750LL))))) : (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_15 + 1] [i_15] [3] [i_7 - 1] [i_7] [i_7]))))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_39 [i_7] [i_7] [i_7] [i_15] [i_15] [i_15]), (var_4)))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_21 = 0; i_21 < 11; i_21 += 4) 
            {
                /* LoopSeq 2 */
                for (long long int i_22 = 1; i_22 < 10; i_22 += 2) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_23 = 1; i_23 < 10; i_23 += 4) 
                    {
                        arr_79 [i_7] [i_7] [i_15] [i_15] [i_15] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) arr_16 [i_21] [i_15] [i_15])) ^ (2870246450359661497ULL))) >> (((((var_5) | (((/* implicit */unsigned int) ((/* implicit */int) arr_50 [i_15]))))) - (1656160131U)))))) ? ((~(arr_66 [i_15 - 3] [i_7] [8] [10] [i_7] [i_7 + 1]))) : (((/* implicit */long long int) (~((~(((/* implicit */int) var_1)))))))));
                        var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((~(var_0))) % (((/* implicit */long long int) ((/* implicit */int) (short)19453)))))) ? (9223372036854775807LL) : (((/* implicit */long long int) ((max((arr_35 [i_7] [i_21] [i_21] [i_21] [i_23]), (((/* implicit */int) (_Bool)1)))) * (((/* implicit */int) (!(((/* implicit */_Bool) 9549397689812483436ULL))))))))));
                    }
                    var_32 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) : (var_3)))) ? (arr_47 [i_15] [i_15]) : (((((/* implicit */_Bool) 1115185687)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-65))) : (arr_49 [i_7] [i_15] [i_15]))))));
                }
                for (short i_24 = 2; i_24 < 10; i_24 += 4) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_25 = 0; i_25 < 11; i_25 += 2) 
                    {
                        var_33 = ((/* implicit */long long int) ((short) arr_44 [i_7] [i_15] [i_21] [i_21] [i_7]));
                        arr_84 [i_25] [i_15] [i_21] [i_15] [i_7] = ((/* implicit */unsigned char) max((((((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_25]))) + (-9223372036854775803LL))) + (((/* implicit */long long int) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) arr_37 [(signed char)10] [(signed char)10] [i_21] [i_15] [i_15] [i_15] [i_7]))))))), (((/* implicit */long long int) max((min((2650235318U), (((/* implicit */unsigned int) (short)19442)))), (((/* implicit */unsigned int) (unsigned char)209)))))));
                        var_34 -= ((/* implicit */signed char) min((((long long int) (unsigned char)187)), (min((arr_12 [i_25] [i_24 - 1] [i_7 + 1] [i_7 + 1]), (((/* implicit */long long int) var_11))))));
                    }
                    arr_85 [i_15] [i_15] [i_21] [i_24] = ((/* implicit */int) ((unsigned char) (-(arr_25 [i_15 - 3]))));
                    var_35 = ((/* implicit */_Bool) (~(((((-517850677092565653LL) + (9223372036854775807LL))) >> (((((((/* implicit */int) var_13)) - (arr_51 [i_15] [i_21]))) - (224624985)))))));
                    arr_86 [i_24] [i_15] [i_15] [i_7] = ((/* implicit */long long int) var_2);
                }
                arr_87 [i_15] [i_15] [i_15] = ((/* implicit */_Bool) var_4);
            }
        }
        arr_88 [i_7 - 2] [i_7] &= ((/* implicit */int) var_3);
        var_36 = ((/* implicit */short) min((var_36), (((/* implicit */short) min((((/* implicit */long long int) ((_Bool) max((((/* implicit */short) var_11)), (var_6))))), (max((-8363635736211979257LL), (max((arr_14 [i_7]), (((/* implicit */long long int) var_13)))))))))));
    }
    for (signed char i_26 = 2; i_26 < 10; i_26 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_28 = 0; i_28 < 11; i_28 += 4) 
            {
                for (_Bool i_29 = 0; i_29 < 0; i_29 += 1) 
                {
                    for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
                    {
                        {
                            var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)26)) + ((~(((/* implicit */int) var_10))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_90 [i_28] [i_27]))) : (max((((/* implicit */long long int) (!(((/* implicit */_Bool) 4593671619917905920LL))))), (((((/* implicit */_Bool) arr_62 [i_26] [i_28] [i_29 + 1])) ? (arr_2 [i_29]) : (var_0)))))));
                            var_38 ^= ((((/* implicit */int) var_7)) < ((-(arr_92 [i_28] [i_29]))));
                        }
                    } 
                } 
            } 
            var_39 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)14)), (var_3))))))) <= (arr_71 [8ULL] [(_Bool)1])));
            var_40 = ((/* implicit */signed char) arr_31 [i_26]);
            /* LoopNest 3 */
            for (unsigned long long int i_31 = 0; i_31 < 11; i_31 += 2) 
            {
                for (unsigned int i_32 = 0; i_32 < 11; i_32 += 2) 
                {
                    for (unsigned char i_33 = 3; i_33 < 10; i_33 += 4) 
                    {
                        {
                            var_41 = ((/* implicit */unsigned short) ((_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)213)) * (((/* implicit */int) (unsigned char)48))))), (((((/* implicit */_Bool) arr_106 [i_27] [i_27] [i_27] [i_27])) ? (((/* implicit */unsigned long long int) -517850677092565660LL)) : (14144239341778531809ULL))))));
                            var_42 = ((/* implicit */short) max((((/* implicit */unsigned int) var_4)), (((((/* implicit */unsigned int) ((/* implicit */int) var_8))) - (2349251226U)))));
                            var_43 = ((/* implicit */long long int) max((var_43), (max(((~(-3248540151081047997LL))), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) >= (7923425545539049383ULL))))))));
                        }
                    } 
                } 
            } 
        }
        arr_109 [i_26] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-4)) + (2147483647))) >> (((((/* implicit */int) (unsigned short)34658)) - (34648))))))));
    }
    for (long long int i_34 = 0; i_34 < 10; i_34 += 4) 
    {
        arr_112 [i_34] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_95 [i_34])) ? ((~(((/* implicit */int) var_7)))) : (((/* implicit */int) max((((/* implicit */unsigned short) var_4)), (var_7))))));
        /* LoopNest 2 */
        for (signed char i_35 = 2; i_35 < 8; i_35 += 4) 
        {
            for (long long int i_36 = 0; i_36 < 10; i_36 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_37 = 0; i_37 < 10; i_37 += 2) 
                    {
                        for (int i_38 = 0; i_38 < 10; i_38 += 1) 
                        {
                            {
                                arr_125 [i_38] [i_38] [i_38] [3LL] [i_38] [i_34] [i_34] = ((/* implicit */long long int) 7923425545539049383ULL);
                                var_44 = ((/* implicit */int) ((((/* implicit */_Bool) ((short) (~(((/* implicit */int) var_2)))))) ? (arr_101 [i_34] [i_35] [i_36] [i_37] [i_38]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((int) var_5)) != (((/* implicit */int) var_2))))))));
                            }
                        } 
                    } 
                    arr_126 [i_34] [i_34] [i_35] [i_36] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)210)) ? (517850677092565652LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_36] [i_35])))))) ? (var_9) : (((((/* implicit */int) min((arr_95 [i_34]), ((unsigned char)31)))) >> (((/* implicit */int) var_11))))));
                }
            } 
        } 
    }
    var_45 = ((((/* implicit */int) (unsigned char)184)) / (((/* implicit */int) (unsigned char)214)));
}
