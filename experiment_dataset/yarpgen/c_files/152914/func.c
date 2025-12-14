/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152914
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
    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) var_5))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                for (long long int i_3 = 0; i_3 < 23; i_3 += 1) 
                {
                    {
                        var_21 = ((/* implicit */int) max((((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((unsigned int) arr_2 [(_Bool)1] [i_2])) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_7 [i_0] [i_3])), ((unsigned short)51183))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */int) ((unsigned char) var_17))) : (((/* implicit */int) (!((_Bool)0)))))))));
                        /* LoopSeq 1 */
                        for (signed char i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            arr_16 [i_0 - 1] [i_3] [i_2] [i_3] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_0)), (arr_6 [(signed char)0] [(signed char)19] [i_0 + 1] [i_0 - 1])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 1582074945)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_6 [i_0] [i_0] [4ULL] [i_0 - 1])))) : (((var_11) << (((arr_6 [i_0] [i_0] [i_0] [i_0 - 1]) - (555922351U)))))));
                            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) var_2))));
                            var_23 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((var_14) << (((arr_9 [i_1] [i_1] [i_1]) + (6204331217782154105LL)))))))) ? ((-((-(-7714037843634039924LL))))) : ((+((~(2613312452805661640LL)))))));
                            var_24 = ((/* implicit */unsigned int) min((((/* implicit */int) (unsigned short)65535)), (((((/* implicit */_Bool) -566591680)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))));
                        }
                        arr_17 [i_1] [(unsigned char)1] [i_2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) arr_2 [i_0 + 1] [i_0 + 1])) - (55218)))))) ? (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) / (var_14))) - (((/* implicit */unsigned long long int) ((int) var_15))))) : (((((/* implicit */_Bool) ((var_3) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_3])))))) ? (((/* implicit */unsigned long long int) var_11)) : (((var_17) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_15)))))));
                    }
                } 
            } 
        } 
        var_25 = (+(((((/* implicit */_Bool) arr_9 [i_0 + 1] [i_0 - 1] [i_0 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)56))) : (arr_6 [i_0] [i_0] [i_0 + 1] [i_0]))));
    }
    /* vectorizable */
    for (signed char i_5 = 1; i_5 < 24; i_5 += 4) 
    {
        arr_20 [i_5] [20LL] = ((/* implicit */short) (signed char)-56);
        arr_21 [i_5 + 1] [21U] = ((/* implicit */unsigned long long int) ((_Bool) arr_19 [i_5 + 1]));
    }
    var_26 = ((/* implicit */_Bool) var_1);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 3) 
    {
        arr_26 [i_6] = ((/* implicit */int) arr_25 [i_6]);
        arr_27 [i_6] [i_6] = ((/* implicit */unsigned int) ((arr_6 [i_6] [i_6] [i_6] [i_6]) == (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 2199014866944LL))))));
        var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (signed char)-31)) ? (((/* implicit */int) (signed char)-53)) : (((/* implicit */int) (short)-2630)))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 3) 
        {
            for (unsigned short i_8 = 0; i_8 < 12; i_8 += 3) 
            {
                {
                    var_28 = ((/* implicit */signed char) arr_8 [i_7] [i_7] [4LL]);
                    arr_32 [i_7] = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2633))) : (((((/* implicit */_Bool) (short)2621)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)2629))) : (var_15)))));
                    /* LoopSeq 2 */
                    for (unsigned short i_9 = 0; i_9 < 12; i_9 += 4) 
                    {
                        arr_36 [i_6] [i_6] [i_8] [i_9] [i_9] [i_7] = ((/* implicit */unsigned short) (signed char)-56);
                        arr_37 [i_9] [8LL] [(unsigned char)2] [i_9] [i_9] |= ((/* implicit */signed char) arr_4 [i_7] [i_8] [i_9]);
                        var_29 = ((/* implicit */short) ((((/* implicit */int) arr_0 [i_7] [i_9])) >= ((~(((/* implicit */int) (signed char)55))))));
                        arr_38 [i_7] [i_7] = ((/* implicit */short) ((((((/* implicit */int) var_19)) - (((/* implicit */int) arr_12 [i_7] [i_8] [2LL] [i_7] [i_7] [i_6] [i_7])))) <= (((/* implicit */int) arr_22 [i_7] [i_8]))));
                        arr_39 [i_7] [3] [3] [i_7] [i_8] [3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_0 [(signed char)3] [i_7]) ? (((/* implicit */unsigned long long int) arr_31 [i_7] [(unsigned short)3])) : (arr_35 [i_6] [i_7])))) ? (((/* implicit */int) (signed char)17)) : (((/* implicit */int) (signed char)51))));
                    }
                    for (int i_10 = 3; i_10 < 11; i_10 += 2) 
                    {
                        arr_43 [i_6] [(short)9] [i_7] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) 5209015804144922783ULL)) ? (((/* implicit */int) (short)-2643)) : (((/* implicit */int) (short)-2630)))) : (((/* implicit */int) (signed char)55))));
                        var_30 -= ((/* implicit */unsigned char) arr_9 [(signed char)19] [i_10 - 3] [i_10 - 3]);
                        arr_44 [i_10 - 3] [i_7] [i_7] [i_6] = ((/* implicit */long long int) ((((var_1) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-55))))) | (((unsigned long long int) arr_19 [i_10]))));
                    }
                    /* LoopNest 2 */
                    for (long long int i_11 = 0; i_11 < 12; i_11 += 3) 
                    {
                        for (unsigned short i_12 = 3; i_12 < 9; i_12 += 1) 
                        {
                            {
                                var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) (((_Bool)1) ? (arr_8 [i_6] [i_7] [i_12 + 1]) : (var_2))))));
                                arr_49 [i_6] [i_11] [i_7] [i_11] [i_11] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)122)) ? (-7152164695504260988LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                                arr_50 [i_6] [6] [i_8] [i_7] = ((/* implicit */short) var_12);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
    {
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 10; i_14 += 1) 
        {
            for (unsigned short i_15 = 0; i_15 < 10; i_15 += 3) 
            {
                {
                    arr_60 [i_15] [i_14] [i_13 - 1] [i_13 - 1] = (+(min((((17736683177920551614ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)31))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-56))))))));
                    arr_61 [(unsigned char)8] [i_14] [i_14] [i_14] = ((/* implicit */signed char) ((unsigned long long int) (unsigned char)52));
                    arr_62 [i_14] [5U] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_0 [i_13] [i_13 - 1])), (((unsigned int) -1528043907))));
                    arr_63 [i_13 - 1] [i_14] [i_15] [8U] &= ((/* implicit */int) (~(max((((/* implicit */unsigned int) (unsigned short)0)), (1868641880U)))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_16 = 0; i_16 < 10; i_16 += 3) 
        {
            for (int i_17 = 0; i_17 < 10; i_17 += 1) 
            {
                for (long long int i_18 = 0; i_18 < 10; i_18 += 2) 
                {
                    {
                        var_32 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)56)) - (((/* implicit */int) ((((/* implicit */int) (signed char)1)) == (((/* implicit */int) (unsigned char)16)))))))) == ((+(var_3)))));
                        var_33 = ((/* implicit */_Bool) (+(((int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) arr_3 [i_17])) : (var_1))))));
                        arr_73 [i_17] [i_16] [i_17] [i_18] [i_17] [i_16] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_13] [i_13] [i_13] [(unsigned char)8] [i_13] [14LL] [i_17]))) ^ (min((((((/* implicit */_Bool) 5265770866536880846LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : (-1023676802216647624LL))), (((/* implicit */long long int) (+(1884983485U))))))));
                    }
                } 
            } 
        } 
        arr_74 [i_13 - 1] = ((/* implicit */unsigned int) (-((~(((long long int) (signed char)-26))))));
        var_34 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_18))))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_9 [i_13] [i_13] [i_13 - 1]) == (arr_9 [i_13] [i_13] [i_13]))))) : (arr_67 [i_13] [i_13 - 1] [i_13] [i_13]))))));
    }
    var_35 = max((max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_12))))), ((~(var_3))))), (((((/* implicit */_Bool) var_4)) ? ((~(15815553936899088731ULL))) : (min((((/* implicit */unsigned long long int) 6108326130921907864LL)), (9059240836800351233ULL))))));
}
