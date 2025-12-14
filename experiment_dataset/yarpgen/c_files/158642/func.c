/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158642
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
    var_10 += ((/* implicit */signed char) ((var_0) ? (((/* implicit */int) ((short) ((((/* implicit */int) var_2)) + (((/* implicit */int) var_1)))))) : (((((/* implicit */int) var_6)) + (((/* implicit */int) var_4))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 2; i_0 < 17; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            var_11 = ((/* implicit */_Bool) ((int) ((unsigned long long int) arr_0 [i_0 - 1])));
            var_12 = ((/* implicit */short) arr_6 [i_0] [i_0]);
        }
        /* vectorizable */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            var_13 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((long long int) 14030792458789575854ULL))) ^ (arr_10 [i_2 - 1] [i_2])));
            var_14 = (~(((/* implicit */int) arr_7 [i_0 + 3] [i_2 - 1])));
            var_15 *= ((/* implicit */unsigned char) var_2);
            arr_11 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_4 [i_0 - 2] [i_0 - 2])) : (((/* implicit */int) var_3))))) ? (14030792458789575854ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [3U] [i_0]))));
        }
        /* LoopSeq 1 */
        for (unsigned long long int i_3 = 2; i_3 < 17; i_3 += 2) 
        {
            var_16 = ((/* implicit */short) (((~(((/* implicit */int) arr_5 [i_0 - 2] [i_3 - 1] [i_3 + 3])))) == (((/* implicit */int) ((min((var_8), (((/* implicit */unsigned long long int) var_5)))) == (min((((/* implicit */unsigned long long int) -1)), (4415951614919975761ULL))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_4 = 2; i_4 < 19; i_4 += 2) 
            {
                var_17 = ((/* implicit */unsigned short) ((arr_0 [(unsigned char)12]) + (((/* implicit */long long int) ((/* implicit */int) var_3)))));
                arr_16 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0 + 3] [i_3 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 3] [(unsigned short)8]))) : (14030792458789575844ULL)));
            }
        }
        var_18 = ((/* implicit */unsigned long long int) (short)-28700);
        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32763)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)98))) != (5757614836242692215LL))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)6466)) && (((/* implicit */_Bool) arr_10 [(_Bool)1] [i_0]))))) : (((((/* implicit */int) arr_7 [i_0 + 3] [(_Bool)0])) | (((/* implicit */int) ((unsigned short) var_3)))))));
    }
    /* vectorizable */
    for (unsigned long long int i_5 = 2; i_5 < 17; i_5 += 1) /* same iter space */
    {
        var_20 ^= ((/* implicit */short) arr_10 [(short)12] [i_5 - 2]);
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 1; i_6 < 16; i_6 += 4) 
        {
            for (long long int i_7 = 0; i_7 < 20; i_7 += 3) 
            {
                {
                    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [7ULL] [i_6])) ? (((/* implicit */int) (unsigned short)23869)) : (((/* implicit */int) (unsigned short)896))))) ? ((-(((/* implicit */int) arr_20 [i_5] [(unsigned char)9] [i_5 + 3])))) : (((/* implicit */int) arr_6 [i_5 + 1] [i_6 + 3]))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 4) 
                    {
                        var_22 = ((/* implicit */signed char) arr_15 [i_7] [i_6] [i_5]);
                        arr_29 [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_5 + 1])) ? (arr_0 [i_6 + 4]) : (arr_0 [i_6 + 1])));
                        var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) -252678922))));
                        arr_30 [i_5 + 3] [i_5] [i_7] [i_5 + 3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_6 + 2] [i_5 + 3])) ? (5725654295105483053LL) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_5 + 2])))));
                        /* LoopSeq 3 */
                        for (short i_9 = 0; i_9 < 20; i_9 += 2) 
                        {
                            var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((((((/* implicit */int) var_4)) + (2147483647))) >> (((((/* implicit */int) arr_24 [i_5] [i_5 + 3] [i_6 - 1])) - (92))))))));
                            arr_35 [i_5] [i_5] [i_6] [i_6 + 3] [i_7] [i_5] [i_9] = ((/* implicit */long long int) arr_7 [i_5] [i_5]);
                            var_25 = ((/* implicit */signed char) (unsigned short)39259);
                            var_26 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)6466)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)41))) : (((arr_0 [i_5]) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-25)))))));
                            var_27 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 2679471959936451850ULL)) ? (((/* implicit */unsigned int) arr_9 [i_9] [i_7])) : (128U))) << (((/* implicit */int) ((var_8) >= (((/* implicit */unsigned long long int) 536673465U)))))));
                        }
                        for (signed char i_10 = 0; i_10 < 20; i_10 += 3) /* same iter space */
                        {
                            arr_38 [(unsigned short)5] [(_Bool)1] [i_5] [i_6] [i_7] [i_8] [i_10] = ((/* implicit */unsigned short) (_Bool)1);
                            arr_39 [(_Bool)1] [i_5] [i_7] [i_8] [i_10] [1ULL] = ((/* implicit */_Bool) (~(arr_33 [i_5 + 2] [i_6] [(_Bool)1] [(signed char)12] [i_10])));
                            arr_40 [5] [i_5] [(signed char)7] [i_5] [i_5 + 1] = ((/* implicit */long long int) (-(((/* implicit */int) arr_6 [i_5 + 2] [i_6 + 2]))));
                        }
                        for (signed char i_11 = 0; i_11 < 20; i_11 += 3) /* same iter space */
                        {
                            arr_43 [i_7] [i_5] [i_7] [i_8] [(short)3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((arr_0 [i_5 - 1]) + (9223372036854775807LL))) >> (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) <= (var_8))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)58743))) | (var_8)))));
                            arr_44 [i_5] [i_6] [7U] [i_8] [i_5] [i_11] = ((/* implicit */short) ((signed char) (signed char)-1));
                        }
                    }
                    /* LoopSeq 4 */
                    for (unsigned short i_12 = 0; i_12 < 20; i_12 += 1) 
                    {
                        var_28 = ((/* implicit */unsigned short) ((-2593396453912544047LL) * (((/* implicit */long long int) ((/* implicit */int) ((signed char) (signed char)0))))));
                        arr_47 [i_5] [i_5] [i_7] [i_12] = ((/* implicit */signed char) 6212613577558514698ULL);
                        var_29 = ((/* implicit */short) ((var_2) ? (((/* implicit */int) arr_45 [i_5] [i_5] [i_5])) : (((/* implicit */int) var_2))));
                    }
                    for (unsigned short i_13 = 0; i_13 < 20; i_13 += 2) 
                    {
                        arr_51 [i_5] [1ULL] [i_6] [1ULL] [i_5] = (((+(arr_13 [i_5] [i_6 + 4] [i_5]))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_25 [(signed char)19] [(short)6] [(short)4] [(unsigned short)18] [(short)4])) ? (arr_33 [i_5 + 2] [i_5 + 2] [(signed char)7] [i_13] [(signed char)7]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))));
                        var_30 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (signed char)49)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)-28700))))));
                        var_31 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) arr_25 [(signed char)16] [(short)2] [i_7] [5LL] [(short)2])) ? (4415951614919975761ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-17))))));
                        var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-8))) >= (arr_26 [i_13] [i_6 + 4] [i_13] [i_5 - 2] [i_5]))))));
                    }
                    for (unsigned short i_14 = 0; i_14 < 20; i_14 += 2) 
                    {
                        var_33 = ((/* implicit */unsigned long long int) ((signed char) arr_24 [i_5] [i_7] [(unsigned char)8]));
                        arr_54 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_24 [i_5 - 2] [i_5] [i_5 - 1])) & (((/* implicit */int) arr_2 [i_5] [i_5]))));
                        arr_55 [i_5] [i_7] [i_6 + 4] [i_5] = ((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_5 + 1] [i_6 + 4])) >= (((/* implicit */int) var_7))));
                    }
                    for (int i_15 = 2; i_15 < 17; i_15 += 2) 
                    {
                        var_34 -= ((/* implicit */unsigned char) ((unsigned short) (short)-26304));
                        arr_58 [(unsigned char)0] [i_5] [i_5] [(short)7] = ((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-25))) : (arr_33 [i_5 + 3] [i_6 - 1] [i_7] [7LL] [(unsigned short)3])))) < (arr_49 [i_15 - 2] [i_5] [i_6 - 1]));
                        arr_59 [i_5 + 2] [i_5] = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) (unsigned short)55804)) : (((((/* implicit */_Bool) (signed char)-41)) ? (((/* implicit */int) arr_41 [i_5 - 1])) : (((/* implicit */int) (signed char)19))))));
                    }
                    var_35 = ((((((/* implicit */int) (short)-11470)) + (2147483647))) << (((((/* implicit */int) (unsigned short)2)) - (2))));
                }
            } 
        } 
    }
    for (unsigned long long int i_16 = 2; i_16 < 17; i_16 += 1) /* same iter space */
    {
        arr_62 [i_16] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_20 [i_16] [i_16] [i_16 + 2]))));
        arr_63 [i_16] [i_16] = ((/* implicit */unsigned int) arr_14 [i_16] [(unsigned short)12] [i_16]);
        arr_64 [i_16] [i_16] = ((/* implicit */signed char) ((((14030792458789575853ULL) + (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_4 [(unsigned short)12] [i_16]))))))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_45 [i_16 + 3] [i_16 + 2] [i_16 - 2])) ? (((/* implicit */int) arr_45 [i_16] [i_16 + 3] [i_16 - 1])) : (((/* implicit */int) var_7)))))));
    }
    var_36 = ((/* implicit */unsigned short) (-(min((11867341308132133198ULL), (6579402765577418417ULL)))));
    var_37 += ((/* implicit */long long int) var_8);
}
