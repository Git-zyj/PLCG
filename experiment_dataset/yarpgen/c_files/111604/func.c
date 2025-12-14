/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111604
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
    for (int i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                arr_6 [22U] [i_0] [12U] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0 + 1])) ? (arr_1 [(signed char)0] [i_0 + 1]) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))) ? (((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) arr_2 [i_1])) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_4 [(short)20]))))))) : (((/* implicit */long long int) (~(((/* implicit */int) max(((unsigned char)10), ((unsigned char)93)))))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    arr_10 [(unsigned short)0] [i_1] [i_2] [i_1] = ((/* implicit */signed char) min((((/* implicit */int) ((min((((/* implicit */unsigned long long int) (_Bool)1)), (18446744073709551608ULL))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_2] [i_1])) ? (((/* implicit */int) (signed char)31)) : (((/* implicit */int) (unsigned short)56382)))))))), ((-(((/* implicit */int) ((short) var_10)))))));
                    arr_11 [i_0 - 1] [16U] = ((/* implicit */unsigned char) ((long long int) arr_9 [(_Bool)1] [i_2] [i_1] [i_0 + 2]));
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_3 = 3; i_3 < 22; i_3 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 1; i_4 < 22; i_4 += 1) 
                    {
                        for (signed char i_5 = 0; i_5 < 24; i_5 += 1) 
                        {
                            {
                                arr_19 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = ((((((/* implicit */_Bool) (unsigned short)2273)) ? (arr_1 [i_0] [(unsigned char)4]) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) >= (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0 - 1] [2ULL] [i_0] [2ULL] [i_0] [i_4]))));
                                arr_20 [i_0] [i_4] [i_4] [i_0 - 1] = ((/* implicit */unsigned long long int) arr_2 [i_4]);
                            }
                        } 
                    } 
                    var_14 = var_7;
                    var_15 *= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_8 [i_0 + 2] [i_1] [i_3])) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : (arr_18 [i_0] [i_1] [i_3] [4U] [i_0] [2U] [i_3])))));
                }
            }
        } 
    } 
    /* LoopSeq 4 */
    for (long long int i_6 = 2; i_6 < 17; i_6 += 3) 
    {
        var_16 *= ((/* implicit */unsigned char) min((((long long int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) / (var_1)))), (((/* implicit */long long int) ((((/* implicit */_Bool) -1546443876034867337LL)) ? (((((/* implicit */int) arr_13 [i_6] [i_6] [(short)13])) - (((/* implicit */int) var_8)))) : (((/* implicit */int) var_8)))))));
        /* LoopSeq 1 */
        for (unsigned char i_7 = 2; i_7 < 17; i_7 += 1) 
        {
            arr_28 [i_6] [i_7] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) max((var_11), (((/* implicit */unsigned long long int) var_6))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)163), (((/* implicit */unsigned char) arr_4 [i_6 - 1])))))) : (min((((/* implicit */unsigned long long int) arr_9 [i_7] [i_7 + 2] [i_6] [(_Bool)1])), (18446744073709551608ULL)))));
            arr_29 [i_6] [i_7 - 1] = ((/* implicit */unsigned long long int) (signed char)-113);
            var_17 |= ((/* implicit */unsigned long long int) (-(min((((((/* implicit */_Bool) (short)1792)) ? (((/* implicit */int) (unsigned char)149)) : (((/* implicit */int) var_9)))), (((((/* implicit */int) var_9)) >> (27ULL)))))));
            /* LoopNest 2 */
            for (unsigned short i_8 = 1; i_8 < 18; i_8 += 2) 
            {
                for (long long int i_9 = 2; i_9 < 18; i_9 += 3) 
                {
                    {
                        arr_36 [i_9] [i_8] [i_8] [i_8] [i_6] = var_4;
                        var_18 |= ((/* implicit */_Bool) (-(min((((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (4000507560U)))), (((long long int) -1031269488))))));
                    }
                } 
            } 
        }
        arr_37 [i_6 - 1] [i_6] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (unsigned char)248)) ? (arr_0 [i_6 + 2]) : (arr_0 [i_6 - 2])))));
    }
    for (unsigned short i_10 = 0; i_10 < 25; i_10 += 4) 
    {
        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) 2795639452U)) >= (var_7))))) >= (((long long int) arr_39 [i_10])))))));
        var_20 = ((/* implicit */_Bool) min((min(((-(((/* implicit */int) var_4)))), (((/* implicit */int) min((var_8), (var_2)))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) min((((/* implicit */short) arr_40 [i_10])), (var_6)))) : (((/* implicit */int) ((signed char) var_0)))))));
    }
    for (short i_11 = 3; i_11 < 16; i_11 += 1) 
    {
        arr_45 [16ULL] [i_11] = ((/* implicit */unsigned char) (~((+(((/* implicit */int) arr_15 [(unsigned char)18] [(unsigned char)18] [i_11 - 2]))))));
        arr_46 [i_11] [i_11] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned short)22356)))) & (((unsigned long long int) arr_32 [i_11] [14])))))));
        /* LoopNest 2 */
        for (short i_12 = 2; i_12 < 15; i_12 += 3) 
        {
            for (int i_13 = 0; i_13 < 19; i_13 += 3) 
            {
                {
                    arr_54 [i_11 - 1] [13U] [11U] = ((/* implicit */unsigned char) arr_32 [i_12] [0ULL]);
                    var_21 -= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [i_12] [i_12 + 2] [i_12 + 1])) < (((/* implicit */int) arr_8 [i_12 - 2] [i_12 + 2] [i_12 + 1]))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)113)) ? (((/* implicit */int) arr_26 [i_12] [i_12])) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned char)93)), (1727041478163870027LL)))) : (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned long long int) 31457280)) : (4294967295ULL)))))));
                    arr_55 [i_11] [i_11 - 1] [i_11] [(unsigned char)10] = ((/* implicit */signed char) min((min((((/* implicit */unsigned long long int) max(((unsigned short)0), (((/* implicit */unsigned short) var_12))))), (var_11))), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_5 [i_13] [i_12])))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) var_1))))) : (((/* implicit */int) arr_38 [i_11 - 1])))))));
                }
            } 
        } 
        arr_56 [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_11 + 3])) ? (((/* implicit */int) arr_34 [i_11 + 3])) : (((/* implicit */int) (unsigned short)65534))))) ? (((((min((((/* implicit */int) var_6)), (arr_50 [i_11 - 3] [i_11] [i_11] [2LL]))) + (2147483647))) >> (((((/* implicit */int) var_13)) - (90))))) : (((((/* implicit */_Bool) ((var_5) ? (48666081744416833LL) : (((/* implicit */long long int) 2928426175U))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)91)))) : ((-(((/* implicit */int) (signed char)-85))))))));
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 19; i_14 += 1) 
        {
            for (unsigned long long int i_15 = 0; i_15 < 19; i_15 += 2) 
            {
                {
                    var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((~(var_0))), ((~(var_0)))))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_38 [i_11 - 3])), (min((var_2), (arr_13 [i_15] [i_15] [i_15]))))))) : (max((((/* implicit */long long int) min(((short)-28827), (((/* implicit */short) var_2))))), (min((((/* implicit */long long int) var_3)), (var_1))))))))));
                    var_23 *= ((/* implicit */unsigned long long int) ((long long int) max((min((5498368941582348508ULL), (((/* implicit */unsigned long long int) arr_7 [i_11] [i_11 - 1] [i_11] [i_11])))), (((/* implicit */unsigned long long int) ((var_5) ? (((/* implicit */int) (signed char)11)) : (((/* implicit */int) var_9))))))));
                }
            } 
        } 
    }
    for (unsigned char i_16 = 0; i_16 < 18; i_16 += 1) 
    {
        var_24 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_44 [i_16] [i_16])) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned long long int) arr_50 [i_16] [i_16] [i_16] [i_16]))))) ? (((/* implicit */int) min((var_4), (arr_27 [i_16])))) : (((/* implicit */int) var_2))));
        var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_0) | (((/* implicit */unsigned int) ((/* implicit */int) min(((short)-32757), (((/* implicit */short) var_12))))))))) ? (max((min((((/* implicit */unsigned long long int) arr_38 [i_16])), (arr_23 [12LL]))), (((/* implicit */unsigned long long int) arr_31 [2LL] [i_16] [i_16] [i_16])))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) var_10))) & (arr_41 [i_16] [10U])))))))));
        /* LoopNest 3 */
        for (unsigned int i_17 = 0; i_17 < 18; i_17 += 1) 
        {
            for (unsigned char i_18 = 0; i_18 < 18; i_18 += 1) 
            {
                for (signed char i_19 = 2; i_19 < 15; i_19 += 2) 
                {
                    {
                        arr_71 [(unsigned char)12] [i_18] [(signed char)10] [12ULL] [i_19] [i_19] = ((/* implicit */signed char) ((max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) max((var_12), (var_10)))))) * (((/* implicit */int) max((arr_34 [i_19 - 1]), (arr_34 [i_19 + 2]))))));
                        var_26 = ((/* implicit */unsigned short) (~(((long long int) max((((/* implicit */unsigned int) var_4)), (arr_57 [i_19] [7LL]))))));
                    }
                } 
            } 
        } 
    }
    var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)-85)))) << (((((/* implicit */int) var_13)) - (98)))))) && (((/* implicit */_Bool) var_10))));
}
