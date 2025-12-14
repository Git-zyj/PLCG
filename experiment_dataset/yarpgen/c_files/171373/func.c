/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171373
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
    var_19 &= ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)210)) ? (3925492463521367147ULL) : (14521251610188184474ULL)));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] [i_0] = (~(min((((/* implicit */unsigned long long int) arr_0 [i_0])), (3925492463521367147ULL))));
        arr_4 [i_0] [i_0] = 14521251610188184474ULL;
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 16; i_2 += 3) 
            {
                {
                    var_20 ^= ((/* implicit */signed char) (-(var_0)));
                    var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) (short)-28871))));
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-122)) % (-1163743083)));
                    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) 4212649669783792490ULL))));
                }
            } 
        } 
    }
    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 3) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned short) arr_5 [5LL] [i_3] [11ULL]);
        /* LoopNest 2 */
        for (signed char i_4 = 2; i_4 < 15; i_4 += 4) 
        {
            for (unsigned int i_5 = 1; i_5 < 14; i_5 += 3) 
            {
                {
                    var_25 = ((/* implicit */unsigned long long int) max((var_25), (5087703046842998387ULL)));
                    var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) 6661062248892444422ULL))));
                }
            } 
        } 
        arr_19 [i_3] [i_3] = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) var_6)) % ((-(((/* implicit */int) (short)-9))))))));
        /* LoopNest 2 */
        for (long long int i_6 = 0; i_6 < 17; i_6 += 4) 
        {
            for (signed char i_7 = 0; i_7 < 17; i_7 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (short i_8 = 1; i_8 < 16; i_8 += 4) 
                    {
                        var_27 += ((/* implicit */unsigned long long int) (+(max((arr_27 [i_8] [i_8] [i_8] [i_8 - 1] [i_8]), (((/* implicit */unsigned int) (short)7))))));
                        /* LoopSeq 2 */
                        for (unsigned char i_9 = 1; i_9 < 15; i_9 += 4) /* same iter space */
                        {
                            var_28 = ((/* implicit */_Bool) arr_20 [i_9 - 1] [i_9 - 1] [i_8 - 1]);
                            arr_30 [5] [i_6] [i_3] = ((/* implicit */signed char) var_2);
                            var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_24 [i_3] [i_9 - 1] [i_3])) / (((/* implicit */int) arr_8 [i_8 - 1] [i_8 + 1] [i_8 + 1]))))) ? (max((arr_27 [i_9] [i_9] [i_9] [i_9 + 2] [i_9]), (arr_27 [i_8] [i_8] [i_9] [i_9 + 2] [i_8]))) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_16 [i_3] [i_9 - 1]), (arr_16 [i_3] [i_8 - 1])))))));
                        }
                        for (unsigned char i_10 = 1; i_10 < 15; i_10 += 4) /* same iter space */
                        {
                            var_30 = ((/* implicit */unsigned int) max((((8187089614426683243ULL) | (((/* implicit */unsigned long long int) arr_34 [i_10 - 1] [i_3] [i_10 - 1] [i_10 - 1] [i_10 + 2])))), (((((/* implicit */_Bool) arr_31 [i_10] [i_10 + 1] [i_10 + 1] [i_10 + 1] [i_10 - 1] [i_10 + 1] [i_10])) ? (((/* implicit */unsigned long long int) arr_34 [i_10] [i_3] [i_10] [i_10] [i_10 - 1])) : (3925492463521367147ULL)))));
                            arr_35 [i_3] [i_3] [i_8 - 1] [i_8 - 1] = ((/* implicit */signed char) arr_26 [i_6] [0LL]);
                        }
                        var_31 = ((/* implicit */unsigned char) ((short) arr_10 [i_6]));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_11 = 0; i_11 < 17; i_11 += 4) 
                    {
                        arr_38 [i_3] [i_6] [i_7] [i_11] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) (short)24840)) ? (arr_33 [i_3] [i_3] [i_6] [i_6] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_3] [i_6]))))));
                        var_32 += ((/* implicit */long long int) var_1);
                    }
                    for (unsigned int i_12 = 0; i_12 < 17; i_12 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_13 = 0; i_13 < 17; i_13 += 4) 
                        {
                            arr_46 [i_3] [i_3] [i_7] [i_3] [i_3] = ((/* implicit */signed char) var_4);
                            var_33 = ((/* implicit */int) arr_14 [i_3] [i_3] [i_12]);
                        }
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            arr_49 [i_3] [i_6] [i_7] [i_3] [i_14] [i_3] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (short)-28871)))))))) / (max((((/* implicit */unsigned long long int) max((var_9), (arr_15 [i_7])))), (min((arr_13 [i_3] [i_3] [i_7]), (3925492463521367146ULL)))))));
                            var_34 = ((/* implicit */unsigned int) max((var_34), (max((max((((((/* implicit */_Bool) var_7)) ? (var_3) : (var_13))), (((/* implicit */unsigned int) arr_7 [i_6] [i_6] [i_12] [i_14])))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_21 [i_7] [i_12] [i_7])) ? (((((/* implicit */int) arr_9 [i_12] [i_12] [i_12] [i_12])) | (((/* implicit */int) arr_16 [i_7] [i_7])))) : (((/* implicit */int) (unsigned short)32668)))))))));
                            arr_50 [i_3] [i_12] [i_3] = ((/* implicit */unsigned int) ((((3925492463521367136ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) ^ (((((/* implicit */_Bool) min((var_6), (arr_37 [i_3] [i_6])))) ? (var_4) : (((/* implicit */unsigned long long int) ((var_3) >> (((((/* implicit */int) (short)-26341)) + (26372))))))))));
                            var_35 = ((/* implicit */long long int) max((((/* implicit */unsigned int) arr_24 [i_3] [i_6] [i_6])), (((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_3] [i_6] [i_7]))) & (max((var_3), (((/* implicit */unsigned int) var_9))))))));
                            arr_51 [i_3] [i_3] [i_7] [i_7] [i_3] [i_14] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (signed char)-66)), (18446744073709551615ULL)));
                        }
                        arr_52 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) var_4);
                        var_36 = ((/* implicit */unsigned short) min((var_36), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) 4161708171827176072LL)) ? (arr_42 [i_12] [i_7] [i_6] [i_3] [i_3]) : (arr_42 [i_12] [i_12] [i_7] [i_6] [i_3]))), (arr_42 [i_3] [i_6] [11] [i_7] [i_12]))))));
                        arr_53 [i_3] [i_12] [i_7] [i_3] = (+(((/* implicit */int) arr_0 [i_12])));
                        var_37 ^= ((/* implicit */signed char) arr_11 [i_12] [10LL]);
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_15 = 1; i_15 < 16; i_15 += 4) 
                    {
                        for (unsigned long long int i_16 = 1; i_16 < 16; i_16 += 3) 
                        {
                            {
                                arr_61 [i_6] [i_3] = ((/* implicit */unsigned int) max((((/* implicit */long long int) var_9)), (arr_18 [i_3] [i_15 + 1] [i_7] [i_3])));
                                arr_62 [i_3] [i_3] = max((((/* implicit */short) var_8)), (max(((short)-10), ((short)-28871))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_63 [i_3] = ((/* implicit */short) min((((/* implicit */int) arr_14 [i_3] [i_3] [i_3])), (((arr_7 [(signed char)1] [(short)10] [i_3] [i_3]) % (((/* implicit */int) arr_20 [12U] [i_3] [i_3]))))));
    }
}
