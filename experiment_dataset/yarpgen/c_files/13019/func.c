/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13019
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_17 ^= ((/* implicit */signed char) min((arr_4 [i_1]), (((((/* implicit */int) var_4)) - (((/* implicit */int) ((arr_4 [i_1]) == (((/* implicit */int) (signed char)-83)))))))));
                var_18 = ((/* implicit */unsigned short) ((short) ((arr_0 [i_1]) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))));
                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_14))) || (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) != (min((arr_3 [i_0] [(signed char)10] [i_0]), (((/* implicit */long long int) var_10))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_2 = 0; i_2 < 19; i_2 += 3) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 4; i_4 < 16; i_4 += 3) 
            {
                {
                    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) ((_Bool) var_0)))))), (((var_13) >> ((((~(((/* implicit */int) arr_8 [i_3])))) - (81))))))))));
                    var_21 = ((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_2] [i_3] [i_4])) ? (((/* implicit */long long int) 1048812909U)) : (var_7)))), (max((((/* implicit */unsigned long long int) var_7)), (var_15))))) == (((/* implicit */unsigned long long int) min((arr_10 [i_2] [0] [i_4 - 4]), (((/* implicit */long long int) (signed char)64)))))));
                    arr_16 [i_2] [i_3] [i_4] [13U] = ((/* implicit */signed char) max((((/* implicit */unsigned int) (+(((/* implicit */int) arr_8 [i_2]))))), (max((((4294967277U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))))), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) > (arr_14 [i_2] [i_2] [i_4] [i_4]))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 19; i_5 += 3) 
                    {
                        for (int i_6 = 1; i_6 < 17; i_6 += 1) 
                        {
                            {
                                var_22 *= ((/* implicit */unsigned char) ((unsigned int) (~(((/* implicit */int) ((-9164203634515860965LL) != (((/* implicit */long long int) arr_18 [0LL] [0LL]))))))));
                                arr_21 [i_2] [i_2] [i_4 + 1] [i_4 + 1] [i_5] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_15 [i_4 - 4] [i_5] [i_6 - 1])) == (arr_19 [i_6 - 1] [i_4 + 2]))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_3] [i_4 + 1] [i_6 - 1] [i_6 + 2])) ? (arr_14 [i_3] [i_4 - 4] [i_6 + 1] [i_6 - 1]) : (arr_14 [i_4] [i_4 + 3] [i_6 + 2] [11LL]))))));
                                var_23 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_13 [i_6 - 1] [i_3] [i_4 - 1])) && (((/* implicit */_Bool) arr_13 [i_6 + 2] [i_3] [i_4 + 1])))) || (((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [i_6 + 1] [i_3] [i_4 - 3])))))));
                            }
                        } 
                    } 
                    arr_22 [(_Bool)1] [i_2] [(unsigned char)16] [i_2] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967277U)) ? (761009380) : (arr_19 [i_2] [i_3])))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_13 [i_2] [i_3] [i_4]), (((/* implicit */signed char) (_Bool)1)))))) : (arr_20 [i_2] [i_3] [i_4 + 2] [i_2] [i_3]))) != (((/* implicit */unsigned int) ((arr_17 [i_4 - 1] [i_4 - 3] [i_4 - 1] [i_4] [i_4 - 3] [i_4]) ? (((/* implicit */int) arr_12 [i_4 + 3])) : (((((/* implicit */_Bool) -1774444234)) ? (((/* implicit */int) arr_12 [(unsigned short)11])) : (((/* implicit */int) arr_17 [i_2] [i_2] [i_2] [7ULL] [i_2] [i_2])))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned long long int i_7 = 1; i_7 < 19; i_7 += 3) 
    {
        /* LoopNest 3 */
        for (long long int i_8 = 2; i_8 < 17; i_8 += 2) 
        {
            for (long long int i_9 = 0; i_9 < 20; i_9 += 2) 
            {
                for (unsigned int i_10 = 2; i_10 < 16; i_10 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_11 = 2; i_11 < 19; i_11 += 1) 
                        {
                            var_24 = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) (short)31998)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) arr_34 [i_7] [i_7] [i_7] [i_10] [i_7] [i_7 - 1] [i_9])))) >= (((/* implicit */int) arr_26 [i_7] [i_7] [i_9])))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (-(((/* implicit */int) var_10))))), ((+(arr_31 [i_7] [i_7] [i_7] [1] [(unsigned short)11])))))) : (min((min((var_14), (((/* implicit */unsigned long long int) (unsigned short)1)))), (((/* implicit */unsigned long long int) arr_26 [i_7] [i_8 - 2] [i_9]))))));
                            var_25 += ((/* implicit */long long int) max((((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-1)), (var_16)))), (max((((((/* implicit */int) (unsigned short)65535)) & (var_11))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_2)) : (var_11)))))));
                        }
                        /* vectorizable */
                        for (long long int i_12 = 4; i_12 < 19; i_12 += 4) 
                        {
                            arr_39 [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_38 [i_7] [i_8] [i_10 + 4] [i_10 + 4])) ? (4259864925078750851ULL) : (var_14)));
                            var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)94)) : (((/* implicit */int) var_1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-83))) : (arr_33 [i_12] [i_12 - 3] [i_12 - 4] [i_12] [i_12] [(unsigned char)18] [i_12 - 4])));
                        }
                        var_27 = ((/* implicit */_Bool) (-(min((((((/* implicit */_Bool) (signed char)102)) ? (var_14) : (((/* implicit */unsigned long long int) arr_23 [(_Bool)1])))), (((/* implicit */unsigned long long int) var_3))))));
                        arr_40 [i_7] [i_9] [i_7] [i_7] = ((/* implicit */signed char) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_31 [i_10 + 1] [7LL] [i_8 - 2] [i_8] [i_8 + 1]))))), (max((min((((/* implicit */unsigned short) arr_26 [i_7] [i_8] [i_9])), ((unsigned short)59505))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_28 [i_10 + 2] [i_7] [(unsigned short)1])))))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_13 = 0; i_13 < 20; i_13 += 3) 
                        {
                            arr_44 [i_7] [i_8 + 3] [i_7] [i_8] [i_9] [i_7] [i_13] = ((/* implicit */signed char) var_1);
                            arr_45 [i_7 - 1] [i_7] [(unsigned short)18] [i_7] [i_7] = ((/* implicit */unsigned int) arr_36 [13ULL] [i_8 - 2] [i_13] [i_7] [i_9]);
                        }
                        for (int i_14 = 1; i_14 < 17; i_14 += 2) 
                        {
                            var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) arr_42 [i_8] [i_8 - 1] [i_7] [i_14 - 1] [i_14] [i_14 + 1]))) + (((((/* implicit */int) arr_37 [i_14] [(unsigned short)10] [i_9] [i_9] [i_7 + 1] [i_7 + 1] [i_7])) - (arr_43 [i_8 + 1] [i_8 + 1] [i_8 - 2])))));
                            arr_48 [i_7] [i_8 + 2] [i_7] [i_10 + 4] [(unsigned char)14] = (-(((((/* implicit */int) var_16)) - (((/* implicit */int) arr_36 [i_7 - 1] [i_7 - 1] [i_9] [i_7] [i_14 - 1])))));
                        }
                        var_29 |= ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_36 [i_7 + 1] [i_7 - 1] [i_7 - 1] [i_9] [i_8 + 3])) ? (((/* implicit */int) arr_37 [(unsigned short)16] [(signed char)9] [12ULL] [i_10 + 2] [i_10 - 1] [i_10 + 4] [i_10])) : (var_11))), (((/* implicit */int) ((unsigned short) var_13)))));
                    }
                } 
            } 
        } 
        var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((((((/* implicit */_Bool) arr_29 [i_7 + 1] [i_7] [i_7] [i_7 + 1])) ? (((/* implicit */int) arr_37 [i_7] [(signed char)5] [i_7 - 1] [(short)18] [i_7] [i_7] [(signed char)3])) : (arr_46 [i_7 - 1]))) < (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-102)))))))) : (min((((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (unsigned char)255)))), (((/* implicit */int) arr_37 [i_7] [(signed char)3] [i_7 + 1] [i_7] [i_7 - 1] [i_7] [(unsigned short)1]))))));
    }
    for (long long int i_15 = 0; i_15 < 17; i_15 += 2) 
    {
        var_31 = ((/* implicit */unsigned int) var_8);
        /* LoopNest 3 */
        for (short i_16 = 3; i_16 < 15; i_16 += 1) 
        {
            for (unsigned long long int i_17 = 0; i_17 < 17; i_17 += 1) 
            {
                for (unsigned long long int i_18 = 2; i_18 < 13; i_18 += 4) 
                {
                    {
                        arr_62 [i_18] [i_16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_51 [i_16 + 2] [i_16 - 1])), (9164203634515860964LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_41 [i_16] [i_16 - 2] [i_16 - 2] [i_18 - 1])) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_59 [i_17] [i_16] [i_17] [i_16 - 3] [i_16 - 3] [i_18 + 2])))))) : ((-(min((var_13), (13743922084212755973ULL)))))));
                        var_32 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_16))));
                        arr_63 [i_15] [i_16] [i_17] [i_16] [i_16] [i_16] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (var_3) : (((/* implicit */int) var_4))))) & (arr_41 [i_16] [i_18] [i_17] [i_18 - 1])));
                    }
                } 
            } 
        } 
    }
    for (long long int i_19 = 0; i_19 < 15; i_19 += 2) 
    {
        arr_66 [1LL] = ((/* implicit */int) arr_42 [i_19] [(unsigned short)14] [i_19] [i_19] [(signed char)18] [i_19]);
        arr_67 [i_19] = ((/* implicit */short) 4259864925078750851ULL);
    }
}
