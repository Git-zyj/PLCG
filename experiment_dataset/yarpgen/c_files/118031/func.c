/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118031
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 2) /* same iter space */
    {
        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (!(((/* implicit */_Bool) (+(127LL)))))))));
        arr_2 [(signed char)1] [i_0] |= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max(((unsigned short)11968), (((/* implicit */unsigned short) (unsigned char)64))))) ? (((/* implicit */int) ((16672809705870054528ULL) > (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]))))) : (((/* implicit */int) min(((unsigned char)15), (var_15)))))) << (min(((+(arr_1 [i_0] [i_0]))), (((/* implicit */unsigned int) var_9))))));
    }
    for (unsigned char i_1 = 0; i_1 < 12; i_1 += 2) /* same iter space */
    {
        var_19 |= ((/* implicit */unsigned long long int) max((((((3808704663U) + (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) != (((/* implicit */unsigned int) ((/* implicit */int) var_4))))), (((((((/* implicit */_Bool) 2059922730615188608ULL)) ? (arr_1 [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)23054))))) < (((/* implicit */unsigned int) ((/* implicit */int) ((var_6) >= (((/* implicit */long long int) arr_0 [i_1] [i_1]))))))))));
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) (+(((/* implicit */int) var_11))))) != (arr_1 [i_1] [i_1]))) ? (((/* implicit */int) var_10)) : (((((_Bool) arr_4 [i_1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) && (((/* implicit */_Bool) var_3)))))))));
        var_20 |= ((/* implicit */unsigned short) (unsigned char)0);
        arr_6 [i_1] = ((/* implicit */unsigned long long int) (~((~((+(arr_3 [i_1])))))));
    }
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) + (var_7))) / (((/* implicit */unsigned long long int) var_16))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : ((((+(var_5))) & (var_7)))));
    /* LoopSeq 4 */
    for (unsigned short i_2 = 0; i_2 < 15; i_2 += 3) 
    {
        /* LoopSeq 2 */
        for (long long int i_3 = 0; i_3 < 15; i_3 += 4) 
        {
            /* LoopSeq 3 */
            for (short i_4 = 0; i_4 < 15; i_4 += 4) 
            {
                var_22 += ((((((/* implicit */_Bool) ((0U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_3] [i_4])))))) ? (((/* implicit */unsigned long long int) (+(var_16)))) : (var_5))) ^ (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_13 [i_4] [i_2]))))));
                arr_14 [(unsigned short)4] [(unsigned short)4] [i_3] [i_4] = max((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)107))) : (arr_10 [i_3] [(unsigned char)1]))) * (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)47494))) / (arr_11 [i_2] [i_3] [i_2] [i_2])))))), (0ULL));
                var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((((/* implicit */long long int) ((-68588737) / (((/* implicit */int) (unsigned short)21087))))) == (var_0))))));
                var_24 ^= ((/* implicit */unsigned char) (~((-(((/* implicit */int) ((unsigned char) (short)0)))))));
                arr_15 [i_4] [i_2] [i_2] = ((/* implicit */unsigned int) ((((((/* implicit */int) var_2)) >> (min((((/* implicit */unsigned int) arr_9 [(unsigned short)6] [i_2])), (arr_11 [i_2] [i_2] [i_2] [i_2]))))) > (max((((((/* implicit */int) (signed char)31)) * (((/* implicit */int) var_3)))), (((/* implicit */int) (signed char)31))))));
            }
            for (int i_5 = 2; i_5 < 14; i_5 += 3) 
            {
                /* LoopSeq 1 */
                for (long long int i_6 = 0; i_6 < 15; i_6 += 2) 
                {
                    arr_22 [i_2] [5LL] [i_5 - 1] [i_5] = ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_17 [i_5 + 1] [i_5] [i_5 + 1] [i_2])) : (((((/* implicit */_Bool) arr_12 [i_5 - 1])) ? (((/* implicit */int) arr_9 [i_5 - 1] [i_3])) : (arr_12 [i_5 + 1]))));
                    arr_23 [i_5] [i_3] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_4))));
                    arr_24 [i_5] [i_5] = ((/* implicit */_Bool) 0);
                }
                var_25 = ((/* implicit */int) arr_21 [i_2] [i_3] [i_3] [i_5] [i_5]);
                /* LoopSeq 3 */
                for (unsigned char i_7 = 1; i_7 < 14; i_7 += 3) 
                {
                    arr_29 [i_5] = ((/* implicit */unsigned long long int) arr_13 [i_2] [i_7]);
                    var_26 = ((unsigned char) ((((/* implicit */_Bool) arr_26 [i_5 - 1] [i_7 + 1] [i_7] [i_7 + 1] [i_7])) ? (((/* implicit */int) arr_17 [i_7 - 1] [i_7 - 1] [i_5 - 2] [i_5 + 1])) : (((/* implicit */int) arr_17 [i_7 + 1] [i_7 - 1] [i_5 + 1] [i_5 + 1]))));
                    var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_26 [8] [i_7] [i_3] [i_7 + 1] [i_5 - 2]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5)))))) ? (arr_26 [i_2] [i_2] [i_5] [i_7 + 1] [i_5 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_4)))))))));
                    var_28 = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)23054))));
                }
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_9 = 0; i_9 < 15; i_9 += 2) 
                    {
                        arr_36 [i_2] [i_2] [(unsigned short)3] [i_5] [i_9] = ((/* implicit */short) 146LL);
                        arr_37 [i_5] = ((/* implicit */signed char) var_10);
                        var_29 = ((/* implicit */_Bool) min((((/* implicit */int) arr_13 [i_8] [i_2])), (((((/* implicit */int) arr_34 [i_2] [i_3] [i_2] [i_8] [4ULL])) | (((/* implicit */int) arr_17 [i_8] [i_8] [0] [i_2]))))));
                        arr_38 [i_5] [i_8] [i_5] [i_5] [i_5] = ((/* implicit */short) var_13);
                    }
                    for (signed char i_10 = 0; i_10 < 15; i_10 += 3) 
                    {
                        var_30 = ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)55186)) ? (556399978348200867ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) max((var_10), (((/* implicit */unsigned char) arr_31 [i_3] [i_5] [(_Bool)1] [i_5]))))))) : (((/* implicit */int) ((unsigned char) 18446744073709551615ULL))));
                        var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) (~(((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)42497)) | (((/* implicit */int) arr_27 [i_3] [i_5] [(signed char)12] [i_3]))))) | (var_8))))))));
                        arr_41 [i_2] [i_2] [(signed char)8] [i_8] [i_5] = ((/* implicit */signed char) (-(var_1)));
                    }
                    var_32 ^= ((/* implicit */unsigned int) var_7);
                }
                for (unsigned long long int i_11 = 2; i_11 < 14; i_11 += 3) 
                {
                    var_33 = ((/* implicit */int) min((((/* implicit */unsigned char) (!(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)42482))) == (var_17)))))), (arr_32 [i_11] [i_5] [3U] [i_3] [i_2] [i_5] [i_2])));
                    arr_45 [i_5] [(signed char)14] [i_2] [i_2] = ((/* implicit */unsigned long long int) (unsigned short)0);
                    var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [2LL] [i_11])) ? (min((arr_10 [i_5] [i_11]), (((/* implicit */unsigned int) (unsigned short)17057)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) != (arr_10 [i_3] [i_11 + 1])))))))) ? ((+(((/* implicit */int) arr_34 [i_5 - 2] [i_5 - 1] [i_11 - 2] [i_11 - 1] [i_11])))) : (((/* implicit */int) min((arr_31 [i_11 - 2] [i_11] [i_11 + 1] [i_5 + 1]), (arr_31 [i_11 - 2] [i_11 - 2] [i_11 - 2] [i_5 - 2]))))));
                }
            }
            for (unsigned short i_12 = 2; i_12 < 14; i_12 += 2) 
            {
                var_35 = ((/* implicit */unsigned long long int) (unsigned short)55695);
                var_36 = ((/* implicit */unsigned int) (+((-(((/* implicit */int) (unsigned char)1))))));
            }
            var_37 += (~(((((/* implicit */_Bool) max((((/* implicit */signed char) var_9)), (var_13)))) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : ((+(3961011751709395764LL))))));
        }
        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
        {
            var_38 |= ((/* implicit */int) -3621867737449891465LL);
            var_39 |= ((/* implicit */signed char) (-(var_5)));
            var_40 = ((/* implicit */unsigned int) min((var_40), (((/* implicit */unsigned int) (short)-9017))));
        }
        var_41 ^= ((/* implicit */long long int) (unsigned short)42466);
        var_42 = ((/* implicit */long long int) var_12);
        arr_50 [(short)10] [i_2] |= ((/* implicit */short) arr_43 [(unsigned short)0]);
    }
    for (short i_14 = 1; i_14 < 9; i_14 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned char i_15 = 0; i_15 < 10; i_15 += 2) 
        {
            for (unsigned char i_16 = 0; i_16 < 10; i_16 += 3) 
            {
                for (short i_17 = 0; i_17 < 10; i_17 += 4) 
                {
                    {
                        arr_61 [i_16] [i_15] [i_16] [i_16] = ((/* implicit */short) max(((+(((/* implicit */int) arr_54 [i_17])))), (((((/* implicit */_Bool) arr_7 [i_14 + 1])) ? (-64291243) : (((/* implicit */int) (short)9011))))));
                        /* LoopSeq 1 */
                        for (int i_18 = 0; i_18 < 10; i_18 += 2) 
                        {
                            var_43 = 18446744073709551599ULL;
                            var_44 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)58779)) ? (2059922730615188625ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
                        }
                    }
                } 
            } 
        } 
        arr_64 [i_14] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_53 [(unsigned short)0] [i_14 - 1] [i_14 + 1]))));
        var_45 = ((/* implicit */unsigned char) min((var_45), (((/* implicit */unsigned char) var_5))));
    }
    for (unsigned char i_19 = 0; i_19 < 18; i_19 += 4) 
    {
        var_46 = ((/* implicit */unsigned int) max((var_46), (1162759142U)));
        arr_69 [i_19] [i_19] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((var_0) - (((/* implicit */long long int) ((/* implicit */int) arr_66 [1ULL])))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)14000)) == (((/* implicit */int) arr_66 [i_19]))))) : (((/* implicit */int) (unsigned char)0))))));
        arr_70 [i_19] = arr_68 [(unsigned char)6];
    }
    for (int i_20 = 0; i_20 < 20; i_20 += 3) 
    {
        arr_73 [i_20] [i_20] = ((/* implicit */signed char) (+((-(arr_72 [i_20])))));
        /* LoopSeq 1 */
        for (unsigned int i_21 = 0; i_21 < 20; i_21 += 4) 
        {
            arr_77 [i_20] = ((/* implicit */signed char) (+((-(((/* implicit */int) var_15))))));
            var_47 ^= ((/* implicit */unsigned char) (signed char)-70);
        }
        arr_78 [i_20] = ((/* implicit */int) (-(var_5)));
    }
}
