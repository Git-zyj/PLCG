/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166388
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
    var_16 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) 3218721464U)) | (16852604339277523568ULL)));
    /* LoopSeq 4 */
    for (short i_0 = 1; i_0 < 18; i_0 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */signed char) -6463877911934755942LL);
        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [(unsigned short)10])) + (((/* implicit */int) arr_1 [(unsigned char)0]))))) ? (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_1 [8LL])))) : (((/* implicit */int) (_Bool)0)))) + (((/* implicit */int) var_2)))))));
    }
    for (short i_1 = 1; i_1 < 18; i_1 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_2 = 0; i_2 < 19; i_2 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned short i_3 = 3; i_3 < 18; i_3 += 4) 
            {
                for (unsigned char i_4 = 3; i_4 < 15; i_4 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (short i_5 = 0; i_5 < 19; i_5 += 4) 
                        {
                            var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 2966839923564237811LL)) ? (((/* implicit */int) arr_4 [i_1 + 1])) : (((/* implicit */int) arr_4 [i_5]))));
                            arr_16 [i_4 - 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (unsigned short)65519)) : (((/* implicit */int) (unsigned short)28667))));
                        }
                        arr_17 [i_1] [i_2] [i_3] [i_3] = ((/* implicit */unsigned short) var_2);
                        arr_18 [i_1] [i_1] [i_1] [i_2] [i_2] [i_1] = ((/* implicit */short) ((((arr_2 [i_2]) + (2147483647))) << (((/* implicit */int) arr_4 [i_1 - 1]))));
                    }
                } 
            } 
            var_20 = ((((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_15 [(signed char)4] [(short)1] [i_2] [(short)1] [i_1 - 1])))) + ((+(3264686071584609624LL))));
            /* LoopNest 3 */
            for (unsigned short i_6 = 0; i_6 < 19; i_6 += 4) 
            {
                for (short i_7 = 0; i_7 < 19; i_7 += 4) 
                {
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        {
                            var_21 |= ((/* implicit */long long int) ((((/* implicit */int) ((_Bool) (unsigned short)5))) | (((/* implicit */int) (_Bool)1))));
                            arr_27 [(signed char)4] [i_8] [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8] [i_8] = ((/* implicit */unsigned short) var_12);
                        }
                    } 
                } 
            } 
            var_22 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)111))));
            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_1 + 1] [i_2])) ? (((/* implicit */long long int) arr_3 [i_1 - 1] [i_2])) : (var_8)));
        }
        var_24 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((_Bool) var_15))) : (((/* implicit */int) max((((/* implicit */short) var_3)), (var_15))))))) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [10]))) + (-4272671888361857272LL)))) ? ((-(arr_19 [i_1 + 1] [i_1 + 1] [i_1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (3302223777U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1] [i_1 - 1] [i_1] [i_1 + 1] [i_1] [(_Bool)1])))))))) : (((/* implicit */unsigned long long int) min((arr_6 [i_1]), (((/* implicit */long long int) (!(((/* implicit */_Bool) 120259084288LL))))))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_9 = 2; i_9 < 17; i_9 += 4) 
        {
            var_25 = ((/* implicit */unsigned int) (_Bool)1);
            var_26 = ((/* implicit */unsigned char) (+((-(((/* implicit */int) (_Bool)0))))));
            arr_30 [i_9] = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) arr_6 [i_1]))))));
            var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (((7638254119070277024LL) - (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_1] [i_1] [i_1 - 1]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_9])))));
        }
        for (unsigned short i_10 = 0; i_10 < 19; i_10 += 4) 
        {
            var_28 = ((((/* implicit */_Bool) max((((/* implicit */int) arr_32 [i_1 + 1])), ((((_Bool)0) ? (arr_25 [i_10] [i_10] [i_1 - 1] [i_1 - 1]) : (((/* implicit */int) arr_20 [i_10] [15]))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)86)), (-7860409529377282189LL)))) || (((/* implicit */_Bool) (signed char)-38)))))) : ((((!(((/* implicit */_Bool) var_13)))) ? (5909088578423930530LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2547013744054534044LL)))))))));
            arr_33 [i_10] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((short) arr_15 [i_1 - 1] [i_10] [i_10] [i_10] [i_10])))) + (((((/* implicit */_Bool) arr_9 [i_10] [i_10] [i_10] [i_1] [i_1] [10])) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_1))))))));
            var_29 = ((/* implicit */int) min((var_29), (((((/* implicit */int) (short)30981)) | (((/* implicit */int) (unsigned char)231))))));
            arr_34 [i_1] = ((/* implicit */unsigned long long int) arr_2 [i_1]);
        }
        for (unsigned int i_11 = 4; i_11 < 17; i_11 += 4) 
        {
            /* LoopNest 2 */
            for (short i_12 = 0; i_12 < 19; i_12 += 4) 
            {
                for (unsigned int i_13 = 3; i_13 < 17; i_13 += 2) 
                {
                    {
                        var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((short)10010), (((/* implicit */short) (_Bool)1))))) ? (((((/* implicit */_Bool) (signed char)-120)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_12))) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_12] [i_12] [i_13 - 1] [i_13 - 1] [1U])))))) ? (((int) arr_25 [i_1] [i_1] [i_12] [i_13])) : (((((/* implicit */int) (unsigned short)65535)) / (((((/* implicit */_Bool) 2739772577U)) ? (((/* implicit */int) arr_15 [i_13 + 2] [i_13] [i_12] [11LL] [7])) : (((/* implicit */int) var_3)))))))))));
                        /* LoopSeq 4 */
                        for (unsigned char i_14 = 0; i_14 < 19; i_14 += 4) 
                        {
                            arr_48 [i_1] [i_1] [i_12] [i_13] [(unsigned short)8] = ((/* implicit */unsigned long long int) -8290834867449491004LL);
                            arr_49 [i_12] [i_12] [i_12] [i_12] [i_12] = ((/* implicit */long long int) (signed char)-19);
                            var_31 = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)65522))));
                        }
                        for (unsigned short i_15 = 2; i_15 < 18; i_15 += 2) 
                        {
                            var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)191)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (signed char)-17))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_1 - 1] [i_11 - 1] [i_13 - 2]))) : (arr_6 [i_11 + 1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((916195807538823421LL) / (((/* implicit */long long int) -1329514808))))) ? (((/* implicit */int) (short)-10574)) : (((/* implicit */int) var_15))))) : ((((((_Bool)1) ? (((/* implicit */unsigned long long int) 1287396187U)) : (7176460350662794330ULL))) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [i_13 - 3] [i_1 - 1])))))));
                            var_33 = ((/* implicit */long long int) (~(5011634295620484724ULL)));
                        }
                        for (short i_16 = 0; i_16 < 19; i_16 += 4) /* same iter space */
                        {
                            arr_55 [i_12] [i_12] [i_12] [i_13] [i_16] [i_16] = (short)14995;
                            arr_56 [i_1 - 1] [i_11 + 1] [i_1 - 1] [i_13] [i_16] = (((!(((/* implicit */_Bool) ((int) arr_46 [i_1]))))) ? (((((/* implicit */_Bool) max((arr_24 [i_13] [i_12] [i_1]), (arr_32 [i_16])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)992)))))) : (8LL))) : (((/* implicit */long long int) arr_23 [i_11] [i_16])));
                        }
                        for (short i_17 = 0; i_17 < 19; i_17 += 4) /* same iter space */
                        {
                            var_34 = ((/* implicit */unsigned int) -2849481915499991971LL);
                            var_35 = ((/* implicit */unsigned int) max((var_35), (((/* implicit */unsigned int) (((((!(((/* implicit */_Bool) (signed char)-81)))) ? (((((/* implicit */int) var_5)) & (((/* implicit */int) var_3)))) : (((/* implicit */int) (unsigned short)21884)))) + ((+(((/* implicit */int) ((unsigned short) var_12))))))))));
                            var_36 -= (((~((-(arr_6 [i_1]))))) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */unsigned int) var_7)) : (arr_7 [i_1] [i_1] [i_12])))) <= ((-9223372036854775807LL - 1LL)))))));
                        }
                        arr_60 [i_1 - 1] [i_1 - 1] [i_1 - 1] [8LL] [i_12] [i_13] |= ((/* implicit */long long int) (-(((/* implicit */int) arr_22 [i_1] [i_11 - 3] [i_12]))));
                    }
                } 
            } 
            var_37 = ((/* implicit */short) min((var_37), (((/* implicit */short) var_14))));
        }
        var_38 = ((/* implicit */int) arr_24 [i_1 + 1] [i_1 + 1] [(unsigned char)10]);
    }
    for (short i_18 = 1; i_18 < 18; i_18 += 2) /* same iter space */
    {
        arr_65 [i_18 - 1] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (((~(((/* implicit */int) arr_51 [i_18 + 1] [i_18] [(signed char)15] [i_18] [i_18 + 1] [i_18])))) & ((~(((/* implicit */int) (unsigned short)54351))))))) ? ((-(((((/* implicit */long long int) 2147483647)) + (-2069782891544726010LL))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)28191)))));
        arr_66 [i_18] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((max((var_14), (((/* implicit */unsigned long long int) (unsigned short)9603)))), (((/* implicit */unsigned long long int) arr_54 [i_18]))))) ? (((unsigned int) (-(((/* implicit */int) (short)-3125))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_25 [i_18] [i_18] [i_18] [i_18])) ? (((/* implicit */int) ((short) 9223372036854775807LL))) : (((int) arr_5 [i_18 - 1])))))));
        arr_67 [i_18] = min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (8042768440845614447LL)))) ? (((/* implicit */int) arr_4 [i_18 - 1])) : (min((26), (((/* implicit */int) (short)9335))))))), (((((/* implicit */_Bool) max(((unsigned short)19320), (((/* implicit */unsigned short) arr_8 [i_18 + 1] [i_18 + 1]))))) ? ((~(var_11))) : (9223372036854775807LL))));
        /* LoopNest 2 */
        for (short i_19 = 0; i_19 < 19; i_19 += 4) 
        {
            for (long long int i_20 = 0; i_20 < 19; i_20 += 4) 
            {
                {
                    arr_75 [i_20] [i_19] [i_18 + 1] = ((/* implicit */int) min((min((((((/* implicit */_Bool) 1467072831U)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)12886))))), (((/* implicit */unsigned long long int) (unsigned char)144)))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned short)8)), (-6935841158468046658LL))))));
                    arr_76 [i_19] [i_19] [i_20] [i_20] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_74 [i_19] [i_19] [i_18]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) ? (((arr_74 [i_19] [i_19] [i_18 + 1]) | (arr_74 [i_18] [i_19] [i_20]))) : (min((arr_74 [i_18] [i_19] [i_18]), (arr_74 [i_18] [i_19] [i_20])))));
                    var_39 -= ((/* implicit */_Bool) ((unsigned long long int) (-(arr_54 [i_18 - 1]))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (short i_21 = 1; i_21 < 18; i_21 += 2) /* same iter space */
    {
        var_40 = ((/* implicit */signed char) var_2);
        arr_79 [i_21] [i_21] &= ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) -940191526178545485LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-25557))) : (var_11)))));
    }
}
