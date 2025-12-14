/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122703
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
    var_13 = min((min((min((((/* implicit */unsigned int) var_10)), (var_2))), (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) & (((/* implicit */int) var_3))))))), (((/* implicit */unsigned int) var_1)));
    /* LoopSeq 4 */
    for (int i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                var_14 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_14 [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) (unsigned char)192)))) : (max((((/* implicit */int) max(((signed char)6), (((/* implicit */signed char) arr_9 [i_4] [i_3] [i_0] [i_0]))))), (0)))));
                                var_15 = max((((/* implicit */short) (signed char)-30)), ((short)-4659));
                                var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(var_8)))) ? (((arr_8 [i_0 + 1] [i_4]) ? (((/* implicit */int) (signed char)-30)) : (((/* implicit */int) arr_8 [i_0 - 1] [i_0])))) : (((/* implicit */int) ((((/* implicit */int) arr_8 [i_0 - 3] [i_2])) < (((/* implicit */int) arr_8 [i_0 + 1] [i_0 + 1])))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned char) arr_8 [i_0] [i_0]);
                    arr_15 [i_1] [i_2] [i_2] [i_2] = min(((((+(arr_13 [i_0] [i_1] [i_2] [i_1] [i_0]))) + (((/* implicit */long long int) ((2147483647) + (((/* implicit */int) arr_6 [i_0] [i_1] [i_1]))))))), (((/* implicit */long long int) var_2)));
                    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) arr_10 [i_0] [i_0]))));
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (~(((unsigned int) min((((/* implicit */short) (unsigned char)3)), ((short)-13114)))))))));
        arr_16 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)22790)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-12))) : (4U))) & (((/* implicit */unsigned int) 2147483636))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))) : (((((/* implicit */long long int) ((/* implicit */int) var_3))) / (arr_5 [i_0 - 1] [i_0])))));
    }
    /* vectorizable */
    for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 4) 
    {
        var_20 -= ((/* implicit */unsigned long long int) arr_17 [i_5]);
        /* LoopNest 2 */
        for (signed char i_6 = 2; i_6 < 20; i_6 += 1) 
        {
            for (unsigned char i_7 = 0; i_7 < 23; i_7 += 4) 
            {
                {
                    var_21 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_22 [i_5] [i_6 + 1] [i_6 - 1])) ? (((/* implicit */int) arr_24 [i_5] [i_6 - 2] [i_6 - 1] [i_6 - 1])) : (((/* implicit */int) arr_24 [i_5] [i_6 - 2] [i_6 + 1] [i_6 - 1]))));
                    arr_25 [i_5] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_20 [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (5182588038205241983ULL))) * (((/* implicit */unsigned long long int) -6))));
                    arr_26 [i_5] [i_5] [i_7] [i_5] = ((/* implicit */_Bool) (-(((/* implicit */int) var_9))));
                }
            } 
        } 
        var_22 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_5]))) / ((((_Bool)1) ? (((/* implicit */unsigned long long int) var_2)) : (18446744073709551615ULL)))));
    }
    for (short i_8 = 0; i_8 < 16; i_8 += 1) 
    {
        arr_30 [i_8] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~((~(((/* implicit */int) (unsigned char)53))))))) ? ((+(0LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_17 [i_8]))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_5)))))));
        /* LoopSeq 1 */
        for (unsigned short i_9 = 0; i_9 < 16; i_9 += 4) 
        {
            var_23 += ((((/* implicit */_Bool) arr_19 [i_8] [i_8])) ? (2565059798U) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_21 [i_9] [i_8])) & (((/* implicit */int) var_10))))));
            arr_34 [i_8] = ((/* implicit */long long int) arr_17 [i_8]);
        }
        var_24 |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_8] [i_8] [i_8])) ? (((/* implicit */int) ((unsigned short) 16015786241055845595ULL))) : (((/* implicit */int) max((arr_24 [i_8] [i_8] [i_8] [i_8]), (((/* implicit */unsigned short) var_7)))))))) ? ((~(10532537025993514369ULL))) : (((((/* implicit */unsigned long long int) ((arr_23 [i_8] [i_8] [i_8]) | (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_8] [i_8])))))) % (((((/* implicit */_Bool) 5923739209103141028ULL)) ? (5923739209103141007ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))));
        /* LoopSeq 3 */
        for (unsigned int i_10 = 1; i_10 < 13; i_10 += 1) 
        {
            var_25 *= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-18))) * (834320482U)));
            arr_37 [i_8] [i_8] = ((/* implicit */unsigned long long int) (-(112837617U)));
        }
        for (unsigned int i_11 = 3; i_11 < 13; i_11 += 4) 
        {
            /* LoopNest 3 */
            for (short i_12 = 0; i_12 < 16; i_12 += 1) 
            {
                for (unsigned int i_13 = 0; i_13 < 16; i_13 += 1) 
                {
                    for (unsigned int i_14 = 0; i_14 < 16; i_14 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_8] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_13]))) : (arr_32 [i_8] [i_13] [i_14])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)63)) ? (((/* implicit */int) (unsigned char)31)) : (var_8)))) ? (((arr_28 [i_11]) ? (((/* implicit */int) arr_24 [i_8] [i_8] [i_8] [i_8])) : (((/* implicit */int) (short)63)))) : (((((/* implicit */int) var_7)) | (((/* implicit */int) arr_20 [i_13])))))) : ((-(arr_42 [i_14] [i_13] [i_12] [i_11 - 1] [i_8] [i_8])))));
                            var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) ((((/* implicit */unsigned int) (((~(((/* implicit */int) arr_17 [i_8])))) | (((/* implicit */int) var_4))))) % ((~(((2565059808U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)192))))))))))));
                            var_28 = max((((((/* implicit */_Bool) ((((arr_22 [i_11] [i_11] [i_11]) + (2147483647))) >> (((arr_45 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14] [i_14]) - (2279436468U)))))) ? (arr_41 [i_14] [i_13] [i_8]) : (((/* implicit */int) min((arr_24 [i_8] [i_8] [i_8] [i_8]), (var_3)))))), (((int) (~(((/* implicit */int) var_1))))));
                            arr_46 [i_8] [i_8] [i_11] [i_12] [i_13] [i_8] [i_14] = (+(((/* implicit */int) min((arr_44 [i_14] [i_14] [i_14] [i_11 - 2] [i_11 - 3]), (arr_44 [i_14] [i_14] [i_13] [i_11 - 3] [i_11 + 2])))));
                        }
                    } 
                } 
            } 
            arr_47 [i_8] = ((/* implicit */short) (~(((/* implicit */int) (_Bool)1))));
        }
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            arr_51 [i_15] [i_8] = ((/* implicit */unsigned long long int) arr_45 [i_8] [i_8] [i_8] [i_15] [i_15] [i_15] [i_15]);
            arr_52 [i_8] [i_8] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) ((short) arr_28 [i_15]))), (((((/* implicit */_Bool) (short)-1043)) ? (arr_48 [i_8] [i_8] [i_8]) : (((/* implicit */int) (unsigned short)65535))))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)23)) <= (((/* implicit */int) (unsigned char)23))))) : (min((((/* implicit */int) max((((/* implicit */unsigned short) var_7)), (var_11)))), (((int) var_12))))));
            arr_53 [i_8] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 112837617U)) ? (((/* implicit */int) (unsigned char)139)) : (((/* implicit */int) (unsigned short)8732))))) : (max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_48 [i_8] [i_8] [i_8]))))), (arr_45 [i_8] [i_8] [i_8] [i_15] [i_15] [i_15] [i_15])))));
        }
        var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 13475843637068360664ULL)) ? (1797024498) : (((/* implicit */int) (unsigned short)12858))));
    }
    for (short i_16 = 0; i_16 < 18; i_16 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_17 = 0; i_17 < 18; i_17 += 1) 
        {
            arr_59 [i_17] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned short)62582)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)33))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)384)))));
            arr_60 [i_16] = ((/* implicit */short) ((((/* implicit */int) var_11)) > (((/* implicit */int) arr_20 [i_16]))));
        }
        arr_61 [i_16] = ((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)19028)));
    }
    var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) var_2))));
}
