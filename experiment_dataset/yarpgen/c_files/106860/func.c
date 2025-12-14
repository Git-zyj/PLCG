/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106860
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
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] [(unsigned char)3] [i_0] = ((/* implicit */signed char) arr_0 [(unsigned short)8]);
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        {
                            var_12 = ((/* implicit */unsigned long long int) arr_1 [i_2] [(unsigned short)5]);
                            var_13 &= ((/* implicit */short) min((max((((/* implicit */int) ((signed char) 2083482962))), (((((/* implicit */int) var_5)) + (((/* implicit */int) arr_3 [i_3])))))), (((/* implicit */int) arr_1 [i_1] [i_1]))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_4 = 0; i_4 < 12; i_4 += 2) 
    {
        /* LoopSeq 3 */
        for (signed char i_5 = 0; i_5 < 12; i_5 += 4) 
        {
            var_14 &= ((/* implicit */signed char) ((-2083482985) < (2083482962)));
            arr_17 [4ULL] = (~(((/* implicit */int) (short)20144)));
        }
        for (short i_6 = 0; i_6 < 12; i_6 += 2) 
        {
            arr_22 [7LL] [i_4] [i_4] = ((((/* implicit */_Bool) arr_12 [i_4] [i_6])) && (((/* implicit */_Bool) ((((/* implicit */int) (signed char)-63)) - (var_10)))));
            var_15 = var_10;
        }
        for (unsigned long long int i_7 = 2; i_7 < 9; i_7 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    {
                        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-4)) && (((/* implicit */_Bool) 16203592742253467327ULL))));
                        var_17 -= ((/* implicit */unsigned long long int) ((16203592742253467327ULL) == (arr_11 [i_4])));
                    }
                } 
            } 
            arr_32 [i_4] [i_4] = ((/* implicit */short) var_1);
        }
        /* LoopSeq 1 */
        for (short i_10 = 3; i_10 < 11; i_10 += 4) 
        {
            var_18 += ((/* implicit */unsigned long long int) arr_7 [i_4] [(unsigned short)10] [(signed char)2] [i_4]);
            arr_36 [i_4] = ((/* implicit */int) var_2);
            arr_37 [i_10 - 1] [i_4] [(signed char)1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */unsigned long long int) arr_21 [i_10])) | (var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_4] [i_10 - 3])))));
            var_19 = ((/* implicit */unsigned char) -577613976);
            var_20 = 18446744073709551615ULL;
        }
    }
    for (int i_11 = 2; i_11 < 19; i_11 += 2) 
    {
        var_21 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */signed char) ((((/* implicit */int) var_4)) <= (((/* implicit */int) arr_39 [i_11] [i_11]))))), (max(((signed char)-18), (((/* implicit */signed char) arr_39 [i_11] [9ULL])))))))) == ((-(var_8)))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_12 = 2; i_12 < 17; i_12 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                for (unsigned char i_14 = 4; i_14 < 16; i_14 += 4) 
                {
                    {
                        var_22 ^= ((/* implicit */short) ((arr_47 [i_12 + 3]) ? (arr_41 [i_14 - 4] [i_12 - 1] [i_11 - 2]) : (arr_41 [i_14 - 3] [i_12 + 3] [i_11 - 1])));
                        arr_48 [i_11] [i_14] [(unsigned char)10] [i_14] &= ((/* implicit */unsigned int) var_11);
                        arr_49 [i_13] = ((/* implicit */signed char) (~(((/* implicit */int) arr_39 [i_11] [i_14 + 2]))));
                        var_23 = ((/* implicit */unsigned char) (-(arr_44 [i_14 - 4] [i_11 - 1])));
                    }
                } 
            } 
            arr_50 [i_11] [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) arr_42 [i_12] [i_12 - 1] [i_12 - 2])) : (((/* implicit */int) var_4))));
            arr_51 [i_11] = (!(((/* implicit */_Bool) (unsigned char)253)));
        }
        for (unsigned short i_15 = 2; i_15 < 17; i_15 += 4) /* same iter space */
        {
            var_24 = min((5942051700286799573LL), (((/* implicit */long long int) (signed char)-111)));
            arr_54 [i_11 - 2] [i_11] [i_11 + 1] = ((/* implicit */long long int) (+(max((-1711031195), (((/* implicit */int) (unsigned short)65512))))));
        }
    }
}
