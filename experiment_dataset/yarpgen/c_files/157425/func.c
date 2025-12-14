/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157425
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 8; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (short)22849)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))))), ((~(((((/* implicit */_Bool) var_9)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))))));
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        arr_10 [i_0] [i_1 - 1] [i_2] [i_3] = ((/* implicit */int) 7977807154840160255ULL);
                        arr_11 [i_0] [i_1 + 4] [11LL] [i_1] [4ULL] = ((((/* implicit */_Bool) (~((~(((/* implicit */int) arr_9 [i_3 - 1] [8ULL] [i_0]))))))) || (((/* implicit */_Bool) (~(arr_6 [i_0])))));
                    }
                    for (unsigned int i_4 = 0; i_4 < 12; i_4 += 1) 
                    {
                        arr_14 [i_0] [(_Bool)1] [i_1 - 2] [(unsigned short)9] [i_2] [7] = ((/* implicit */unsigned long long int) arr_13 [6ULL] [i_4] [i_0] [i_4] [i_4]);
                        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((((var_5) >= (((((/* implicit */int) var_11)) ^ (((/* implicit */int) var_9)))))) || (((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49452))) : (10468936918869391378ULL)))))))))));
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 2) 
                    {
                        var_17 = ((/* implicit */long long int) (short)32763);
                        arr_18 [i_2] [i_0] [i_2] [0U] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) arr_17 [i_1 + 3] [i_1 + 3] [(short)4] [3ULL])) > (10468936918869391361ULL)))) / (max((629289891), (arr_8 [i_1 - 2] [i_1 + 1] [5] [9LL] [i_1])))));
                        var_18 |= ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_6)) : (1806722684158781354ULL)))))))));
                        arr_19 [i_5] &= 14949993152942358732ULL;
                        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~((-(7977807154840160243ULL)))))) ? ((((_Bool)1) ? (var_3) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1))))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_16 [i_0] [i_1 + 1] [i_2])))))));
                    }
                    var_20 &= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_10))));
                }
            } 
        } 
        var_21 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_14)) | (arr_6 [i_0])))) ? (((/* implicit */unsigned long long int) ((3189988725U) / (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) : (var_7))) & ((-(var_7)))));
    }
    /* vectorizable */
    for (unsigned char i_6 = 1; i_6 < 12; i_6 += 2) 
    {
        var_22 = ((/* implicit */long long int) arr_21 [i_6]);
        var_23 = (!(((/* implicit */_Bool) (((_Bool)1) ? (var_2) : (((/* implicit */int) (_Bool)1))))));
        var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) 10468936918869391361ULL)) ? (((/* implicit */int) arr_21 [i_6 + 1])) : (((/* implicit */int) var_11))));
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        var_25 = ((/* implicit */_Bool) var_9);
        var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) 809972644U))));
        arr_26 [(unsigned short)14] = ((/* implicit */long long int) arr_25 [i_7] [i_7]);
        /* LoopSeq 1 */
        for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 4) 
        {
            /* LoopSeq 2 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                arr_33 [i_8] [(unsigned short)12] [i_9] &= ((/* implicit */unsigned short) max(((~(arr_30 [i_7]))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)49961)) < ((-(((/* implicit */int) var_11)))))))));
                var_27 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) != (max(((-(2994463484U))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_25 [i_7] [i_7])))))))));
            }
            for (short i_10 = 0; i_10 < 18; i_10 += 3) 
            {
                var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) min((((((/* implicit */long long int) ((arr_27 [(short)7] [i_10]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_10))))) != (((-5889107787954042601LL) | (((/* implicit */long long int) ((/* implicit */int) arr_29 [(signed char)10] [4]))))))), ((!(((/* implicit */_Bool) var_13)))))))));
                var_29 = ((/* implicit */unsigned short) ((arr_28 [2ULL]) - (252201579132747776ULL)));
                /* LoopSeq 3 */
                /* vectorizable */
                for (short i_11 = 2; i_11 < 16; i_11 += 3) 
                {
                    var_30 ^= ((/* implicit */signed char) ((((/* implicit */int) var_10)) >> (((/* implicit */int) (!(arr_27 [5LL] [i_7]))))));
                    /* LoopSeq 2 */
                    for (long long int i_12 = 0; i_12 < 18; i_12 += 4) 
                    {
                        var_31 = ((/* implicit */unsigned char) var_14);
                        arr_41 [i_7] [i_8] [i_10] [i_11] [i_11 - 2] [i_12] = ((/* implicit */_Bool) ((18446744073709551593ULL) - (10468936918869391361ULL)));
                    }
                    for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
                    {
                        arr_44 [i_10] [(unsigned short)14] [i_10] [i_10] [(unsigned short)10] [i_10] [i_10] = ((/* implicit */_Bool) (-((~(((/* implicit */int) (_Bool)1))))));
                        var_32 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3684374823835267086ULL)) ? (((/* implicit */int) (unsigned short)163)) : (var_2)))) ? (var_14) : (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (signed char)-32)))))));
                        arr_45 [i_7] [(_Bool)1] [i_11 + 1] [i_11] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 3189988700U)) ? (7977807154840160238ULL) : (((/* implicit */unsigned long long int) (-2147483647 - 1)))));
                        var_33 -= ((/* implicit */short) var_10);
                    }
                }
                for (signed char i_14 = 0; i_14 < 18; i_14 += 1) 
                {
                    /* LoopSeq 1 */
                    for (short i_15 = 3; i_15 < 17; i_15 += 3) 
                    {
                        arr_52 [i_7] [i_8] [i_10] [i_10] [10ULL] = ((/* implicit */unsigned short) var_2);
                        var_34 |= ((/* implicit */long long int) ((10468936918869391378ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [i_10] [i_15 - 2] [i_15 - 1] [(unsigned char)13] [i_15])))));
                        var_35 &= ((/* implicit */signed char) min(((~(arr_28 [i_7]))), (((/* implicit */unsigned long long int) var_5))));
                        var_36 = (i_10 % 2 == 0) ? (((/* implicit */signed char) (~(((arr_51 [i_10] [i_15 - 3] [i_15 - 3]) << (((arr_51 [i_10] [i_15] [0LL]) - (13017456592600205608ULL)))))))) : (((/* implicit */signed char) (~(((arr_51 [i_10] [i_15 - 3] [i_15 - 3]) << (((((arr_51 [i_10] [i_15] [0LL]) - (13017456592600205608ULL))) - (4170943743959599100ULL))))))));
                    }
                    /* LoopSeq 2 */
                    for (short i_16 = 0; i_16 < 18; i_16 += 1) 
                    {
                        var_37 ^= ((/* implicit */short) min((var_7), (((arr_34 [i_8]) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                        arr_55 [i_8] [i_10] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)32)) && (((/* implicit */_Bool) arr_28 [i_8])))))) < ((~(var_7)))));
                    }
                    for (signed char i_17 = 0; i_17 < 18; i_17 += 1) 
                    {
                        var_38 = ((/* implicit */long long int) (unsigned char)88);
                        var_39 = ((/* implicit */short) (~(((/* implicit */int) (_Bool)0))));
                    }
                }
                /* vectorizable */
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    arr_61 [(short)1] [i_8] [i_10] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_3) << (((var_14) + (5878784486065289642LL)))))) ? (((/* implicit */unsigned long long int) arr_30 [i_7])) : (((var_7) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                    var_40 -= ((/* implicit */short) arr_48 [i_10]);
                }
                var_41 = ((/* implicit */long long int) (~(min(((-(((/* implicit */int) var_0)))), (((/* implicit */int) arr_36 [i_7] [i_8] [(_Bool)1] [(signed char)1] [i_10] [i_10]))))));
                /* LoopNest 2 */
                for (unsigned char i_19 = 0; i_19 < 18; i_19 += 4) 
                {
                    for (long long int i_20 = 0; i_20 < 18; i_20 += 1) 
                    {
                        {
                            var_42 = ((/* implicit */_Bool) var_3);
                            var_43 = ((/* implicit */_Bool) ((((/* implicit */int) min((var_1), (((/* implicit */unsigned short) arr_36 [i_7] [i_8] [i_10] [i_10] [i_19] [i_20]))))) >> (((var_6) - (5643155085350831471LL)))));
                        }
                    } 
                } 
            }
            var_44 = ((/* implicit */unsigned char) (((_Bool)1) ? (((((/* implicit */_Bool) (-(4294965248U)))) ? (arr_38 [i_7] [i_8] [i_7] [i_7]) : (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (arr_60 [4LL] [i_7] [(unsigned char)1]) : (((/* implicit */unsigned long long int) 113989574)))))) : (16ULL)));
            var_45 *= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (var_7))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)247)))));
        }
    }
    for (signed char i_21 = 0; i_21 < 14; i_21 += 1) 
    {
        arr_69 [i_21] = ((/* implicit */unsigned char) min((((/* implicit */int) var_1)), (max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)32)) : (((/* implicit */int) var_4)))), ((-(((/* implicit */int) var_10))))))));
        arr_70 [i_21] [i_21] = ((/* implicit */_Bool) var_12);
    }
    var_46 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) (~(((((/* implicit */int) var_9)) / (((/* implicit */int) (unsigned char)255))))))) : (var_8)));
    var_47 = ((/* implicit */unsigned char) (((((~(5730364579127990255LL))) * (((/* implicit */long long int) 0)))) >> (((((/* implicit */int) var_0)) - (54843)))));
    var_48 = ((/* implicit */unsigned char) var_11);
}
