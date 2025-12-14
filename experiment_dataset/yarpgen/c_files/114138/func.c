/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114138
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
    var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) min((max((((/* implicit */int) var_7)), ((~(((/* implicit */int) var_0)))))), (-544192891))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_12 = -544192902;
        var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) - (arr_0 [i_0]))))));
        arr_3 [(_Bool)1] [i_0] = arr_0 [i_0];
    }
    for (unsigned short i_1 = 2; i_1 < 11; i_1 += 1) 
    {
        var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_1] [i_1 - 1])) / (((/* implicit */int) arr_2 [i_1] [i_1 - 1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) -544192912)) ? (((/* implicit */long long int) -544192902)) : (5121255726187520926LL)))))) : (8589934528ULL))))));
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? ((-(((/* implicit */int) arr_5 [i_1 - 1])))) : (((((/* implicit */_Bool) arr_5 [i_1 + 4])) ? (((/* implicit */int) arr_5 [i_1 + 4])) : (((/* implicit */int) arr_5 [i_1 + 4]))))));
    }
    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) (~(((/* implicit */int) var_1)))))));
    /* LoopSeq 2 */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        var_17 ^= ((((/* implicit */_Bool) ((((arr_0 [i_2]) + (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2]))))) - (arr_0 [i_2])))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (short)1811))))) : (((((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))) - (268435456U))));
        arr_9 [i_2] = ((/* implicit */unsigned char) max((((/* implicit */long long int) (!(((/* implicit */_Bool) min((1488244105), (((/* implicit */int) arr_1 [i_2] [i_2])))))))), (((arr_0 [i_2]) | (((/* implicit */long long int) ((unsigned int) var_8)))))));
        arr_10 [i_2] = min((((/* implicit */int) arr_5 [i_2])), (((arr_6 [i_2 - 1]) / (arr_6 [i_2 - 1]))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 1) 
    {
        /* LoopSeq 4 */
        for (int i_4 = 0; i_4 < 14; i_4 += 4) 
        {
            var_18 = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_1 [i_3] [i_4])) ? (((/* implicit */int) arr_17 [13U])) : (((/* implicit */int) (short)1811)))), (((/* implicit */int) max((var_10), (arr_1 [i_3] [i_3]))))))) ? (((/* implicit */long long int) min((max((var_5), (((/* implicit */unsigned int) var_7)))), (((/* implicit */unsigned int) var_2))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_4]))) + (arr_0 [i_3]))));
            arr_18 [i_3] = ((/* implicit */signed char) arr_0 [i_3]);
        }
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
        {
            var_19 = ((/* implicit */unsigned short) 268435447U);
            var_20 = ((/* implicit */unsigned char) ((short) arr_4 [i_5]));
            /* LoopSeq 3 */
            /* vectorizable */
            for (long long int i_6 = 0; i_6 < 14; i_6 += 2) 
            {
                var_21 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */int) arr_1 [i_5] [i_5])) + (((/* implicit */int) arr_1 [i_3] [i_5])))));
                var_22 = ((/* implicit */unsigned long long int) ((unsigned short) var_1));
                var_23 = ((/* implicit */unsigned int) (_Bool)1);
            }
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                var_24 = ((/* implicit */unsigned int) arr_2 [i_3] [i_3]);
                /* LoopNest 2 */
                for (unsigned int i_8 = 3; i_8 < 10; i_8 += 1) 
                {
                    for (short i_9 = 3; i_9 < 13; i_9 += 2) 
                    {
                        {
                            arr_31 [12] [0LL] [i_7] [i_3] [12] &= ((/* implicit */long long int) (~(arr_27 [i_5 - 1] [i_8 + 3] [i_9 - 2])));
                            arr_32 [i_3] [i_5 - 1] [i_3] [i_5 - 1] [i_3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8515072348696553194ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)5922))))) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) arr_14 [i_7]))));
            }
            for (int i_10 = 1; i_10 < 11; i_10 += 2) 
            {
                var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) (((+(arr_24 [(_Bool)1] [i_5 - 1] [4ULL]))) ^ (((((/* implicit */unsigned int) ((/* implicit */int) min((arr_20 [i_5] [i_10]), (arr_35 [i_5] [i_10]))))) & (max((4026531829U), (((/* implicit */unsigned int) -810973638)))))))))));
                arr_37 [i_3] [i_3] = ((/* implicit */unsigned long long int) ((unsigned int) (((-(var_5))) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_10]))))));
                arr_38 [i_3] [i_3] [(signed char)0] [i_10] = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) 544192886)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_5]))))) / (((/* implicit */unsigned int) (+(((/* implicit */int) arr_2 [i_3] [i_5]))))))) * (((/* implicit */unsigned int) ((max((((/* implicit */int) arr_15 [i_5])), (arr_16 [i_3]))) / (810973644))))));
            }
        }
        for (int i_11 = 1; i_11 < 11; i_11 += 1) 
        {
            /* LoopNest 3 */
            for (int i_12 = 1; i_12 < 12; i_12 += 4) 
            {
                for (unsigned short i_13 = 2; i_13 < 12; i_13 += 3) 
                {
                    for (unsigned int i_14 = 3; i_14 < 12; i_14 += 1) 
                    {
                        {
                            arr_49 [i_3] [i_12] [i_11] [i_3] = ((/* implicit */_Bool) ((arr_42 [i_12 + 2] [i_3]) % (-544192886)));
                            var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */short) arr_41 [i_12 + 2] [i_13 - 2] [i_14] [i_12 + 2])), (var_4)))) && (((/* implicit */_Bool) ((short) (unsigned short)37032)))));
                        }
                    } 
                } 
            } 
            arr_50 [i_3] [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_43 [i_3] [(_Bool)1] [i_11]), (((/* implicit */short) arr_17 [i_11 - 1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_11 + 2] [i_11]))) : (((((/* implicit */_Bool) -810973630)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [9]))) : (arr_29 [i_11 - 1] [i_3] [(short)7] [i_3] [i_3])))))) / ((~(((((/* implicit */_Bool) 810973638)) ? (arr_36 [i_3] [i_3] [i_3] [i_11]) : (((/* implicit */long long int) ((/* implicit */int) arr_43 [i_11] [i_3] [i_3])))))))));
            arr_51 [i_3] [i_3] = ((/* implicit */int) var_7);
        }
        for (signed char i_15 = 0; i_15 < 14; i_15 += 4) 
        {
            /* LoopSeq 1 */
            for (short i_16 = 1; i_16 < 11; i_16 += 2) 
            {
                var_28 ^= ((/* implicit */short) (unsigned char)147);
                var_29 &= ((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_33 [i_3] [i_15] [i_15] [i_15])) || (((/* implicit */_Bool) arr_33 [i_3] [i_3] [i_3] [i_15])))));
                arr_59 [i_15] |= ((/* implicit */short) ((((int) ((short) arr_39 [i_15]))) & (((/* implicit */int) ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_57 [i_3] [i_3] [i_3]))) + (arr_0 [i_3])))))));
            }
            /* LoopNest 2 */
            for (unsigned int i_17 = 1; i_17 < 10; i_17 += 2) 
            {
                for (short i_18 = 2; i_18 < 11; i_18 += 4) 
                {
                    {
                        var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) var_3))));
                        arr_66 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_45 [i_3] [i_3] [i_17 + 3] [i_17] [i_18] [i_18]))) != (arr_62 [i_18 + 2])));
                        var_31 &= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((unsigned int) 8515072348696553204ULL))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_5)))) : (((((/* implicit */_Bool) arr_13 [i_18])) ? (arr_62 [i_3]) : (((/* implicit */long long int) 4251950399U))))))));
                        var_32 = ((/* implicit */int) max((min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_44 [(short)11] [i_3] [i_3]))))), (min((((/* implicit */unsigned long long int) var_5)), (8515072348696553196ULL))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_3])) & (((/* implicit */int) (unsigned char)80))))), (((((/* implicit */_Bool) arr_17 [i_3])) ? (((/* implicit */unsigned int) arr_65 [i_18] [12LL] [12LL] [12LL])) : (arr_40 [i_3] [i_3]))))))));
                    }
                } 
            } 
            var_33 -= ((/* implicit */unsigned char) max((((/* implicit */long long int) max((max((((/* implicit */int) arr_23 [i_3] [i_3] [i_3])), (arr_65 [i_3] [i_3] [i_3] [i_3]))), (((/* implicit */int) arr_56 [i_3] [i_15] [i_15]))))), (max((((/* implicit */long long int) arr_44 [i_3] [i_15] [i_15])), (((long long int) 16384U))))));
        }
        var_34 = ((/* implicit */unsigned long long int) max((var_34), (((/* implicit */unsigned long long int) arr_64 [i_3] [i_3] [(_Bool)1] [(unsigned char)1] [i_3]))));
    }
}
