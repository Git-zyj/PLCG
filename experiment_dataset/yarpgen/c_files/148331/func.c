/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148331
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
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        var_15 = ((/* implicit */signed char) arr_1 [i_0] [i_0]);
        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)58)) : (-1069676414)))) ? (min((var_11), (((/* implicit */unsigned long long int) (signed char)-60)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)253))) + (arr_0 [i_0]))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-50)))))));
        var_17 = (+(((var_5) << (((/* implicit */int) ((arr_1 [i_0] [i_0 - 1]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)3)))))))));
    }
    for (signed char i_1 = 0; i_1 < 14; i_1 += 2) 
    {
        arr_4 [i_1] [10] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) * (max((((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-21))) : (var_3))), (((/* implicit */unsigned long long int) min((var_9), ((unsigned char)15))))))));
        var_18 = ((/* implicit */unsigned short) arr_1 [i_1] [i_1]);
        var_19 = ((/* implicit */unsigned short) max(((signed char)58), (var_2)));
    }
    var_20 = ((/* implicit */signed char) ((((var_10) ? ((+(var_7))) : (max((((/* implicit */unsigned long long int) var_2)), (var_5))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)58)))));
    /* LoopSeq 4 */
    for (long long int i_2 = 0; i_2 < 10; i_2 += 2) 
    {
        arr_8 [i_2] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_7)) ? (arr_7 [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))), (var_7)));
        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (signed char)58))));
        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)128))))) || (((/* implicit */_Bool) (((!(((/* implicit */_Bool) (signed char)58)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [3ULL] [i_2])) || (((/* implicit */_Bool) var_1)))))) : (((unsigned long long int) (unsigned short)29196))))))))));
    }
    for (int i_3 = 0; i_3 < 10; i_3 += 2) 
    {
        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)15)))))));
        arr_12 [i_3] = ((/* implicit */unsigned long long int) (unsigned char)242);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_4 = 2; i_4 < 6; i_4 += 2) 
        {
            arr_15 [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-102)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)31))) : (var_3)));
            var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_3])) != (((/* implicit */int) arr_11 [i_4 + 1])))))));
        }
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_25 = ((int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_9)), ((unsigned short)29185)))) ? ((-(5ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (arr_17 [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))));
        /* LoopNest 3 */
        for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 1) 
        {
            for (long long int i_7 = 2; i_7 < 11; i_7 += 3) 
            {
                for (int i_8 = 4; i_8 < 14; i_8 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_9 = 2; i_9 < 14; i_9 += 1) 
                        {
                            var_26 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)253)) || (((/* implicit */_Bool) var_5))))) <= (((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_7] [(signed char)11] [i_8] [i_8 - 2])) || (((/* implicit */_Bool) 18446744073709551602ULL)))))));
                            var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) 1359809770U))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */unsigned long long int) 736777312U)) : (arr_27 [i_5] [i_5] [i_7 + 3] [i_7 + 3] [13ULL] [i_6] [i_7 + 3])))) ? (max((-1404001692), (((/* implicit */int) (unsigned char)48)))) : ((~(((/* implicit */int) (unsigned char)17)))))) : (((/* implicit */int) arr_18 [(signed char)14])))))));
                            var_28 |= ((/* implicit */_Bool) ((unsigned short) (~(min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (unsigned char)109)))))));
                        }
                        /* LoopSeq 3 */
                        for (signed char i_10 = 3; i_10 < 13; i_10 += 2) 
                        {
                            arr_33 [i_5] [i_5] = min((max((((/* implicit */unsigned long long int) (signed char)58)), (16752582586024248779ULL))), (max((var_11), (var_7))));
                            var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) (((~((-(((/* implicit */int) var_10)))))) + (((((/* implicit */int) ((((/* implicit */int) (signed char)77)) <= (((/* implicit */int) (unsigned char)131))))) << (min((var_3), (5ULL))))))))));
                        }
                        for (unsigned int i_11 = 0; i_11 < 15; i_11 += 4) 
                        {
                            arr_38 [i_5] [i_5] [i_5] [10U] [i_11] = var_0;
                            arr_39 [i_5] [i_7 + 1] [i_7] [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_24 [i_5] [i_8] [i_8 - 3] [i_8]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)13)))))) ? (min((16752582586024248792ULL), (((/* implicit */unsigned long long int) (unsigned short)1391)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                            arr_40 [i_5] [i_5] [i_5] [i_5] [i_8] [(_Bool)1] [i_5] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */int) var_9)) != (((/* implicit */int) var_12))))), ((+(((/* implicit */int) (unsigned char)242))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */int) (signed char)32)) + (((/* implicit */int) (unsigned short)1402)))) == (max((((/* implicit */int) (_Bool)1)), (arr_34 [i_8]))))))) : (max((var_8), (((/* implicit */long long int) max(((unsigned short)64144), (((/* implicit */unsigned short) (unsigned char)114)))))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_12 = 0; i_12 < 15; i_12 += 2) 
                        {
                            var_30 = ((/* implicit */unsigned char) (~(arr_37 [i_5] [i_6] [i_8 - 1])));
                            var_31 = ((/* implicit */long long int) arr_35 [i_12] [i_12] [i_8 - 3] [i_7 + 1] [i_5] [i_5]);
                        }
                        var_32 = ((/* implicit */unsigned short) (signed char)-41);
                        var_33 = ((/* implicit */signed char) ((long long int) min((((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)151))) == (arr_22 [i_8] [i_6] [i_7] [0ULL])))), (arr_23 [i_5] [i_5]))));
                    }
                } 
            } 
        } 
        var_34 = ((/* implicit */_Bool) ((((/* implicit */int) var_0)) | ((~(((/* implicit */int) (unsigned short)255))))));
    }
    for (unsigned short i_13 = 2; i_13 < 20; i_13 += 2) 
    {
        var_35 |= ((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) ((unsigned short) arr_45 [i_13 + 1]))), ((-(arr_45 [(unsigned short)18]))))) << (((min((var_11), (((/* implicit */unsigned long long int) arr_46 [i_13 - 1])))) - (2795ULL)))));
        var_36 = ((/* implicit */signed char) (((+((((_Bool)1) ? (14) : (((/* implicit */int) (unsigned short)14816)))))) << (((((9882391191402653928ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)109))))) - (7269483587735284397ULL)))));
    }
}
