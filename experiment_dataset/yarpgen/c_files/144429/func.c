/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144429
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
    var_14 = ((/* implicit */int) max((456837015987887048LL), (((/* implicit */long long int) var_6))));
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((unsigned short) var_11)))));
        arr_4 [i_0] [5LL] = ((/* implicit */unsigned short) 281337537757184ULL);
    }
    for (unsigned long long int i_1 = 1; i_1 < 12; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_4 = 1; i_4 < 12; i_4 += 1) 
                    {
                        for (short i_5 = 0; i_5 < 13; i_5 += 3) 
                        {
                            {
                                arr_17 [i_5] [i_1] [i_3] [i_1] [3ULL] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_8 [i_1 - 1])) ? (18446462736171794446ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1 - 1]))))), (((/* implicit */unsigned long long int) var_10))));
                                var_16 += ((/* implicit */unsigned short) 33030144LL);
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (int i_6 = 0; i_6 < 13; i_6 += 3) /* same iter space */
                    {
                        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)248)))))));
                        var_18 = ((/* implicit */unsigned short) 18446462736171794430ULL);
                        arr_20 [i_1] [i_1] [i_2 - 1] [i_3] [i_6] [i_6] = ((/* implicit */short) max((3171656686386066910LL), (((/* implicit */long long int) arr_8 [i_1]))));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 13; i_7 += 3) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (long long int i_8 = 0; i_8 < 13; i_8 += 1) 
                        {
                            var_19 = ((/* implicit */short) ((((/* implicit */int) var_6)) <= ((~(((/* implicit */int) (unsigned short)34803))))));
                            arr_26 [i_2] [i_2] [i_1] [i_2] [i_1 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)109)) ? (((/* implicit */int) arr_21 [i_1] [i_8] [i_8] [i_1])) : (((/* implicit */int) arr_21 [0ULL] [i_1 + 1] [(short)4] [i_1]))));
                            var_20 *= ((/* implicit */_Bool) ((unsigned short) ((var_4) << (((3198980196157532980ULL) - (3198980196157532979ULL))))));
                            var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) (~(((/* implicit */int) arr_7 [i_1 - 1] [i_2 - 1])))))));
                        }
                        for (long long int i_9 = 1; i_9 < 11; i_9 += 4) 
                        {
                            var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) (unsigned char)0))));
                            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_19 [i_1] [i_1] [i_1] [i_2 - 1])) ? (((/* implicit */int) arr_19 [i_1] [i_1] [i_1] [i_2 - 1])) : (((/* implicit */int) arr_19 [i_1] [i_2 - 1] [i_1] [i_2 - 1]))));
                            var_24 = ((/* implicit */short) ((((/* implicit */int) arr_10 [9ULL] [(short)12] [i_2 - 1] [12LL])) <= (((/* implicit */int) var_12))));
                        }
                        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                        {
                            var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)132)) ? (((/* implicit */int) (unsigned short)19235)) : (((/* implicit */int) arr_25 [i_1] [i_1 - 1] [i_2] [(signed char)9] [i_7] [i_7]))))) ? (((/* implicit */int) arr_28 [1ULL] [1ULL] [i_3] [i_7] [i_10 - 1])) : (((/* implicit */int) arr_28 [i_1] [i_2] [i_3] [i_7] [i_1]))));
                            var_26 = ((/* implicit */unsigned char) arr_11 [i_1 - 1] [i_2 - 1] [i_1] [i_7]);
                            var_27 = ((/* implicit */unsigned char) var_4);
                            var_28 = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)9)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)32256))))) % (arr_29 [3] [i_1] [i_2] [i_2 - 1] [i_3] [i_2] [i_10 - 1])));
                            arr_31 [i_1] [i_10] [i_10 - 1] [i_3 - 1] = (unsigned char)119;
                        }
                        /* LoopSeq 1 */
                        for (int i_11 = 1; i_11 < 12; i_11 += 4) 
                        {
                            arr_36 [i_1] [i_2] [i_1] [i_3 - 1] [i_2] [i_11] = ((/* implicit */unsigned long long int) arr_21 [i_1] [i_3] [i_2] [i_1]);
                            arr_37 [i_1 + 1] [i_2] [i_1] = ((/* implicit */long long int) var_0);
                        }
                        var_29 -= ((/* implicit */unsigned short) ((((18446744073709551615ULL) << (((((/* implicit */int) (short)-32743)) + (32772))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
                    }
                    var_30 = ((/* implicit */long long int) ((short) (~(((((/* implicit */_Bool) arr_24 [i_1 - 1] [i_1 - 1] [i_1] [i_1])) ? (13040563373442498713ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)3584))))))));
                }
            } 
        } 
        arr_38 [i_1] = ((/* implicit */signed char) ((((/* implicit */int) max((arr_16 [i_1 + 1] [i_1 - 1]), (((/* implicit */unsigned char) arr_24 [i_1] [i_1 + 1] [i_1] [i_1]))))) ^ (((/* implicit */int) arr_23 [i_1 + 1] [i_1]))));
        var_31 = ((/* implicit */signed char) max((max((((/* implicit */unsigned long long int) arr_33 [i_1] [i_1] [i_1 + 1])), (max((arr_15 [i_1] [i_1] [i_1 + 1] [i_1] [i_1]), (((/* implicit */unsigned long long int) arr_19 [i_1] [i_1] [i_1] [i_1 - 1])))))), (((((/* implicit */unsigned long long int) (-(var_4)))) - (max((arr_34 [i_1] [i_1] [i_1] [i_1] [i_1]), (((/* implicit */unsigned long long int) var_9))))))));
        arr_39 [i_1] = ((/* implicit */unsigned char) (!(((((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) | (13040563373442498697ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_27 [i_1] [i_1] [i_1] [i_1 - 1])), (arr_2 [i_1] [i_1])))))))));
    }
    var_32 = (!(var_6));
    /* LoopNest 2 */
    for (unsigned long long int i_12 = 2; i_12 < 8; i_12 += 2) 
    {
        for (short i_13 = 0; i_13 < 10; i_13 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_14 = 0; i_14 < 10; i_14 += 2) 
                {
                    for (unsigned short i_15 = 0; i_15 < 10; i_15 += 2) 
                    {
                        {
                            arr_49 [i_15] = ((/* implicit */short) arr_29 [i_12 - 1] [i_13] [2LL] [i_15] [i_12 - 1] [i_15] [(unsigned short)0]);
                            var_33 ^= ((/* implicit */short) (unsigned short)32256);
                            arr_50 [5ULL] [i_14] [i_15] = ((signed char) max((((((/* implicit */_Bool) arr_8 [i_13])) ? (((/* implicit */int) (unsigned short)61926)) : (((/* implicit */int) arr_44 [i_12 - 1] [i_12 - 1] [i_15])))), (((/* implicit */int) max((var_10), (((/* implicit */short) var_2)))))));
                            arr_51 [i_15] [i_14] [i_12] [i_12] = ((((/* implicit */int) ((unsigned short) arr_12 [i_12 - 1] [i_14] [i_14]))) % ((-(((/* implicit */int) (unsigned short)7801)))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned char i_16 = 0; i_16 < 10; i_16 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_17 = 0; i_17 < 10; i_17 += 3) 
                    {
                        for (unsigned short i_18 = 1; i_18 < 7; i_18 += 1) 
                        {
                            {
                                var_34 = ((/* implicit */unsigned char) (short)-20438);
                                var_35 = ((/* implicit */unsigned char) var_10);
                                var_36 = ((/* implicit */unsigned short) (unsigned char)251);
                            }
                        } 
                    } 
                    arr_60 [i_12 - 1] [i_13] [(unsigned short)9] [i_16] = ((/* implicit */unsigned char) max(((~(((/* implicit */int) arr_48 [i_12] [i_13] [i_12] [i_12] [i_12])))), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_32 [i_12] [i_12])) : (((/* implicit */int) arr_32 [i_12 + 1] [i_12 + 1]))))) && (((/* implicit */_Bool) max((arr_33 [i_12] [i_12] [i_13]), (((/* implicit */long long int) (_Bool)1))))))))));
                    var_37 = ((/* implicit */signed char) max((arr_15 [i_12 + 1] [i_12 + 1] [i_12 + 2] [i_12] [i_12]), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)15)) : (((/* implicit */int) arr_14 [i_13])))), (((((/* implicit */_Bool) 1702817892)) ? (((/* implicit */int) (signed char)-118)) : (((/* implicit */int) (unsigned char)255)))))))));
                }
                for (unsigned short i_19 = 0; i_19 < 10; i_19 += 3) 
                {
                    var_38 *= ((/* implicit */_Bool) max((((/* implicit */int) arr_3 [i_19] [(signed char)11])), (((((/* implicit */_Bool) arr_33 [i_12] [i_13] [i_12 + 1])) ? (((/* implicit */int) arr_46 [i_12 - 1] [i_12 - 1] [i_12 - 2])) : (((/* implicit */int) (short)2622))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_20 = 0; i_20 < 10; i_20 += 3) 
                    {
                        var_39 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)-106)) <= (((/* implicit */int) (short)20437))))) : (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) arr_3 [i_13] [(signed char)7])) : (((/* implicit */int) arr_45 [i_12 - 1] [(signed char)1])))))), (((/* implicit */int) max(((unsigned short)33273), (((/* implicit */unsigned short) (unsigned char)9)))))));
                        var_40 = ((/* implicit */short) 5243135020841276836LL);
                        arr_68 [i_12] [i_13] [5ULL] [i_20] |= ((/* implicit */unsigned char) ((((((/* implicit */int) (short)-14621)) + (2147483647))) >> (((((/* implicit */int) (unsigned short)65535)) - (65508)))));
                    }
                }
                for (long long int i_21 = 2; i_21 < 9; i_21 += 1) 
                {
                    var_41 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) (unsigned char)249)) : (((((/* implicit */int) var_3)) / (((((/* implicit */int) (short)-3592)) - (((/* implicit */int) arr_32 [i_13] [i_13]))))))));
                    arr_73 [i_13] = ((/* implicit */short) 3357167054552973640ULL);
                    var_42 = ((/* implicit */signed char) ((short) (~(((/* implicit */int) var_7)))));
                    var_43 += ((/* implicit */short) (+(((((/* implicit */_Bool) 281337537757180ULL)) ? (((/* implicit */int) arr_2 [i_12 + 1] [i_13])) : (((/* implicit */int) arr_2 [i_12] [i_13]))))));
                }
                arr_74 [6LL] = ((/* implicit */signed char) max((((((/* implicit */int) ((_Bool) (short)26786))) / (((/* implicit */int) ((((/* implicit */_Bool) 2395509412673783257ULL)) || (((/* implicit */_Bool) arr_3 [(_Bool)0] [i_13]))))))), ((+(((((/* implicit */int) arr_53 [i_13])) << (((/* implicit */int) (signed char)15))))))));
                var_44 = ((/* implicit */int) ((arr_1 [i_12]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((max((18446462736171794436ULL), (arr_34 [i_12] [i_12] [i_12] [i_12] [i_12 + 1]))) == (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)76)) << (0ULL))))))))));
                var_45 = ((/* implicit */unsigned long long int) max((var_45), (((((unsigned long long int) max((((/* implicit */unsigned char) arr_58 [i_12 - 1] [i_13] [i_12] [i_13] [i_12])), (arr_12 [i_12 - 2] [i_12] [i_12 - 1])))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (-4974500880375968403LL) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_12 - 1] [i_12 - 1] [i_12] [i_12]))))))))));
            }
        } 
    } 
    var_46 = ((/* implicit */signed char) 3142388497769252074LL);
}
