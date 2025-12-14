/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140973
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
    for (int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */_Bool) min(((unsigned char)113), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((-4285323067822916997LL), (((/* implicit */long long int) (unsigned char)138))))) && (((/* implicit */_Bool) (+(((/* implicit */int) var_9))))))))));
                var_15 = ((/* implicit */long long int) max((var_15), (min((((((/* implicit */_Bool) var_5)) ? (3212938519261050196LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))))), (((/* implicit */long long int) min((((/* implicit */short) arr_0 [i_0])), ((short)32767))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) var_5))) ? (((/* implicit */int) ((var_13) <= (var_3)))) : (((/* implicit */int) (unsigned char)90))));
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 18; i_2 += 1) 
    {
        for (unsigned char i_3 = 1; i_3 < 17; i_3 += 2) 
        {
            {
                arr_14 [14] = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) (unsigned short)65510)) ? (-8354800247885774498LL) : (((/* implicit */long long int) ((/* implicit */int) (short)32767))))));
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned char i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        {
                            arr_20 [i_4] [i_5] = ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))));
                            var_17 = ((/* implicit */unsigned short) 1073610752U);
                        }
                    } 
                } 
                var_18 ^= ((/* implicit */long long int) var_4);
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) % (1051091444U)));
    /* LoopSeq 2 */
    for (unsigned long long int i_6 = 1; i_6 < 14; i_6 += 1) 
    {
        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-63))) : (arr_12 [i_6 - 1] [i_6 - 1]))), ((-(arr_12 [i_6 + 1] [i_6 + 1]))))))));
        arr_23 [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_6] [i_6 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [8LL]))) : (max((((/* implicit */unsigned int) arr_4 [i_6])), (var_8)))))) ? (3243875871U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) (+(3669735404U))))));
        arr_24 [i_6] = ((/* implicit */unsigned char) max(((!(var_9))), (((((/* implicit */int) arr_16 [14ULL])) < (((/* implicit */int) arr_16 [8ULL]))))));
    }
    for (long long int i_7 = 0; i_7 < 12; i_7 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_8 = 3; i_8 < 11; i_8 += 2) 
        {
            for (short i_9 = 0; i_9 < 12; i_9 += 1) 
            {
                {
                    arr_33 [i_7] [i_8] [i_8] [i_7] = ((((/* implicit */_Bool) max((min((((/* implicit */long long int) var_8)), (var_12))), (((/* implicit */long long int) min((arr_25 [i_7]), (var_10))))))) ? (min((arr_12 [i_8 - 1] [i_8 - 1]), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))));
                    /* LoopSeq 3 */
                    for (unsigned int i_10 = 3; i_10 < 9; i_10 += 1) 
                    {
                        var_22 = (!(((/* implicit */_Bool) min((arr_34 [i_8 + 1] [i_10 + 3] [i_10 + 3] [i_10]), (((/* implicit */short) arr_15 [i_8 + 1] [i_7] [i_10 + 2]))))));
                        var_23 = ((/* implicit */signed char) ((((/* implicit */int) ((min((9223372036854775807LL), (((/* implicit */long long int) var_10)))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) 2601582282U)) ? (var_4) : (((/* implicit */int) (_Bool)1)))))))) - ((-(((/* implicit */int) arr_34 [i_7] [i_8 - 2] [i_8] [i_10 - 1]))))));
                        var_24 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_22 [i_7]), (((/* implicit */unsigned char) (_Bool)1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -9223372036854775805LL))))) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) (-(arr_12 [i_7] [i_7])))) ? (((arr_3 [i_8]) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)149)) <= (((/* implicit */int) var_10))))))) : (((/* implicit */int) var_2))));
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) (-(((((/* implicit */int) (short)32757)) % (((/* implicit */int) (_Bool)1)))))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (long long int i_12 = 0; i_12 < 12; i_12 += 2) 
                        {
                            arr_40 [i_7] [9ULL] [i_7] [9ULL] [i_7] [1U] [i_7] = ((/* implicit */long long int) ((arr_7 [i_8 - 3]) < (((/* implicit */unsigned int) ((/* implicit */int) (short)-18877)))));
                            var_26 = ((/* implicit */unsigned int) (signed char)62);
                        }
                        for (unsigned short i_13 = 3; i_13 < 11; i_13 += 1) 
                        {
                            arr_43 [i_7] [i_13] = ((/* implicit */long long int) (unsigned short)32567);
                            var_27 = ((/* implicit */short) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (short)15628)), (-9223372036854775803LL)))), (((unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) 8354800247885774498LL)) : (13523372993756689147ULL))))));
                            arr_44 [i_7] [i_7] [i_9] [i_7] [(short)0] [i_13] = ((/* implicit */unsigned int) ((min((arr_38 [(unsigned char)9] [i_13 - 1] [(unsigned char)9] [(unsigned char)9] [(unsigned char)9] [i_7]), (((/* implicit */unsigned int) var_11)))) < ((+(((((/* implicit */_Bool) (unsigned short)42533)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))))));
                        }
                        for (unsigned long long int i_14 = 4; i_14 < 10; i_14 += 1) 
                        {
                            arr_48 [i_7] [i_7] [i_9] [i_7] [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */unsigned short) (short)-20741)), ((unsigned short)42515)))) % (((/* implicit */int) var_1))));
                            arr_49 [i_7] [i_7] [i_9] [i_7] [i_14 - 4] [10ULL] = ((/* implicit */unsigned int) ((((_Bool) 12699270195771780066ULL)) && (((/* implicit */_Bool) arr_41 [i_9] [i_14 + 2] [i_14] [i_7] [i_14 + 2]))));
                            var_28 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -890406430)), (5207055331399094951ULL)))) ? (((-7877113080037169303LL) - (((/* implicit */long long int) ((/* implicit */int) arr_31 [(_Bool)1] [i_11] [(_Bool)1]))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) < (arr_29 [i_7] [i_7] [i_7]))))))));
                            arr_50 [i_7] [i_7] [(unsigned short)7] [i_7] [5] = ((/* implicit */long long int) arr_38 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]);
                        }
                        var_29 = ((/* implicit */short) max((max((arr_29 [i_7] [i_7] [i_8 + 1]), (((/* implicit */unsigned long long int) arr_19 [i_8] [i_8] [i_8 + 1] [i_8 - 2] [i_8 - 3])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_8] [i_8] [i_8 - 1] [i_8 - 2] [i_8 - 3])) && (((/* implicit */_Bool) arr_29 [i_8] [i_8] [i_8 - 3])))))));
                    }
                    for (long long int i_15 = 0; i_15 < 12; i_15 += 2) 
                    {
                        var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 0LL)) && (((/* implicit */_Bool) var_7))))), (max((var_8), (arr_7 [i_7])))))) <= (min((((/* implicit */unsigned long long int) (unsigned char)193)), (5564872867282919631ULL)))));
                        arr_55 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */short) 4976213183494513644LL);
                    }
                }
            } 
        } 
        arr_56 [i_7] = ((/* implicit */long long int) min((var_2), (((/* implicit */short) ((arr_36 [i_7] [3LL] [i_7] [i_7] [i_7]) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)14336))) < (-8354800247885774503LL))))))))));
    }
}
