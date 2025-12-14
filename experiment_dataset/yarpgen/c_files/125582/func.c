/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125582
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
    var_17 = ((/* implicit */unsigned long long int) ((_Bool) (unsigned short)11326));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_1) ^ (((/* implicit */int) (signed char)-107))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0]))))) : (18446744073709551615ULL)));
                    arr_10 [i_2] [4] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-107)) ? (var_9) : (((/* implicit */unsigned long long int) ((var_12) ? (((/* implicit */int) arr_6 [i_0] [i_0])) : (((/* implicit */int) (unsigned short)23362)))))));
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        var_18 -= ((/* implicit */int) arr_1 [(unsigned short)4]);
                        /* LoopSeq 3 */
                        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) 3ULL))));
                            arr_16 [i_0] [i_0] [i_0] [(_Bool)1] [i_1] = ((/* implicit */long long int) var_13);
                        }
                        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                        {
                            arr_19 [i_5 + 1] [i_2] [i_0] [i_2] [i_0] |= ((/* implicit */unsigned long long int) (unsigned char)17);
                            arr_20 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_16)) << (((/* implicit */int) (unsigned char)4))))) ? (((/* implicit */int) (signed char)-121)) : ((+(((/* implicit */int) arr_8 [i_0] [7] [i_3] [i_1]))))));
                            var_20 = arr_7 [i_0] [i_2] [i_3] [i_5];
                        }
                        for (int i_6 = 2; i_6 < 14; i_6 += 4) 
                        {
                            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((unsigned short) ((arr_15 [i_1]) ? (31) : (((/* implicit */int) arr_0 [i_0]))))))));
                            var_22 += var_0;
                            arr_23 [i_0] [i_1] [i_1] [i_0] [i_3 + 1] [i_0] [4LL] = ((/* implicit */int) ((((/* implicit */int) var_10)) < (((/* implicit */int) arr_0 [i_0]))));
                            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [(unsigned char)3] [i_0]))) | (-7158198817242893179LL)))) ? (((/* implicit */int) ((arr_13 [9LL] [i_1] [14] [i_1] [i_1]) == (((/* implicit */unsigned int) 2147483647))))) : (((/* implicit */int) arr_4 [i_3]))));
                        }
                    }
                    for (long long int i_7 = 0; i_7 < 16; i_7 += 1) 
                    {
                        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) 5661493319530075749LL))))))))));
                        var_25 = ((/* implicit */int) 13994422220257584785ULL);
                    }
                    for (unsigned long long int i_8 = 1; i_8 < 15; i_8 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (int i_9 = 1; i_9 < 14; i_9 += 2) 
                        {
                            var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0] [(signed char)9] [12] [i_0] [(unsigned short)4])) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_25 [i_8 + 1] [i_2] [i_1])) : (((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [12] [i_0] [6] [i_0])))) : (((((/* implicit */_Bool) arr_22 [i_0] [i_1] [13] [15U] [i_9])) ? (-1312346222) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [(_Bool)1]))))));
                            var_27 = ((/* implicit */int) ((((/* implicit */_Bool) 1818698816)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_9 + 2]))) : (var_5)));
                        }
                        var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0])) ? (arr_12 [i_0] [i_0] [i_0] [i_0]) : (arr_12 [(unsigned short)14] [i_1] [i_2] [i_8])));
                        arr_30 [i_0] [i_1] [i_2] [i_8] = ((/* implicit */unsigned short) var_5);
                        var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) (unsigned short)45546))));
                    }
                }
            } 
        } 
        var_30 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)40983)) ? (arr_27 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))) ? (((((/* implicit */int) (signed char)49)) | (((/* implicit */int) arr_25 [12LL] [i_0] [i_0])))) : (arr_29 [(_Bool)1] [i_0] [i_0] [i_0] [0ULL] [(_Bool)1])));
        var_31 = var_7;
        arr_31 [i_0] = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [0LL]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_26 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_25 [i_0] [i_0] [i_0]))))) : (((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)35513))) : (arr_27 [i_0] [i_0]))));
        /* LoopSeq 1 */
        for (unsigned short i_10 = 0; i_10 < 16; i_10 += 1) 
        {
            arr_34 [i_10] [i_0] [i_0] = ((/* implicit */unsigned short) (_Bool)0);
            var_32 = 9223372036854775807LL;
            var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_27 [i_0] [i_0])))) ? (((/* implicit */int) arr_1 [i_10])) : (((/* implicit */int) arr_21 [i_0] [i_0] [i_10] [2]))));
            var_34 = ((/* implicit */unsigned long long int) arr_15 [9]);
            /* LoopNest 2 */
            for (unsigned char i_11 = 2; i_11 < 13; i_11 += 1) 
            {
                for (unsigned short i_12 = 0; i_12 < 16; i_12 += 3) 
                {
                    {
                        arr_40 [i_0] [(unsigned short)10] [i_10] [i_10] [i_11] [i_12] = ((/* implicit */long long int) (~(((/* implicit */int) arr_6 [i_0] [i_11 + 3]))));
                        arr_41 [(unsigned short)0] [i_10] [i_11] [i_12] = (unsigned short)65472;
                        /* LoopSeq 1 */
                        for (unsigned short i_13 = 0; i_13 < 16; i_13 += 4) 
                        {
                            var_35 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) -9013830716505059066LL)) ? (((/* implicit */int) (unsigned char)64)) : (((/* implicit */int) (_Bool)1))));
                            var_36 = ((/* implicit */int) 1245868280U);
                        }
                        var_37 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_29 [6LL] [i_12] [i_12] [i_12] [i_12] [i_12])) ^ (arr_14 [i_0] [i_0] [i_0] [i_0])))) ? (((((/* implicit */_Bool) arr_32 [4LL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_14))) : (((((/* implicit */_Bool) var_8)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65472)))))));
                        arr_44 [i_10] [i_10] [12U] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)15906)) <= (((/* implicit */int) arr_17 [i_12]))));
                    }
                } 
            } 
        }
    }
    /* LoopNest 3 */
    for (unsigned short i_14 = 2; i_14 < 14; i_14 += 3) 
    {
        for (unsigned int i_15 = 0; i_15 < 16; i_15 += 1) 
        {
            for (unsigned short i_16 = 2; i_16 < 14; i_16 += 4) 
            {
                {
                    var_38 -= ((/* implicit */_Bool) var_15);
                    var_39 = ((int) var_9);
                    var_40 = max(((~(31))), (max((((((/* implicit */_Bool) (signed char)107)) ? (((/* implicit */int) arr_3 [i_16 + 1])) : (((/* implicit */int) arr_0 [(_Bool)1])))), (((/* implicit */int) arr_8 [i_16 + 1] [i_16 - 2] [i_16] [i_16])))));
                }
            } 
        } 
    } 
    var_41 = ((/* implicit */unsigned int) max((var_41), (((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_11)), (var_9))))));
}
