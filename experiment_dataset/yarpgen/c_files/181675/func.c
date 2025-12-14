/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181675
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
    var_11 = ((/* implicit */signed char) ((min((var_1), (4294967295U))) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_5)))))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_12 = ((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-94)) + (2147483647))) >> (((/* implicit */int) (_Bool)0))));
        var_13 -= ((/* implicit */unsigned int) arr_1 [i_0] [i_0]);
    }
    for (short i_1 = 2; i_1 < 19; i_1 += 2) 
    {
        var_14 *= ((/* implicit */unsigned char) var_2);
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_2 = 2; i_2 < 17; i_2 += 2) /* same iter space */
        {
            var_15 = ((/* implicit */_Bool) arr_4 [i_1] [i_1 + 1]);
            /* LoopSeq 1 */
            for (signed char i_3 = 2; i_3 < 19; i_3 += 3) 
            {
                /* LoopSeq 2 */
                for (short i_4 = 0; i_4 < 21; i_4 += 3) 
                {
                    var_16 = ((/* implicit */int) arr_11 [i_2 - 1] [i_3 + 1] [i_1 + 2]);
                    var_17 = ((/* implicit */signed char) var_1);
                    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_3 [i_3]) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0)))))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65535)) % (((/* implicit */int) (signed char)124))))) : ((-(var_7)))));
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    arr_16 [i_1] [i_2] [i_1] [i_5] [i_2] [i_1] |= ((/* implicit */short) var_4);
                    arr_17 [i_1] [i_2] [i_1] [i_3] = arr_2 [i_5];
                    var_19 *= ((/* implicit */unsigned int) ((((/* implicit */int) arr_15 [i_1] [i_1 - 1])) >= (((/* implicit */int) (short)7656))));
                }
                arr_18 [i_1] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_3 - 2] [i_3] [i_2 + 3] [i_1 + 1])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)27957)) ? (((/* implicit */unsigned int) arr_10 [i_1] [i_1])) : (var_10))))));
                var_20 = ((/* implicit */unsigned long long int) arr_12 [i_1] [i_1] [i_1] [i_1]);
            }
        }
        for (short i_6 = 2; i_6 < 17; i_6 += 2) /* same iter space */
        {
            var_21 |= ((/* implicit */unsigned char) var_5);
            var_22 = ((/* implicit */unsigned char) var_9);
        }
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        var_23 = ((/* implicit */unsigned char) ((var_9) ? (((/* implicit */int) var_6)) : ((~(((/* implicit */int) ((((/* implicit */int) (unsigned short)22808)) >= (((/* implicit */int) (short)32767)))))))));
        /* LoopNest 3 */
        for (int i_8 = 1; i_8 < 19; i_8 += 4) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                for (unsigned char i_10 = 2; i_10 < 17; i_10 += 2) 
                {
                    {
                        var_24 = ((((/* implicit */int) (!(arr_2 [i_8 + 1])))) != (((/* implicit */int) ((((/* implicit */int) min((((/* implicit */unsigned short) (short)-27957)), (arr_4 [i_7] [i_8 - 1])))) == (((/* implicit */int) var_2))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_11 = 2; i_11 < 17; i_11 += 2) 
                        {
                            var_25 = ((/* implicit */signed char) var_8);
                            var_26 |= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) (_Bool)0)), ((short)-27957))))) != (((((/* implicit */_Bool) 17756215054540408573ULL)) ? (arr_3 [i_11]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)28))))))))) / (((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9))))) | (arr_29 [i_7] [i_8 + 1] [i_8] [i_9] [i_7] [i_11])))));
                        }
                        for (int i_12 = 0; i_12 < 20; i_12 += 1) 
                        {
                            var_27 &= ((/* implicit */_Bool) max((max((min((4958308999231273883ULL), (((/* implicit */unsigned long long int) 4233327710U)))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (short)-7656)), (var_6)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)7656)) ? (((/* implicit */int) arr_27 [i_8 + 1] [i_10 - 1] [i_10 - 2] [i_10 - 2])) : (((/* implicit */int) arr_27 [i_8 + 1] [i_10 + 3] [i_10 + 3] [i_10 - 2])))))));
                            var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_21 [i_8 + 1])) % (((/* implicit */int) (short)32767))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_10 - 2] [i_8 + 1] [i_9] [i_8 + 1]))))) : (((((/* implicit */_Bool) (short)21854)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)1))))));
                        }
                    }
                } 
            } 
        } 
        var_29 = ((/* implicit */short) ((((((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)1)))) == (((/* implicit */int) (unsigned char)0)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_7] [i_7] [i_7]))) : (var_7)));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_13 = 3; i_13 < 13; i_13 += 2) 
    {
        var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) var_4))));
        /* LoopSeq 2 */
        for (signed char i_14 = 2; i_14 < 13; i_14 += 1) 
        {
            /* LoopNest 2 */
            for (int i_15 = 0; i_15 < 15; i_15 += 4) 
            {
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    {
                        arr_49 [i_13] [i_13] [i_16] = ((/* implicit */short) (-(0ULL)));
                        arr_50 [i_13] [i_14] [i_13] [i_16] [i_13 + 2] [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_2 [i_13 - 2]))));
                        arr_51 [i_13] [i_15] [i_15] [i_15] [i_15] |= ((/* implicit */_Bool) ((((arr_9 [i_14] [i_15]) >> (0))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_25 [i_15])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)0)))))));
                        var_31 = ((/* implicit */short) ((((/* implicit */int) arr_8 [i_13 + 2] [i_13] [i_14 - 2])) == (((/* implicit */int) arr_8 [i_13 + 2] [i_13] [i_14 - 2]))));
                        var_32 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_2))));
                    }
                } 
            } 
            var_33 = ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)0)) || (((/* implicit */_Bool) arr_33 [i_13] [i_13] [i_13] [i_13] [i_14]))))) <= (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && ((_Bool)0)))));
        }
        for (short i_17 = 0; i_17 < 15; i_17 += 1) 
        {
            arr_56 [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_34 [i_13] [i_13] [i_13 + 1] [i_13] [i_13 - 3])) || (((/* implicit */_Bool) var_1))));
            var_34 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)28)) ? (((/* implicit */int) (unsigned char)159)) : (((/* implicit */int) var_0))));
        }
        var_35 = ((/* implicit */unsigned long long int) arr_15 [i_13 - 2] [i_13]);
        var_36 = ((/* implicit */_Bool) arr_7 [i_13] [i_13]);
    }
}
