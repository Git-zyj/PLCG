/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116465
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
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        var_20 = ((/* implicit */short) (~(((/* implicit */int) (unsigned short)0))));
        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65523)) ? (((7442908) << (((((-359796779) + (359796798))) - (14))))) : (((/* implicit */int) ((short) (~(((/* implicit */int) var_5)))))))))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 16; i_2 += 2) 
            {
                {
                    var_22 = ((/* implicit */signed char) ((((/* implicit */int) min(((_Bool)1), ((_Bool)0)))) * (((/* implicit */int) arr_7 [i_1 + 2] [i_1 + 2] [i_1 - 1] [i_1 + 2]))));
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((762639782) % (((/* implicit */int) (signed char)73))))) ? (min((((/* implicit */unsigned long long int) (unsigned short)26119)), (((((/* implicit */_Bool) (signed char)61)) ? (arr_5 [i_0] [i_0] [i_0] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))))))) : (((/* implicit */unsigned long long int) max((560811469U), (((/* implicit */unsigned int) (short)127)))))));
                }
            } 
        } 
    }
    /* LoopSeq 2 */
    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 2) /* same iter space */
    {
        var_23 &= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (unsigned short)8877)) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3] [i_3]))) : ((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(var_16)))) ? ((+(arr_9 [i_3] [i_3]))) : (arr_9 [i_3] [i_3]))))));
        /* LoopSeq 2 */
        for (long long int i_4 = 0; i_4 < 22; i_4 += 3) 
        {
            var_24 &= ((/* implicit */unsigned long long int) max(((short)9203), (((/* implicit */short) (_Bool)1))));
            /* LoopNest 2 */
            for (unsigned char i_5 = 1; i_5 < 21; i_5 += 3) 
            {
                for (int i_6 = 0; i_6 < 22; i_6 += 3) 
                {
                    {
                        arr_19 [i_3] [i_4] [i_5] [i_6] = ((/* implicit */_Bool) arr_12 [i_3]);
                        var_25 &= ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-24805))) != (((((/* implicit */_Bool) 0ULL)) ? (10333613678405145718ULL) : (((/* implicit */unsigned long long int) var_13)))))))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 22; i_7 += 1) 
        {
            var_26 &= ((/* implicit */signed char) (+((+(((/* implicit */int) (short)26482))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_8 = 3; i_8 < 20; i_8 += 4) 
            {
                var_27 = ((/* implicit */unsigned short) 4294967295U);
                /* LoopNest 2 */
                for (unsigned char i_9 = 0; i_9 < 22; i_9 += 2) 
                {
                    for (long long int i_10 = 0; i_10 < 22; i_10 += 3) 
                    {
                        {
                            var_28 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)125)) ? ((+(((/* implicit */int) (unsigned char)96)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)8969)))))));
                            var_29 = ((/* implicit */signed char) (+(((/* implicit */int) ((1043211482U) == (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-108))))))));
                            var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) (signed char)36))));
                        }
                    } 
                } 
                var_31 = ((/* implicit */int) ((-398854191015216808LL) != (((/* implicit */long long int) arr_23 [i_8 - 2]))));
            }
            for (unsigned long long int i_11 = 1; i_11 < 20; i_11 += 2) 
            {
                var_32 &= ((/* implicit */_Bool) (~(arr_9 [i_11 + 2] [i_11 + 2])));
                arr_33 [i_3] [i_7] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_20 [i_11] [i_11] [i_11 - 1])) | (((((/* implicit */_Bool) 3840165961U)) ? (((/* implicit */int) arr_24 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])) : (-577209040)))));
                var_33 &= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)112))));
                arr_34 [i_3] [i_7] [i_7] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) -762639800)) ? (arr_11 [i_11 + 1] [i_11 + 2]) : (((/* implicit */int) (unsigned short)2693))));
                var_34 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_18 [i_3] [i_3] [i_3] [3])) >= (((/* implicit */int) arr_18 [i_3] [i_3] [i_3] [i_3]))));
            }
        }
        /* LoopSeq 1 */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            var_35 -= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_15 [i_3] [(unsigned short)7] [i_12] [i_12])))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_15 [i_3] [i_3] [i_3] [i_3]))))) : (min((((/* implicit */unsigned int) (_Bool)0)), (var_4)))));
            /* LoopNest 2 */
            for (long long int i_13 = 0; i_13 < 22; i_13 += 3) 
            {
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    {
                        var_36 = ((/* implicit */_Bool) min((var_36), (((((/* implicit */_Bool) min((-762639811), (((/* implicit */int) (short)-24805))))) && (((/* implicit */_Bool) (+(((/* implicit */int) arr_36 [i_3])))))))));
                        var_37 = ((/* implicit */_Bool) max((var_37), (((/* implicit */_Bool) ((unsigned short) -762639800)))));
                        /* LoopSeq 3 */
                        for (short i_15 = 0; i_15 < 22; i_15 += 3) 
                        {
                            var_38 = ((/* implicit */unsigned long long int) ((-762639811) == (((/* implicit */int) (short)14181))));
                            var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(-398854191015216828LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_42 [i_3] [i_12] [i_13] [i_15]))))) : (((/* implicit */int) (unsigned short)65535))))) ? (max((((/* implicit */long long int) ((unsigned int) var_2))), (((0LL) & (((/* implicit */long long int) ((/* implicit */int) (signed char)31))))))) : (((/* implicit */long long int) ((/* implicit */int) ((2406302156U) <= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)31)))))))));
                            var_40 = ((/* implicit */_Bool) max((var_40), (((/* implicit */_Bool) max(((short)(-32767 - 1)), (((/* implicit */short) (unsigned char)255)))))));
                            var_41 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)152)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-32767)))))) : ((~((-9223372036854775807LL - 1LL))))))) ? (((var_5) ? (((/* implicit */int) (unsigned short)1)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)159))))))) : (((((var_8) + (2147483647))) << ((((((+(-772914361))) + (772914385))) - (23)))))));
                        }
                        for (unsigned int i_16 = 1; i_16 < 20; i_16 += 1) 
                        {
                            var_42 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)74)) ? (((/* implicit */unsigned long long int) (+(-426242605)))) : ((+(9782977760708863310ULL)))))) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) max((((unsigned short) 772914383)), (((/* implicit */unsigned short) (short)-32754)))))));
                            var_43 = ((/* implicit */unsigned char) min((var_43), (((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (short)-5107))) : ((((((((-9223372036854775807LL - 1LL)) + (9223372036854775807LL))) + (9223372036854775807LL))) >> (((/* implicit */int) (_Bool)1)))))))));
                            arr_48 [i_3] [i_3] [i_3] [(unsigned char)10] [i_3] [i_3] [i_3] = (~(((((((/* implicit */_Bool) (short)-5111)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-64))) : (var_16))) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) 7560575934134228031ULL)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) (short)9327))))))));
                            var_44 += max((-772914368), (((/* implicit */int) (short)15494)));
                        }
                        for (signed char i_17 = 2; i_17 < 20; i_17 += 3) 
                        {
                            var_45 = ((/* implicit */unsigned short) max((var_45), (((/* implicit */unsigned short) ((int) min((min((((/* implicit */unsigned char) (_Bool)1)), (arr_39 [i_17]))), (((/* implicit */unsigned char) ((_Bool) (_Bool)1)))))))));
                            var_46 = ((/* implicit */unsigned int) max((var_46), (max((2840139551U), (4294967295U)))));
                            var_47 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)248)) & (((/* implicit */int) (unsigned char)75))))) | (((min((((/* implicit */unsigned long long int) (_Bool)1)), (11446209521853511370ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) >= (var_17)))))))));
                            var_48 = ((/* implicit */unsigned long long int) min((var_48), (((((/* implicit */unsigned long long int) ((0) % (((/* implicit */int) (unsigned short)65518))))) % (((((/* implicit */_Bool) (unsigned short)65511)) ? (4805188823838212147ULL) : (((/* implicit */unsigned long long int) 1452558606))))))));
                        }
                        var_49 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-104))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)1)), (var_19)))) ? (((((/* implicit */_Bool) (short)15710)) ? (((/* implicit */long long int) arr_35 [i_13] [i_13])) : (var_15))) : (((/* implicit */long long int) (~(arr_43 [i_13] [(_Bool)1] [i_13] [i_13] [i_13])))))) : (((/* implicit */long long int) ((/* implicit */int) (((!(((/* implicit */_Bool) var_8)))) || (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)37))) == (arr_35 [i_12] [i_12])))))))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                var_50 = ((((/* implicit */_Bool) (~(((var_13) & (((/* implicit */int) arr_49 [i_3] [i_3] [i_3] [i_3] [i_3]))))))) ? (((/* implicit */int) ((short) max(((unsigned char)113), (((/* implicit */unsigned char) arr_24 [i_3] [i_3] [i_3] [i_12] [i_18] [i_18])))))) : (max((((((/* implicit */int) (short)-20597)) ^ (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) (unsigned char)104)))));
                var_51 = ((/* implicit */unsigned long long int) min((var_51), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-19609)))))));
            }
        }
    }
    for (unsigned int i_19 = 0; i_19 < 22; i_19 += 2) /* same iter space */
    {
        var_52 = ((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) 895350953U))))), (((((/* implicit */_Bool) 210965014840908034LL)) ? (((/* implicit */int) (unsigned char)7)) : (0)))));
        var_53 = ((/* implicit */short) max((var_53), (((/* implicit */short) max((((((/* implicit */int) arr_41 [i_19] [i_19] [i_19] [i_19])) % (((/* implicit */int) arr_41 [i_19] [i_19] [i_19] [i_19])))), (((/* implicit */int) max(((unsigned short)31292), ((unsigned short)50718)))))))));
        var_54 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_5) ? (((/* implicit */int) (short)-31561)) : (-221524235)))) ? ((~(var_16))) : (((/* implicit */unsigned int) ((((/* implicit */int) (short)5303)) | (((/* implicit */int) (signed char)-104)))))))) ? (((/* implicit */unsigned int) ((arr_12 [i_19]) ^ (((/* implicit */int) arr_17 [i_19] [i_19]))))) : (max((arr_38 [i_19] [i_19] [i_19] [i_19]), (2064384U)))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_20 = 4; i_20 < 12; i_20 += 4) 
    {
        var_55 = ((/* implicit */short) ((((/* implicit */int) (unsigned short)62985)) <= (((/* implicit */int) (unsigned short)42268))));
        var_56 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_40 [i_20 - 3] [i_20] [i_20] [i_20])) || (((/* implicit */_Bool) (short)3))));
    }
}
