/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109883
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
    var_10 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) >= (min((((/* implicit */unsigned long long int) var_3)), (((((/* implicit */_Bool) 3651199685U)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))));
    var_11 = ((/* implicit */_Bool) (~(((long long int) var_6))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_12 = ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) max((var_9), (var_5)))) != (((/* implicit */int) ((_Bool) arr_0 [(unsigned short)3]))))))) < (((281474976710655LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)176))))));
        var_13 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((var_9) ? (arr_1 [i_0]) : (arr_1 [i_0]))))));
        var_14 = ((/* implicit */unsigned short) ((max((((/* implicit */long long int) arr_2 [i_0])), (max((arr_0 [i_0]), (((/* implicit */long long int) (unsigned char)121)))))) < (min((((long long int) 281474976710653LL)), (((var_9) ? (arr_1 [i_0]) : (((/* implicit */long long int) 631218583U))))))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            var_15 &= ((/* implicit */long long int) ((2577691114U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)111)))));
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_13 [i_0] [i_1] [i_2] [i_0] [i_3] [i_3] = ((/* implicit */unsigned char) arr_10 [i_2] [i_1] [i_2] [i_3]);
                        arr_14 [7ULL] [i_0] [(unsigned char)3] [i_0] [i_3] = ((/* implicit */unsigned long long int) arr_2 [i_1 - 1]);
                    }
                } 
            } 
        }
    }
    for (unsigned int i_4 = 3; i_4 < 17; i_4 += 4) 
    {
        var_16 = arr_15 [10LL];
        var_17 = ((/* implicit */unsigned char) (~(max((arr_16 [i_4 - 3]), (arr_16 [i_4 - 3])))));
    }
    /* LoopSeq 3 */
    for (unsigned short i_5 = 0; i_5 < 24; i_5 += 3) 
    {
        /* LoopSeq 3 */
        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
        {
            arr_23 [4U] [i_6 + 1] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned char) arr_18 [i_6 + 1] [i_6])))));
            var_18 = ((/* implicit */long long int) (+(((/* implicit */int) var_4))));
            var_19 = ((/* implicit */long long int) min((var_19), ((-(((((/* implicit */_Bool) arr_18 [i_6 + 1] [i_5])) ? (arr_19 [i_5]) : (arr_19 [i_5])))))));
        }
        for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 4) 
        {
            var_20 = ((/* implicit */unsigned int) (~(((((/* implicit */int) arr_18 [i_5] [i_7])) << (((((/* implicit */int) var_6)) - (5058)))))));
            arr_26 [i_5] [i_5] = ((/* implicit */short) max((((((/* implicit */_Bool) ((arr_25 [i_5] [i_5] [i_5]) << (((6535149011022077142LL) - (6535149011022077126LL)))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_5]))) : (1255522045U))) : ((+(arr_21 [i_5] [i_7]))))), (((/* implicit */unsigned int) ((unsigned char) arr_24 [i_5] [i_5] [i_5])))));
            /* LoopNest 2 */
            for (unsigned short i_8 = 2; i_8 < 23; i_8 += 4) 
            {
                for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 4) 
                {
                    {
                        arr_34 [9LL] [i_8 - 1] [i_7] [i_5] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((long long int) arr_25 [i_5] [i_7] [i_5]))) ? (((((/* implicit */_Bool) arr_33 [21U] [15ULL] [i_5])) ? (((/* implicit */long long int) arr_31 [i_7] [i_8])) : (var_2))) : (((/* implicit */long long int) min((arr_25 [i_5] [i_5] [i_5]), (arr_25 [i_8] [17ULL] [i_5]))))))));
                        var_21 &= ((/* implicit */long long int) arr_24 [i_5] [i_7] [i_7]);
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned char i_10 = 0; i_10 < 24; i_10 += 2) 
            {
                arr_37 [i_5] [i_7] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [(unsigned char)0] [3U] [3U] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_35 [16ULL] [i_7] [(unsigned char)19])))) ? (((/* implicit */unsigned long long int) arr_24 [i_5] [i_5] [i_5])) : (((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_18 [i_5] [i_5])), (486281298U)))) ? (((((/* implicit */_Bool) arr_29 [(unsigned char)5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_10])))))));
                /* LoopNest 2 */
                for (unsigned int i_11 = 0; i_11 < 24; i_11 += 1) 
                {
                    for (unsigned char i_12 = 1; i_12 < 21; i_12 += 4) 
                    {
                        {
                            arr_43 [i_11] [i_7] [i_12] [i_11] [i_12] = ((/* implicit */long long int) arr_27 [i_12 + 3] [i_12 + 3] [i_12 + 2] [i_12 + 3]);
                            var_22 = ((/* implicit */short) arr_28 [i_5] [i_7] [i_10] [12ULL]);
                            arr_44 [i_5] [i_12] [i_10] [i_10] [i_12] = ((/* implicit */unsigned int) (unsigned char)109);
                        }
                    } 
                } 
                arr_45 [i_7] = (!(((/* implicit */_Bool) arr_29 [i_10])));
                /* LoopSeq 1 */
                for (unsigned long long int i_13 = 1; i_13 < 22; i_13 += 3) 
                {
                    arr_50 [(unsigned char)2] [i_10] [i_10] = ((/* implicit */long long int) (-(arr_42 [i_5] [i_7] [i_10])));
                    arr_51 [i_10] [(unsigned char)16] = ((/* implicit */unsigned char) max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_8))))), (-6535149011022077164LL)));
                    var_23 = ((/* implicit */unsigned char) arr_40 [i_13] [i_13] [i_13 + 1] [i_13 - 1] [i_13 + 2] [i_13 + 2] [i_13]);
                    /* LoopSeq 1 */
                    for (unsigned char i_14 = 3; i_14 < 23; i_14 += 1) 
                    {
                        arr_55 [2LL] [22ULL] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_27 [i_13 + 2] [i_10] [i_10] [i_10]) % (arr_27 [i_13 - 1] [(short)21] [(short)21] [(short)21])))) ? (((/* implicit */unsigned int) (-(((((/* implicit */int) var_0)) * (((/* implicit */int) var_9))))))) : (max((arr_35 [i_5] [i_5] [i_13]), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) var_9)), (var_6))))))));
                        var_24 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_36 [i_5] [(unsigned char)15] [(unsigned char)15] [i_13]))));
                    }
                    arr_56 [i_5] [i_5] [i_7] [i_10] [i_10] [i_13] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((long long int) var_6))) ? ((-(arr_41 [i_13 + 1] [i_13 + 1] [i_10] [i_13] [i_7] [i_13 + 2] [i_10]))) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_9), (arr_20 [i_7] [i_13]))))))) + (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
                }
            }
        }
        for (unsigned int i_15 = 3; i_15 < 22; i_15 += 2) 
        {
            var_25 = ((/* implicit */long long int) min((min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-25142))) : (arr_31 [i_5] [i_15 + 2]))), (((((/* implicit */_Bool) 281474976710653LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (arr_35 [i_15 - 1] [i_5] [17LL]))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_33 [i_15 - 2] [i_15 - 2] [i_15 + 2])))))));
            var_26 = ((/* implicit */unsigned int) ((_Bool) ((var_5) ? (arr_19 [i_15 + 2]) : (arr_19 [i_15 - 2]))));
            var_27 = ((/* implicit */unsigned char) max((max((arr_24 [i_15 + 1] [(unsigned char)2] [i_5]), (((/* implicit */unsigned int) var_9)))), (min((arr_24 [i_15 - 2] [i_15 + 1] [i_15]), (arr_24 [i_15 + 1] [i_15] [20ULL])))));
        }
        arr_59 [i_5] = ((/* implicit */unsigned long long int) ((min((var_3), (((/* implicit */unsigned int) arr_22 [i_5])))) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)19)) ? (((/* implicit */int) (unsigned char)134)) : (((/* implicit */int) (unsigned char)153))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_53 [14U])) < (((/* implicit */int) (unsigned char)126)))))) : ((+(var_1)))))));
    }
    for (unsigned long long int i_16 = 0; i_16 < 17; i_16 += 1) 
    {
        arr_62 [i_16] = ((/* implicit */unsigned short) ((unsigned long long int) ((arr_32 [15LL] [i_16] [i_16] [i_16]) > (arr_32 [i_16] [i_16] [i_16] [i_16]))));
        var_28 = ((/* implicit */unsigned char) (~(min((((/* implicit */unsigned int) var_6)), (arr_24 [i_16] [i_16] [i_16])))));
        arr_63 [i_16] [2LL] = ((/* implicit */unsigned char) ((max(((~(arr_27 [i_16] [16LL] [4LL] [15ULL]))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_36 [i_16] [i_16] [i_16] [i_16]))))))) % (((((3039445251U) << (((((/* implicit */int) (unsigned char)247)) - (231))))) << (((/* implicit */int) ((((/* implicit */int) var_4)) < (((/* implicit */int) var_8)))))))));
        var_29 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_7))));
        /* LoopNest 2 */
        for (unsigned int i_17 = 0; i_17 < 17; i_17 += 4) 
        {
            for (unsigned char i_18 = 1; i_18 < 16; i_18 += 4) 
            {
                {
                    var_30 |= ((/* implicit */unsigned char) ((unsigned short) (-(var_7))));
                    arr_68 [5LL] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (min((var_2), (((/* implicit */long long int) arr_17 [i_16])))) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))), (arr_57 [(short)3] [(short)3])));
                    arr_69 [i_17] [11U] [11U] [11U] = var_1;
                }
            } 
        } 
    }
    for (short i_19 = 4; i_19 < 18; i_19 += 4) 
    {
        arr_72 [i_19] [i_19 - 4] = ((/* implicit */long long int) max((arr_21 [i_19] [i_19 - 4]), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_28 [19LL] [13LL] [19LL] [i_19 - 2])))))));
        var_31 = ((/* implicit */unsigned char) arr_29 [i_19]);
        var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3039445226U)) ? (((/* implicit */int) arr_18 [i_19] [i_19])) : (((/* implicit */int) (short)-31849))))) ? (((/* implicit */long long int) ((unsigned int) var_7))) : (1331732912218245454LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_54 [i_19] [i_19] [i_19 - 1] [i_19] [i_19]))) : (min((arr_48 [i_19 - 3] [i_19 + 1] [i_19] [i_19 + 1] [i_19 + 1]), (arr_48 [i_19] [i_19 - 1] [i_19] [i_19 - 2] [i_19])))));
    }
    var_33 = ((/* implicit */short) (+(281474976710654LL)));
}
