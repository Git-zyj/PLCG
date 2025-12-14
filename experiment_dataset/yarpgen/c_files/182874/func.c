/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182874
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
    for (unsigned long long int i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) ((((/* implicit */int) var_6)) | ((-(((/* implicit */int) (!((_Bool)1)))))))))));
                var_15 |= ((/* implicit */long long int) ((((-1405660953) + (2147483647))) << (((/* implicit */int) (_Bool)1))));
                arr_5 [i_0] [5] [5] = ((/* implicit */unsigned short) min((min((arr_2 [i_0 + 2]), (((/* implicit */long long int) arr_4 [i_0] [i_0])))), (((/* implicit */long long int) (_Bool)1))));
                var_16 = ((/* implicit */long long int) min((var_16), (min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (signed char)-89))))));
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) min((((((/* implicit */_Bool) (unsigned char)104)) ? (((/* implicit */int) (short)24234)) : (2147483636))), (((/* implicit */int) ((((((/* implicit */int) (short)0)) - (((/* implicit */int) var_7)))) < (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_13)))))))));
    /* LoopSeq 3 */
    for (short i_2 = 0; i_2 < 12; i_2 += 1) 
    {
        arr_8 [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) (_Bool)1)), (var_0)))) ? (((((/* implicit */_Bool) arr_4 [2LL] [i_2])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (short)0)))) : (((/* implicit */int) (_Bool)1))))) ? (((((((((/* implicit */_Bool) var_7)) ? (arr_4 [(short)6] [(unsigned char)12]) : (((/* implicit */int) (_Bool)1)))) + (2147483647))) << (min((((/* implicit */int) var_13)), (856660298))))) : (var_8)));
        var_18 -= ((/* implicit */short) min((((((((/* implicit */_Bool) 18446744073709551607ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-33))) : (2068266708227236314LL))) & (var_5))), (((((/* implicit */_Bool) -1405660953)) ? (-4642035234858748064LL) : (((/* implicit */long long int) 856660309))))));
    }
    for (int i_3 = 0; i_3 < 14; i_3 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_4 = 2; i_4 < 11; i_4 += 4) 
        {
            arr_13 [i_4 - 2] = ((/* implicit */int) var_3);
            /* LoopSeq 1 */
            for (int i_5 = 0; i_5 < 14; i_5 += 2) 
            {
                /* LoopSeq 2 */
                for (signed char i_6 = 1; i_6 < 12; i_6 += 2) 
                {
                    var_19 = ((/* implicit */_Bool) (~(((6U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)112)))))));
                    var_20 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)-3060))));
                    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) (~(((((/* implicit */_Bool) arr_19 [i_5] [i_4] [i_4] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_2))))))));
                    var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)41623))))) - (arr_11 [i_6 + 2] [i_4 - 1] [i_3]))))));
                }
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                {
                    arr_22 [i_3] [(_Bool)1] [i_3] [i_3] = ((((/* implicit */_Bool) ((((-2068266708227236315LL) + (9223372036854775807LL))) << (((((-2207513955696724867LL) + (2207513955696724912LL))) - (45LL)))))) ? (arr_21 [i_4] [i_4]) : (((((/* implicit */_Bool) var_1)) ? (arr_9 [(_Bool)1]) : (((/* implicit */int) (short)28672)))));
                    var_23 |= ((/* implicit */unsigned char) (~(576135679274590534LL)));
                    var_24 = ((/* implicit */_Bool) 4642035234858748063LL);
                    var_25 = ((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_4 - 2] [i_4 + 1])) && (((/* implicit */_Bool) arr_11 [i_4 + 3] [i_4 + 2] [i_4 + 3]))));
                }
                /* LoopNest 2 */
                for (short i_8 = 0; i_8 < 14; i_8 += 2) 
                {
                    for (unsigned short i_9 = 0; i_9 < 14; i_9 += 2) 
                    {
                        {
                            arr_28 [i_3] [i_4 - 2] [(signed char)1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_25 [i_4] [i_4 - 2] [i_4 - 2] [i_4 - 2] [i_9]))));
                            var_26 = ((/* implicit */unsigned int) (short)-15478);
                            arr_29 [i_3] [i_3] [i_3] [i_3] |= -68719476736LL;
                        }
                    } 
                } 
                var_27 |= ((/* implicit */short) var_3);
            }
            var_28 |= ((/* implicit */signed char) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_13)) : (1216272797))) % (((arr_24 [(short)1] [i_4] [i_3]) + (((/* implicit */int) (short)32767))))));
        }
        var_29 = ((/* implicit */unsigned char) (~(min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [(short)18])) ? (((/* implicit */int) arr_26 [9] [9])) : (arr_21 [i_3] [(signed char)7])))), (min((((/* implicit */long long int) arr_18 [i_3] [i_3] [i_3] [11] [5LL])), (arr_2 [i_3])))))));
        /* LoopNest 3 */
        for (long long int i_10 = 1; i_10 < 11; i_10 += 2) 
        {
            for (signed char i_11 = 0; i_11 < 14; i_11 += 4) 
            {
                for (unsigned char i_12 = 1; i_12 < 12; i_12 += 3) 
                {
                    {
                        var_30 = ((/* implicit */long long int) ((((/* implicit */long long int) ((((var_11) - (((/* implicit */int) var_6)))) % (((/* implicit */int) var_9))))) != (var_2)));
                        var_31 = ((/* implicit */long long int) var_3);
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        for (short i_13 = 1; i_13 < 13; i_13 += 3) 
        {
            var_32 = ((/* implicit */long long int) ((((((/* implicit */int) arr_10 [(short)11] [(short)11])) - (((/* implicit */int) arr_32 [i_3] [(short)0] [(short)0])))) - (arr_4 [i_13] [i_13])));
            var_33 = ((/* implicit */short) ((9900750987090824929ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16383)))));
        }
        /* vectorizable */
        for (int i_14 = 2; i_14 < 10; i_14 += 3) 
        {
            var_34 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_35 [i_3] [i_3] [i_3])) ? (((/* implicit */unsigned long long int) 2207513955696724866LL)) : (((((/* implicit */unsigned long long int) 1067581985)) % (arr_35 [i_3] [i_14] [i_14])))));
            var_35 = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)11)) : ((-2147483647 - 1))));
        }
        for (short i_15 = 1; i_15 < 13; i_15 += 2) 
        {
            var_36 = ((/* implicit */short) max((var_36), (arr_19 [i_15 + 1] [i_15] [(short)12] [(short)12])));
            /* LoopNest 2 */
            for (unsigned long long int i_16 = 0; i_16 < 14; i_16 += 3) 
            {
                for (unsigned short i_17 = 1; i_17 < 12; i_17 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_18 = 1; i_18 < 11; i_18 += 2) 
                        {
                            arr_53 [i_18] [(short)4] [2LL] [(short)4] [i_3] |= ((/* implicit */unsigned long long int) arr_39 [(short)8] [(short)8] [(short)8]);
                            var_37 = ((/* implicit */short) arr_30 [i_16] [i_15 + 1] [i_3]);
                            var_38 = ((/* implicit */short) max((var_38), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) var_13)) << (((((/* implicit */int) (short)32767)) - (32737)))))))))));
                            var_39 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_3] [5LL] [i_17] [i_17])) - (((/* implicit */int) var_7))))) ? (arr_41 [i_17 + 1] [i_18 + 2]) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_3] [i_3] [(unsigned char)8] [i_17 + 1] [i_17 + 1]))))));
                        }
                        var_40 = ((/* implicit */unsigned short) (unsigned char)68);
                    }
                } 
            } 
            var_41 = ((/* implicit */_Bool) -3456365259211163395LL);
            var_42 = ((/* implicit */unsigned char) min((var_42), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (short)1536)) ^ (((/* implicit */int) ((((/* implicit */int) (short)16383)) <= (((/* implicit */int) (unsigned char)214)))))))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) -1968749884)), (2382220804U)))) : (var_5))))));
        }
    }
    for (short i_19 = 1; i_19 < 22; i_19 += 2) 
    {
        var_43 = ((/* implicit */_Bool) min((251658240), (((((/* implicit */_Bool) arr_54 [i_19 + 3])) ? (((((/* implicit */_Bool) (short)0)) ? (-1548369809) : (((/* implicit */int) var_12)))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_54 [(short)21])) : (((/* implicit */int) var_7))))))));
        var_44 += ((/* implicit */unsigned long long int) ((((/* implicit */int) min(((short)16359), ((short)-16384)))) ^ (((((/* implicit */_Bool) (-(-1)))) ? (((/* implicit */int) ((-790262523) < (var_11)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 233980534)))))))));
    }
}
