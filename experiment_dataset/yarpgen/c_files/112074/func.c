/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112074
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
    var_14 &= ((/* implicit */unsigned long long int) (signed char)-95);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)24746)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (min((((/* implicit */unsigned int) ((unsigned char) (unsigned char)114))), (((4279526417U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)14737)))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 17; i_1 += 2) /* same iter space */
        {
            var_16 = ((/* implicit */unsigned char) 4077904723U);
            var_17 = (+(((((/* implicit */_Bool) (signed char)9)) ? (13725642394438470681ULL) : (((/* implicit */unsigned long long int) var_13)))));
            var_18 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 13725642394438470681ULL)))) & (var_9)));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 17; i_2 += 2) /* same iter space */
        {
            /* LoopSeq 3 */
            for (long long int i_3 = 0; i_3 < 17; i_3 += 4) 
            {
                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_2] [(signed char)0])) - (((/* implicit */int) var_11))))) - (((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_3]))) : (arr_8 [i_0] [i_3])))));
                var_20 ^= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 13725642394438470681ULL)) && (((/* implicit */_Bool) 4721101679271080931ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_3) != (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2] [i_3]))))))) : (((((/* implicit */_Bool) arr_8 [i_0] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_9)))));
            }
            for (unsigned short i_4 = 0; i_4 < 17; i_4 += 3) /* same iter space */
            {
                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_0] [i_2])) ? (arr_7 [i_0] [i_2]) : (arr_7 [i_2] [i_4])));
                var_22 = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
                var_23 = ((((/* implicit */unsigned long long int) arr_2 [i_4] [i_4] [i_4])) & (((13725642394438470681ULL) / (((/* implicit */unsigned long long int) var_3)))));
            }
            for (unsigned short i_5 = 0; i_5 < 17; i_5 += 3) /* same iter space */
            {
                var_24 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)121))) == (4721101679271080926ULL)));
                var_25 = ((/* implicit */unsigned long long int) arr_10 [15] [i_2] [15]);
                arr_13 [i_0] [i_2] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [(unsigned char)14] [i_2])) ? (((/* implicit */int) (unsigned short)42860)) : (((((/* implicit */_Bool) 13725642394438470671ULL)) ? (((/* implicit */int) (unsigned char)120)) : (((/* implicit */int) (unsigned char)120))))));
                var_26 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) (unsigned char)136))) - ((+(((/* implicit */int) var_11))))));
            }
            var_27 = ((/* implicit */unsigned char) 1539501097U);
            arr_14 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)45521)) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)20015))))));
            var_28 = (unsigned char)119;
            /* LoopSeq 2 */
            for (long long int i_6 = 0; i_6 < 17; i_6 += 2) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 3) 
                {
                    var_29 = arr_11 [i_0] [i_2] [i_2] [i_2];
                    arr_21 [i_0] [i_2] [i_6] [i_0] = var_4;
                }
                for (unsigned char i_8 = 0; i_8 < 17; i_8 += 2) 
                {
                    var_30 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_10))));
                    var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_23 [i_0] [i_2])) && (((/* implicit */_Bool) (unsigned short)20015))));
                    var_32 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [(_Bool)1] [i_2] [i_6])) ? (arr_24 [(unsigned char)10] [i_6] [i_6] [i_2] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_0])))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)136)) || (((/* implicit */_Bool) arr_12 [i_2] [i_2] [i_6]))))) : (((/* implicit */int) (unsigned char)248)));
                }
                /* LoopSeq 2 */
                for (signed char i_9 = 0; i_9 < 17; i_9 += 2) 
                {
                    var_33 = ((/* implicit */long long int) max((var_33), (((/* implicit */long long int) ((((((/* implicit */int) (unsigned char)127)) < (((/* implicit */int) (unsigned char)121)))) ? (((/* implicit */unsigned long long int) var_7)) : (var_9))))));
                    var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) ((3128100350U) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)120))))))));
                }
                for (long long int i_10 = 0; i_10 < 17; i_10 += 4) 
                {
                    var_35 ^= ((/* implicit */unsigned char) ((((var_0) & (((/* implicit */long long int) var_13)))) + (((/* implicit */long long int) ((/* implicit */int) var_11)))));
                    /* LoopSeq 4 */
                    for (short i_11 = 0; i_11 < 17; i_11 += 4) 
                    {
                        var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) arr_33 [i_11] [2U] [i_10] [i_6] [i_2] [i_0] [i_0]))));
                        var_37 = ((/* implicit */long long int) ((var_5) == (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0] [i_0] [i_0])))));
                        arr_34 [i_0] [(unsigned char)13] [i_6] [(unsigned char)13] = ((/* implicit */long long int) (unsigned char)136);
                    }
                    for (unsigned int i_12 = 0; i_12 < 17; i_12 += 2) 
                    {
                        var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_15 [i_0] [i_2] [i_6]))))) && (((/* implicit */_Bool) (~(-2231541571499428400LL))))));
                        var_39 += ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */int) arr_0 [i_10])) ^ (((/* implicit */int) var_8)))));
                        var_40 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) 2828858984U)) ? (((/* implicit */int) (unsigned char)120)) : (((/* implicit */int) arr_20 [i_0] [i_2] [i_0] [i_0] [i_0])))));
                    }
                    for (signed char i_13 = 3; i_13 < 15; i_13 += 4) 
                    {
                        arr_40 [i_0] [i_2] [i_2] [i_6] [i_0] [i_2] [i_2] &= ((/* implicit */unsigned int) (+(((4721101679271080931ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_10] [i_6])))))));
                        var_41 = ((/* implicit */unsigned long long int) var_13);
                    }
                    for (unsigned int i_14 = 0; i_14 < 17; i_14 += 3) 
                    {
                        arr_43 [i_0] [i_0] [i_0] [i_6] [i_10] [i_14] = ((/* implicit */int) ((_Bool) var_2));
                        var_42 = ((/* implicit */unsigned char) arr_15 [i_2] [i_6] [i_14]);
                        var_43 = ((/* implicit */unsigned long long int) min((var_43), (((((/* implicit */_Bool) arr_25 [i_0] [i_2] [i_14] [i_14])) ? (arr_41 [i_0] [i_2] [i_14] [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_0] [i_0] [i_6] [i_6])))))));
                    }
                }
                var_44 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_35 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) > (4721101679271080931ULL)));
            }
            for (long long int i_15 = 0; i_15 < 17; i_15 += 2) /* same iter space */
            {
                var_45 = ((/* implicit */unsigned int) ((855582838093407123ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))));
                var_46 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) arr_44 [i_2] [1U] [i_2] [i_2]))) ? (((((/* implicit */_Bool) (unsigned char)136)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)121))) : (4721101679271080934ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_1) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))));
                var_47 = ((/* implicit */unsigned char) arr_4 [i_0] [i_2]);
            }
        }
        /* LoopSeq 2 */
        for (long long int i_16 = 3; i_16 < 16; i_16 += 4) 
        {
            var_48 = ((/* implicit */unsigned char) max((arr_5 [i_0] [i_0] [i_0]), (arr_31 [i_0] [i_16] [i_16] [i_0] [i_0])));
            var_49 = (+((-(13725642394438470676ULL))));
        }
        /* vectorizable */
        for (unsigned char i_17 = 2; i_17 < 14; i_17 += 2) 
        {
            arr_52 [3LL] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)136)) ? (1073741824U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)120)))));
            arr_53 [i_0] [i_17 + 1] [i_0] = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0])) && (((/* implicit */_Bool) 13725642394438470671ULL)))));
            /* LoopNest 2 */
            for (signed char i_18 = 0; i_18 < 17; i_18 += 2) 
            {
                for (unsigned char i_19 = 0; i_19 < 17; i_19 += 3) 
                {
                    {
                        var_50 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_0] [i_17 - 2] [i_0] [i_18] [i_19] [i_19]))));
                        arr_58 [i_0] [i_17 - 1] [i_17 - 1] [i_19] = ((/* implicit */int) ((((/* implicit */int) arr_44 [i_0] [i_17 + 2] [i_18] [i_19])) <= (((/* implicit */int) (unsigned char)98))));
                    }
                } 
            } 
        }
    }
    for (unsigned char i_20 = 0; i_20 < 12; i_20 += 4) 
    {
        arr_61 [i_20] [i_20] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((unsigned int) (unsigned short)20014))) == (((((/* implicit */_Bool) ((((/* implicit */_Bool) -112866571)) ? (arr_8 [i_20] [i_20]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)155)))))) ? (((arr_8 [i_20] [i_20]) / (((/* implicit */long long int) var_4)))) : (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_20] [i_20] [i_20] [i_20])))))));
        var_51 = ((/* implicit */unsigned int) arr_22 [i_20] [i_20] [i_20] [i_20] [i_20] [i_20]);
        var_52 += ((/* implicit */unsigned char) var_5);
        var_53 = ((/* implicit */unsigned int) min((var_53), (((/* implicit */unsigned int) var_12))));
    }
    var_54 = ((/* implicit */unsigned char) min((var_54), (((unsigned char) ((((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_10)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 4721101679271080931ULL)) || (((/* implicit */_Bool) 4721101679271080923ULL)))))) : (var_4))))));
    var_55 = ((/* implicit */short) var_3);
}
