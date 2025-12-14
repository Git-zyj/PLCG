/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18008
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
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    var_20 = ((/* implicit */int) ((((((/* implicit */_Bool) max((4388675167475535207LL), (((/* implicit */long long int) (unsigned short)11817))))) ? (arr_7 [i_0] [i_0 - 1] [i_0 - 1] [i_0 + 1]) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))))))) < (min((-1LL), (((/* implicit */long long int) (unsigned short)11817))))));
                    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((-1LL) / (((/* implicit */long long int) ((/* implicit */int) (short)22425))))) ^ ((-(max((arr_5 [i_0]), (arr_5 [i_2]))))))))));
                    var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) var_11))));
                }
                var_23 = ((/* implicit */_Bool) max((var_23), ((((~(arr_7 [i_0 - 1] [i_1] [(_Bool)1] [i_1]))) != (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */int) (short)12405)) <= (((/* implicit */int) arr_0 [i_0 + 1])))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_2 [(_Bool)1])) / (((/* implicit */int) var_0)))))))))))));
                var_24 ^= ((/* implicit */short) (((+(var_11))) / (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0 + 1] [i_1])))));
                var_25 = ((/* implicit */int) min((var_25), (max((((((((/* implicit */_Bool) (short)-22425)) ? (((/* implicit */int) arr_2 [i_0])) : (var_12))) - (arr_4 [i_1] [i_0] [i_0 - 1]))), ((+(((/* implicit */int) (signed char)35))))))));
                var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) max((((unsigned char) ((((/* implicit */_Bool) arr_6 [i_1] [(signed char)2] [i_1])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) var_8))))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_11))))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (short i_3 = 0; i_3 < 19; i_3 += 2) /* same iter space */
    {
        var_27 ^= max((((((/* implicit */long long int) arr_9 [i_3] [i_3])) ^ (arr_7 [i_3] [i_3] [i_3] [(short)9]))), (max((min((((/* implicit */long long int) (short)-6423)), (15LL))), (((/* implicit */long long int) arr_0 [i_3])))));
        var_28 = ((/* implicit */signed char) ((short) max((((/* implicit */unsigned short) (short)(-32767 - 1))), ((unsigned short)11835))));
    }
    for (short i_4 = 0; i_4 < 19; i_4 += 2) /* same iter space */
    {
        var_29 = min((min((((/* implicit */long long int) min((((/* implicit */int) arr_2 [i_4])), (arr_4 [i_4] [i_4] [i_4])))), (((((/* implicit */_Bool) arr_1 [i_4] [(short)10])) ? (((/* implicit */long long int) arr_9 [(short)4] [(short)4])) : (var_7))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)(-32767 - 1))) || (((/* implicit */_Bool) (short)6404))))));
        var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) (unsigned char)6))));
        var_31 = ((/* implicit */int) arr_3 [i_4]);
        var_32 = arr_3 [i_4];
    }
    var_33 = ((/* implicit */long long int) ((((((/* implicit */int) var_6)) < (((var_12) + (((/* implicit */int) var_5)))))) || (((/* implicit */_Bool) var_1))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_5 = 0; i_5 < 15; i_5 += 4) /* same iter space */
    {
        var_34 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_2 [(short)0])) ? (((/* implicit */int) arr_6 [i_5] [i_5] [i_5])) : (((/* implicit */int) arr_8 [(unsigned char)2] [(unsigned char)2]))))));
        /* LoopNest 3 */
        for (unsigned char i_6 = 1; i_6 < 11; i_6 += 3) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (unsigned char i_8 = 0; i_8 < 15; i_8 += 1) 
                {
                    {
                        var_35 = ((/* implicit */short) (~(((/* implicit */int) (short)-6419))));
                        var_36 = ((/* implicit */signed char) ((unsigned char) (-(var_1))));
                        var_37 = arr_11 [i_7];
                    }
                } 
            } 
        } 
        var_38 = ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */long long int) 2147483647)) ^ (var_10))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_19)))))));
        var_39 -= ((/* implicit */unsigned char) var_14);
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 15; i_9 += 4) /* same iter space */
    {
        var_40 = ((/* implicit */_Bool) var_12);
        /* LoopNest 2 */
        for (unsigned char i_10 = 3; i_10 < 11; i_10 += 1) 
        {
            for (signed char i_11 = 0; i_11 < 15; i_11 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (short i_12 = 0; i_12 < 15; i_12 += 1) 
                    {
                        /* LoopSeq 4 */
                        for (int i_13 = 2; i_13 < 13; i_13 += 1) /* same iter space */
                        {
                            var_41 ^= arr_34 [i_11] [i_12] [i_9] [i_12] [i_13] [i_13 + 1];
                            var_42 = ((/* implicit */int) min((var_42), (((((/* implicit */int) arr_18 [i_10 + 2] [(_Bool)1] [(unsigned char)10])) + (((/* implicit */int) arr_6 [i_9] [i_12] [i_9]))))));
                        }
                        for (int i_14 = 2; i_14 < 13; i_14 += 1) /* same iter space */
                        {
                            var_43 -= ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
                            var_44 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) arr_35 [i_9] [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_9] [i_9]))) : (arr_17 [2LL] [2LL]))) + (9223372036854775807LL))) >> (((arr_17 [i_10 - 2] [i_14 - 2]) - (6047916976617335089LL)))));
                        }
                        for (int i_15 = 2; i_15 < 13; i_15 += 1) /* same iter space */
                        {
                            var_45 = ((/* implicit */signed char) ((((/* implicit */int) arr_20 [i_9] [i_15 + 1] [i_10 + 1] [i_12])) == (((/* implicit */int) ((unsigned short) arr_32 [i_15] [i_10] [i_10] [i_10])))));
                            var_46 = ((/* implicit */signed char) min((var_46), (((/* implicit */signed char) ((long long int) arr_16 [i_10 + 4] [i_10 + 4] [i_10 - 1])))));
                        }
                        for (int i_16 = 2; i_16 < 13; i_16 += 1) /* same iter space */
                        {
                            var_47 |= ((/* implicit */short) ((((/* implicit */unsigned long long int) arr_30 [i_9] [i_10] [i_12])) & (arr_14 [i_16 + 1])));
                            var_48 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_16 - 1] [i_10] [i_10] [i_9])) ? (arr_33 [i_9]) : (((/* implicit */int) arr_29 [i_9] [i_11] [i_12] [i_10]))))) ? (((((/* implicit */int) arr_37 [i_16] [i_12] [i_11] [14LL] [i_9])) | (((/* implicit */int) var_18)))) : (((/* implicit */int) var_17))));
                        }
                        var_49 = ((/* implicit */short) ((long long int) (short)27073));
                    }
                    for (long long int i_17 = 0; i_17 < 15; i_17 += 4) 
                    {
                        var_50 -= ((/* implicit */short) ((((/* implicit */_Bool) (+(arr_38 [i_9] [i_10] [i_9] [8ULL] [i_11] [i_11] [i_17])))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_6))));
                        var_51 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -16LL)) ? (-1) : (((/* implicit */int) (_Bool)1))));
                        var_52 = ((arr_30 [i_9] [i_10 + 4] [i_17]) | (arr_30 [i_9] [i_9] [i_9]));
                        var_53 = ((/* implicit */unsigned short) min((var_53), (((/* implicit */unsigned short) ((((/* implicit */int) (short)6404)) <= (((/* implicit */int) (signed char)1)))))));
                        var_54 = ((/* implicit */unsigned char) max((var_54), (((/* implicit */unsigned char) ((signed char) arr_8 [i_10 + 3] [i_10 + 1])))));
                    }
                    for (signed char i_18 = 0; i_18 < 15; i_18 += 3) 
                    {
                        var_55 = ((/* implicit */unsigned short) arr_2 [i_11]);
                        var_56 = ((/* implicit */_Bool) 1152921504606584832ULL);
                    }
                    var_57 = ((/* implicit */long long int) max((var_57), (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_15))))) > ((+(((/* implicit */int) (short)-6445)))))))));
                    var_58 = ((/* implicit */unsigned short) arr_37 [i_9] [(unsigned char)9] [i_9] [i_11] [i_11]);
                }
            } 
        } 
    }
    for (int i_19 = 0; i_19 < 15; i_19 += 4) /* same iter space */
    {
        var_59 = ((/* implicit */_Bool) arr_10 [(short)11]);
        var_60 = ((/* implicit */unsigned char) min((var_60), (((/* implicit */unsigned char) ((min((((((/* implicit */_Bool) arr_4 [i_19] [16ULL] [i_19])) ? (((/* implicit */int) arr_37 [i_19] [i_19] [i_19] [i_19] [i_19])) : (((/* implicit */int) arr_23 [i_19] [i_19] [i_19] [i_19] [i_19])))), (((((/* implicit */int) arr_44 [i_19] [i_19])) % (var_12))))) * (((((((/* implicit */int) arr_49 [i_19])) / (var_16))) / ((-(((/* implicit */int) var_5)))))))))));
        var_61 *= ((/* implicit */_Bool) min(((((+(((/* implicit */int) (unsigned char)67)))) & (((/* implicit */int) (signed char)61)))), ((-(((((/* implicit */int) (unsigned short)65535)) - (var_16)))))));
        var_62 = ((/* implicit */long long int) var_17);
    }
}
