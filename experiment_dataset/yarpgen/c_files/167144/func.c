/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167144
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        arr_2 [i_0] [(unsigned char)7] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_0 [i_0])))) ? (min((((/* implicit */long long int) arr_0 [i_0])), (max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))))) : ((-(-3126255731979783488LL)))));
        arr_3 [i_0] = ((/* implicit */unsigned short) 1895267431);
        var_16 = (-(((long long int) max((arr_0 [(signed char)7]), (arr_0 [i_0])))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */short) (-(((/* implicit */int) (_Bool)1))));
        /* LoopSeq 4 */
        for (short i_2 = 2; i_2 < 11; i_2 += 2) 
        {
            var_17 = ((/* implicit */short) (~((-(arr_1 [i_1] [6LL])))));
            /* LoopNest 3 */
            for (long long int i_3 = 0; i_3 < 14; i_3 += 2) 
            {
                for (short i_4 = 1; i_4 < 12; i_4 += 2) 
                {
                    for (short i_5 = 0; i_5 < 14; i_5 += 2) 
                    {
                        {
                            arr_19 [i_1] [(short)8] [9U] [(short)8] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -556108118972881634LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (8999135339532108454ULL)));
                            var_18 = var_1;
                        }
                    } 
                } 
            } 
            var_19 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((-2419605754001827528LL) + (((/* implicit */long long int) ((/* implicit */int) (signed char)95)))))) && (((/* implicit */_Bool) (+(var_5))))));
        }
        /* vectorizable */
        for (unsigned char i_6 = 0; i_6 < 14; i_6 += 2) 
        {
            arr_22 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (short)21611);
            arr_23 [i_1] = ((/* implicit */_Bool) ((((((/* implicit */int) var_15)) != (var_9))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_1] [i_1] [i_1] [i_1] [i_6]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) / (456816556916576900ULL)))));
        }
        for (unsigned short i_7 = 0; i_7 < 14; i_7 += 2) 
        {
            var_20 ^= ((/* implicit */short) arr_13 [i_1] [i_1] [i_7] [i_7]);
            /* LoopNest 2 */
            for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
            {
                for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 2) 
                {
                    {
                        var_21 ^= ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_12 [i_1] [i_1]) < (((/* implicit */unsigned int) var_0)))))) | (((arr_12 [i_8 - 1] [(unsigned char)11]) * (arr_12 [i_7] [i_7]))));
                        arr_32 [12ULL] [i_7] [i_8] [i_9] = ((/* implicit */signed char) min((((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_31 [i_9])) ? (((/* implicit */int) var_13)) : (arr_0 [i_1]))), (((((/* implicit */int) (_Bool)1)) ^ (var_0)))))), (arr_10 [i_9] [i_7] [i_9])));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (short i_10 = 2; i_10 < 10; i_10 += 2) 
            {
                var_22 ^= ((/* implicit */_Bool) (+(max((arr_30 [i_10] [i_10 + 4] [i_10 + 3] [(unsigned char)0] [i_10 + 4] [(short)10]), (((/* implicit */int) var_15))))));
                arr_36 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_4) | (arr_18 [i_10] [i_10 - 2])))) ? (((/* implicit */unsigned long long int) arr_18 [i_7] [i_10 + 3])) : (max((949392668527137280ULL), (((/* implicit */unsigned long long int) arr_18 [i_1] [i_10 + 2]))))));
                var_23 = ((((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)121))))) / (((((/* implicit */_Bool) ((((/* implicit */int) arr_31 [(short)8])) + (((/* implicit */int) var_13))))) ? ((+(arr_35 [i_1] [i_1] [0] [i_10]))) : (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)0))))))));
            }
            for (signed char i_11 = 1; i_11 < 12; i_11 += 2) 
            {
                /* LoopNest 2 */
                for (signed char i_12 = 4; i_12 < 13; i_12 += 2) 
                {
                    for (long long int i_13 = 0; i_13 < 14; i_13 += 2) 
                    {
                        {
                            var_24 = ((/* implicit */_Bool) arr_34 [(short)2]);
                            var_25 = ((/* implicit */unsigned int) arr_8 [i_11] [i_11] [(unsigned short)8]);
                            var_26 = ((/* implicit */short) var_13);
                            var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */long long int) ((/* implicit */int) arr_39 [(unsigned char)4] [i_7] [i_11 + 2] [i_11 + 2] [i_11 + 2]))) & (arr_27 [i_1] [(_Bool)1] [(short)6]))), (((/* implicit */long long int) arr_10 [i_11 - 1] [i_11] [i_12 - 2]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_43 [(signed char)7] [i_11 - 1] [i_11 - 1] [i_11] [i_11] [i_12])) < (((/* implicit */int) ((((/* implicit */long long int) var_5)) != (arr_35 [i_1] [i_7] [i_11 + 1] [i_11 + 1])))))))) : (((arr_27 [i_11 + 1] [i_11] [i_13]) | (arr_5 [i_11 - 1] [i_11 + 2])))));
                            arr_45 [i_1] [i_7] [i_7] [i_12] [i_13] = ((/* implicit */short) max((((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (unsigned char)201)) - (192))))), (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_14 [(short)2] [(short)2] [i_12 - 3])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_15))))))));
                        }
                    } 
                } 
                var_28 = ((/* implicit */signed char) max(((-(arr_38 [i_1] [i_1] [i_1]))), (((/* implicit */unsigned long long int) ((_Bool) ((short) var_2))))));
            }
            var_29 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-99)) || (((/* implicit */_Bool) arr_0 [i_7]))))), (arr_1 [i_1] [i_7]))))));
            /* LoopSeq 1 */
            for (long long int i_14 = 0; i_14 < 14; i_14 += 2) 
            {
                var_30 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) arr_1 [i_14] [(signed char)4])) ? (max((((/* implicit */long long int) arr_4 [i_1] [i_7])), (var_12))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_28 [i_14] [i_14] [i_14])) != (var_5))))))));
                var_31 = ((/* implicit */unsigned int) arr_16 [i_14] [i_7] [i_7] [i_1] [10ULL] [i_1]);
                arr_48 [i_1] [i_7] [i_14] = ((/* implicit */long long int) ((((/* implicit */unsigned int) min((arr_18 [(signed char)6] [i_14]), (arr_18 [i_7] [i_14])))) & (arr_4 [(unsigned char)3] [i_14])));
                /* LoopNest 2 */
                for (unsigned long long int i_15 = 0; i_15 < 14; i_15 += 2) 
                {
                    for (unsigned char i_16 = 0; i_16 < 14; i_16 += 2) 
                    {
                        {
                            var_32 &= ((/* implicit */_Bool) ((arr_11 [(signed char)4] [i_7] [(unsigned short)5] [i_15]) & ((~(-613278006467301121LL)))));
                            var_33 ^= ((/* implicit */unsigned int) (((+(((((/* implicit */long long int) ((/* implicit */int) arr_37 [i_15] [i_16]))) * (arr_35 [i_1] [i_1] [13LL] [i_1]))))) > (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_16] [i_7])))));
                            arr_56 [i_1] [i_7] [(unsigned char)5] [i_15] [i_16] [i_14] = ((/* implicit */long long int) arr_29 [i_7] [i_15] [i_15]);
                            var_34 = ((/* implicit */unsigned char) arr_18 [i_1] [i_16]);
                            arr_57 [i_1] [4LL] [i_14] [i_15] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) arr_12 [i_1] [i_14]))) ? (((/* implicit */long long int) (((((~(((/* implicit */int) arr_51 [i_1] [i_7] [6LL] [6LL])))) + (2147483647))) >> (((arr_10 [i_1] [i_7] [i_14]) - (3589723887U)))))) : (((((((/* implicit */long long int) 3022608614U)) & (var_12))) % (((/* implicit */long long int) ((/* implicit */int) var_15)))))));
                        }
                    } 
                } 
                arr_58 [i_1] [i_1] [9U] [i_14] |= ((/* implicit */int) ((((/* implicit */_Bool) (signed char)17)) ? (((arr_24 [i_7] [i_7] [i_7]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_1]))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_9 [6] [i_14])))))));
            }
        }
        for (signed char i_17 = 0; i_17 < 14; i_17 += 2) 
        {
            arr_63 [i_17] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)22165)) >> (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_13)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)49753)) : (var_4)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-67))))) : (((((/* implicit */int) var_2)) & (((/* implicit */int) arr_44 [i_17]))))))));
            arr_64 [i_1] [i_1] [6] = ((/* implicit */short) ((((((/* implicit */int) (!(var_2)))) | (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_1] [i_1])) || (arr_37 [i_1] [i_17])))))) & (((/* implicit */int) ((((/* implicit */int) arr_8 [i_1] [i_1] [(short)0])) > (((/* implicit */int) arr_8 [i_17] [i_17] [5ULL])))))));
            var_35 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_62 [(_Bool)1] [i_17] [i_17])))) ? ((~(arr_10 [i_1] [i_17] [i_17]))) : (((/* implicit */unsigned int) ((((arr_52 [i_1] [i_1] [i_17] [i_17] [i_1]) ? (((/* implicit */int) arr_17 [i_1] [i_1] [i_1] [10LL] [i_1])) : (((/* implicit */int) arr_33 [i_1] [i_17] [i_1])))) * (((/* implicit */int) (_Bool)1)))))));
        }
    }
    /* vectorizable */
    for (unsigned char i_18 = 2; i_18 < 17; i_18 += 2) 
    {
        arr_68 [i_18 - 1] [(signed char)13] = (-(((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_10)) : (var_8))));
        var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) ((arr_65 [(short)13]) > (((/* implicit */unsigned int) ((/* implicit */int) arr_66 [7U]))))))));
        /* LoopNest 2 */
        for (signed char i_19 = 3; i_19 < 17; i_19 += 2) 
        {
            for (unsigned char i_20 = 0; i_20 < 18; i_20 += 2) 
            {
                {
                    var_37 = ((/* implicit */unsigned char) (~(arr_73 [i_18 - 1] [(unsigned char)2] [i_19] [i_19])));
                    var_38 = ((/* implicit */unsigned char) (~(arr_73 [i_18 - 1] [(unsigned char)1] [i_20] [i_20])));
                }
            } 
        } 
        var_39 = ((/* implicit */int) min((var_39), (((/* implicit */int) (+(arr_65 [i_18 - 2]))))));
        arr_76 [i_18 + 1] &= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_65 [i_18])) ? (((/* implicit */int) (unsigned short)15783)) : (((/* implicit */int) (unsigned char)246))))));
    }
    var_40 = ((/* implicit */long long int) var_15);
    var_41 = ((/* implicit */unsigned int) ((max((var_4), (((/* implicit */int) var_3)))) >= (((/* implicit */int) var_11))));
    var_42 = ((/* implicit */short) (~(((((/* implicit */_Bool) var_8)) ? (((((/* implicit */int) (unsigned short)22179)) - (((/* implicit */int) (signed char)107)))) : ((+(((/* implicit */int) (_Bool)1))))))));
}
