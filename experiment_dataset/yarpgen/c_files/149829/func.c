/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149829
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) var_10);
        /* LoopNest 2 */
        for (unsigned int i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 2; i_3 < 18; i_3 += 3) 
                    {
                        var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)12814)) : (((((/* implicit */int) arr_8 [i_0] [i_0] [i_0])) | (((/* implicit */int) var_8))))));
                        var_14 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-3647))) | (var_2))))));
                    }
                    for (signed char i_4 = 0; i_4 < 21; i_4 += 2) 
                    {
                        var_15 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)3646)) >> (((arr_6 [i_1 + 2]) + (1954943959)))));
                        var_16 = ((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_4] [i_2] [11] [i_0])) | (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_5))))));
                        var_17 = ((/* implicit */int) (short)3645);
                    }
                    for (long long int i_5 = 1; i_5 < 19; i_5 += 3) 
                    {
                        var_18 = ((/* implicit */long long int) ((short) arr_10 [i_5 + 2] [(signed char)10] [i_5] [i_5 - 1] [i_1 + 1]));
                        arr_18 [i_5 + 2] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-16503)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 197568))))) : (((/* implicit */int) ((short) arr_5 [i_0] [i_1])))));
                    }
                    arr_19 [i_1] [14LL] [i_1] [i_1] = ((((((/* implicit */int) (short)-21737)) + (2147483647))) << (((((((/* implicit */int) (short)-3648)) + (3667))) - (19))));
                }
            } 
        } 
    }
    for (unsigned char i_6 = 0; i_6 < 11; i_6 += 2) 
    {
        arr_22 [(unsigned char)1] = ((/* implicit */long long int) ((unsigned char) (~(3326374904U))));
        /* LoopNest 2 */
        for (unsigned char i_7 = 1; i_7 < 9; i_7 += 2) 
        {
            for (long long int i_8 = 4; i_8 < 8; i_8 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (short i_9 = 0; i_9 < 11; i_9 += 2) 
                    {
                        var_19 = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((short) arr_26 [1LL]))))))));
                        arr_34 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [(short)14])) ? (arr_13 [12U] [i_9] [i_8] [i_9]) : (((/* implicit */int) var_4))))) ^ ((~(arr_5 [i_6] [i_9]))))) : (((/* implicit */unsigned int) 0))));
                    }
                    for (short i_10 = 0; i_10 < 11; i_10 += 3) 
                    {
                        arr_37 [i_6] [i_10] = ((/* implicit */signed char) ((((var_11) & (((/* implicit */long long int) var_0)))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_10] [i_8] [10LL] [i_6])))));
                        var_20 = ((((/* implicit */_Bool) max(((+(-6))), (8)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-96))))) : (((unsigned int) ((arr_5 [i_7] [i_10]) ^ (((/* implicit */unsigned int) 0))))));
                        var_21 = ((/* implicit */signed char) ((((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)208)) || (((/* implicit */_Bool) var_2))))) & (((((/* implicit */int) var_5)) >> (((((/* implicit */int) var_12)) - (196))))))) == ((~(max((0), (((/* implicit */int) arr_21 [0]))))))));
                    }
                    var_22 = ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) < ((~(((/* implicit */int) (unsigned char)162))))));
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned int) ((((var_7) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_6]))))) && (((/* implicit */_Bool) arr_24 [i_6]))));
        arr_38 [i_6] = ((/* implicit */unsigned int) (((((~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (short)3654))) : (-4506290812384508603LL))))) + (9223372036854775807LL))) >> (((((/* implicit */int) ((short) var_1))) + (27590)))));
    }
    /* vectorizable */
    for (unsigned long long int i_11 = 0; i_11 < 25; i_11 += 2) 
    {
        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) (short)25793)) ? (0) : (((/* implicit */int) (unsigned char)252))));
        /* LoopNest 2 */
        for (short i_12 = 0; i_12 < 25; i_12 += 2) 
        {
            for (unsigned long long int i_13 = 1; i_13 < 22; i_13 += 2) 
            {
                {
                    var_25 = ((/* implicit */unsigned long long int) ((arr_42 [i_13 + 1] [i_13 - 1]) & (((/* implicit */long long int) (~(arr_44 [i_12] [i_11]))))));
                    var_26 = ((/* implicit */short) ((var_2) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_45 [i_11] [i_12] [i_13 + 1]))))))));
                }
            } 
        } 
        arr_46 [6LL] = ((/* implicit */unsigned char) ((arr_39 [i_11] [i_11]) + (((/* implicit */unsigned long long int) arr_41 [i_11]))));
    }
    var_27 = ((/* implicit */signed char) min(((+(((((/* implicit */int) (short)-3646)) | (var_0))))), (((/* implicit */int) ((((/* implicit */long long int) 63510500)) >= (-6163974321414595852LL))))));
    var_28 = ((/* implicit */unsigned short) var_9);
}
