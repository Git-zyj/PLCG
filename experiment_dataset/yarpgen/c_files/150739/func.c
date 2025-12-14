/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150739
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
    var_11 = min((var_9), (((signed char) min((var_0), (((/* implicit */unsigned long long int) var_7))))));
    var_12 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((var_3) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)120))))) ? (((((/* implicit */_Bool) var_9)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (var_7)))))));
    var_13 = ((/* implicit */signed char) var_8);
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_14 = var_9;
        var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_10)))) % (((/* implicit */int) arr_0 [8U])))))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((/* implicit */int) arr_10 [i_0])) + (((/* implicit */int) arr_3 [i_1] [7ULL])))))));
                        arr_11 [i_0] [i_0] [i_1] [i_2] [i_2] [i_3] = ((/* implicit */unsigned short) ((unsigned int) arr_8 [i_1] [i_2] [i_3 + 1]));
                        var_17 = ((/* implicit */short) ((unsigned int) arr_4 [i_1] [i_3] [i_2] [i_3 + 1]));
                    }
                    for (short i_4 = 0; i_4 < 14; i_4 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_5 = 0; i_5 < 14; i_5 += 2) 
                        {
                            var_18 = var_9;
                            var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_2] [i_4]))) % (var_2)))) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) (unsigned char)109)) ? (((/* implicit */int) (short)-2285)) : (((/* implicit */int) (short)2274)))))))));
                            arr_18 [4U] [i_1] [i_1] [i_1] [i_4] [i_4] [(signed char)4] = arr_13 [i_0] [i_0] [i_2] [i_4] [i_5];
                            var_20 = ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) (short)2285))))));
                        }
                        arr_19 [i_4] [i_4] = (((-(((/* implicit */int) (short)-2285)))) < (((/* implicit */int) ((((/* implicit */_Bool) (short)2293)) || (((/* implicit */_Bool) arr_10 [i_2]))))));
                        arr_20 [i_4] [i_1] [i_4] = ((((/* implicit */_Bool) (short)2296)) ? (var_0) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1))))));
                        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (short)2305))));
                    }
                    for (unsigned short i_6 = 2; i_6 < 13; i_6 += 4) 
                    {
                        arr_23 [i_0] [i_0] [i_1] [i_1] [i_6 - 2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)-2274))));
                        arr_24 [i_0] [(signed char)9] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_0] [i_6 - 2] [i_6 - 2] [i_1])) ? (((/* implicit */int) (short)2305)) : (((/* implicit */int) (short)-2276))));
                        /* LoopSeq 2 */
                        for (signed char i_7 = 0; i_7 < 14; i_7 += 1) 
                        {
                            arr_27 [i_0] [i_7] [i_2] [i_6] [i_7] = ((/* implicit */signed char) (short)2285);
                            var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)2274)) ? (((/* implicit */int) arr_12 [i_6] [i_6 + 1] [i_7] [i_6 + 1] [i_7])) : (((/* implicit */int) ((short) var_4))))))));
                            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-2285)) ? (((/* implicit */int) (short)-2304)) : (((/* implicit */int) ((((/* implicit */int) (short)2284)) >= (((/* implicit */int) (short)2294)))))));
                            var_24 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((arr_25 [i_0] [(signed char)4] [(short)3] [i_0] [i_0]) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_2] [i_6]))))) ^ (((unsigned int) var_7))));
                        }
                        for (unsigned int i_8 = 0; i_8 < 14; i_8 += 4) 
                        {
                            arr_30 [i_6] [i_1] [i_2] [i_1] [i_8] [i_6 - 1] [i_8] = arr_26 [i_0] [i_1] [i_2] [i_1] [i_6] [i_1];
                            var_25 = ((/* implicit */short) (~(((/* implicit */int) arr_10 [i_6 + 1]))));
                            arr_31 [i_8] [i_6] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)2276))));
                        }
                    }
                    /* LoopSeq 1 */
                    for (unsigned char i_9 = 0; i_9 < 14; i_9 += 2) 
                    {
                        arr_35 [i_0] [i_1] [i_2] [(unsigned short)7] [i_9] = ((/* implicit */signed char) arr_33 [i_0] [(unsigned short)11] [i_0] [i_9]);
                        var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) (-(((/* implicit */int) arr_22 [i_0])))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_10 = 0; i_10 < 14; i_10 += 1) 
                    {
                        for (short i_11 = 3; i_11 < 13; i_11 += 2) 
                        {
                            {
                                var_27 = ((/* implicit */signed char) ((((_Bool) (short)-2284)) ? (((/* implicit */int) (short)2290)) : (((((/* implicit */_Bool) (short)-2291)) ? (((/* implicit */int) (short)-2313)) : (((/* implicit */int) (short)-2274))))));
                                var_28 = ((/* implicit */signed char) max((var_28), (((signed char) arr_36 [(signed char)4] [(signed char)2] [i_2] [i_2] [i_10] [i_11]))));
                                var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_1 [i_11 - 2])) : (((((/* implicit */_Bool) arr_29 [i_0] [i_10] [(short)5] [i_2])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_32 [i_0] [i_2] [i_10] [i_11]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) ((((((/* implicit */int) (short)-2301)) + (2147483647))) >> (((((/* implicit */int) (short)2290)) - (2285))))))));
        /* LoopSeq 4 */
        for (unsigned short i_13 = 4; i_13 < 23; i_13 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned int i_14 = 0; i_14 < 25; i_14 += 2) 
            {
                for (signed char i_15 = 0; i_15 < 25; i_15 += 2) 
                {
                    {
                        arr_52 [i_12] [i_12] [(short)10] [i_14] [i_14] [(signed char)24] = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) max((((/* implicit */short) var_9)), ((short)-2291)))) ? (((((/* implicit */_Bool) (short)2263)) ? (((/* implicit */int) (short)2271)) : (((/* implicit */int) (short)2260)))) : (((/* implicit */int) arr_42 [i_13 - 4] [i_14])))) : (min((((((/* implicit */_Bool) (short)2290)) ? (((/* implicit */int) (short)-2294)) : (((/* implicit */int) (short)-2322)))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)2293)) : (((/* implicit */int) var_3))))))));
                        var_31 = ((/* implicit */short) arr_45 [i_15] [i_13 - 2] [i_12]);
                        arr_53 [i_15] [i_15] [(unsigned short)8] [i_13] [i_13] [i_12] = ((/* implicit */_Bool) ((arr_40 [i_12] [i_13]) ? ((~(((/* implicit */int) ((signed char) (short)2284))))) : (((((/* implicit */_Bool) arr_42 [i_13 - 4] [(signed char)20])) ? (((/* implicit */int) arr_42 [i_13 - 1] [i_13])) : (((/* implicit */int) (short)-2268))))));
                    }
                } 
            } 
            arr_54 [i_13] = ((/* implicit */unsigned char) (-(((((((/* implicit */int) (short)-2304)) + (2147483647))) << (((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)2290)))) - (46863)))))));
            var_32 -= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) var_7)), (arr_51 [i_12] [i_13] [(signed char)17] [i_13 - 3] [i_13] [i_13 + 1])));
            /* LoopSeq 1 */
            for (unsigned int i_16 = 0; i_16 < 25; i_16 += 2) 
            {
                var_33 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)2304))))) * (((/* implicit */int) max((var_10), (arr_50 [i_12] [i_13] [i_16] [i_12])))))));
                var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-2289)) ? (((/* implicit */int) (short)2284)) : (((/* implicit */int) var_6))))) ^ (((unsigned int) var_6))))) ? ((+(((((/* implicit */_Bool) (short)2284)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)-2284)))))) : (((((/* implicit */_Bool) ((((/* implicit */int) (short)2304)) % (((/* implicit */int) (short)2303))))) ? (((/* implicit */int) arr_42 [i_12] [i_13 - 1])) : (((/* implicit */int) arr_47 [i_12] [i_13] [i_16])))))))));
            }
        }
        for (signed char i_17 = 2; i_17 < 23; i_17 += 4) 
        {
            var_35 = ((/* implicit */_Bool) min((var_35), (((/* implicit */_Bool) ((short) (+(((/* implicit */int) var_4))))))));
            arr_61 [i_17] [i_17] [(signed char)16] = ((/* implicit */signed char) (short)-2311);
        }
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_19 = 1; i_19 < 22; i_19 += 3) 
            {
                for (short i_20 = 3; i_20 < 23; i_20 += 3) 
                {
                    {
                        var_36 = ((/* implicit */short) min((var_36), (((/* implicit */short) min((((/* implicit */int) ((unsigned char) arr_60 [i_12] [i_18]))), ((~(((/* implicit */int) var_5)))))))));
                        arr_69 [i_20] [i_18] [(short)17] [i_20] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) arr_42 [i_18] [i_20]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_59 [i_18] [i_20 - 2]))) : (var_2)));
                        arr_70 [i_12] [i_20] [i_19 + 1] [i_20] = ((/* implicit */unsigned long long int) (short)-2289);
                    }
                } 
            } 
            var_37 = ((/* implicit */short) var_7);
        }
        for (signed char i_21 = 0; i_21 < 25; i_21 += 4) 
        {
            arr_74 [9ULL] |= ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))) || (((/* implicit */_Bool) (-(((((/* implicit */int) var_3)) + (((/* implicit */int) (short)-2292)))))))));
            var_38 ^= var_10;
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
            {
                var_39 = ((/* implicit */short) min((var_39), (((/* implicit */short) ((((/* implicit */_Bool) arr_60 [i_21] [(unsigned char)13])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_1) || (((/* implicit */_Bool) arr_66 [i_12] [i_12] [i_21] [i_22])))))))))));
                arr_77 [i_22] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_62 [i_21])) : (((/* implicit */int) arr_60 [i_22] [i_12])))))));
                var_40 = ((/* implicit */signed char) ((((unsigned int) (short)-2291)) | (((/* implicit */unsigned int) ((((/* implicit */int) (short)-2291)) | (((/* implicit */int) var_3)))))));
            }
        }
    }
}
