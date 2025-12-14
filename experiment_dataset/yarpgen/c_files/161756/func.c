/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161756
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_10 = ((/* implicit */_Bool) (+(((/* implicit */int) ((arr_2 [i_0]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    var_11 *= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_2 [i_2]) < (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)15))))))) * (((((/* implicit */_Bool) arr_2 [i_2])) ? (arr_2 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-5)))))));
                    arr_7 [i_0] [i_1] [i_0] [2] = ((/* implicit */long long int) ((((/* implicit */int) (signed char)16)) / (((((/* implicit */int) arr_6 [i_0] [i_1])) | (((/* implicit */int) var_1))))));
                }
            } 
        } 
        arr_8 [i_0] [i_0] = ((/* implicit */unsigned int) min(((signed char)-16), (min(((signed char)-15), ((signed char)-16)))));
    }
    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? ((-(((int) var_0)))) : (((/* implicit */int) var_1))));
    var_13 = ((/* implicit */long long int) ((min((((((/* implicit */int) (signed char)-26)) - (((/* implicit */int) var_9)))), (((int) var_9)))) ^ (((/* implicit */int) var_1))));
    var_14 ^= ((/* implicit */unsigned char) 7267643197768287655ULL);
    /* LoopSeq 2 */
    for (unsigned int i_3 = 1; i_3 < 23; i_3 += 2) 
    {
        var_15 = ((unsigned char) ((unsigned long long int) arr_10 [i_3 + 1]));
        arr_11 [i_3] = ((/* implicit */_Bool) (-(((((/* implicit */int) min(((short)-16782), (((/* implicit */short) (signed char)7))))) | (((/* implicit */int) (signed char)27))))));
    }
    for (long long int i_4 = 1; i_4 < 24; i_4 += 2) 
    {
        var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((14680064U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (min((((/* implicit */int) ((_Bool) 2553857887263971823LL))), (((((/* implicit */_Bool) -2553857887263971814LL)) ? (((/* implicit */int) (signed char)9)) : (((/* implicit */int) (signed char)27)))))) : (((/* implicit */int) (signed char)27)))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_5 = 1; i_5 < 21; i_5 += 2) 
        {
            /* LoopNest 3 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (unsigned long long int i_7 = 2; i_7 < 24; i_7 += 4) 
                {
                    for (int i_8 = 3; i_8 < 24; i_8 += 4) 
                    {
                        {
                            arr_25 [(signed char)18] [(signed char)18] [12] [(unsigned char)2] [i_4] = (!(((/* implicit */_Bool) arr_9 [i_4] [i_5 + 2])));
                            arr_26 [i_4] [i_4] [i_6] [i_7] [(short)6] = ((/* implicit */long long int) ((unsigned short) 2553857887263971823LL));
                            var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) arr_18 [i_4 - 1] [i_4]))));
                            arr_27 [i_4] [i_4] [i_6] [(signed char)8] [i_7] [i_8 - 2] = ((/* implicit */_Bool) (((((((-2147483647 - 1)) + (2147483647))) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1)))));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 2) 
            {
                for (long long int i_10 = 0; i_10 < 25; i_10 += 2) 
                {
                    for (long long int i_11 = 2; i_11 < 23; i_11 += 1) 
                    {
                        {
                            arr_35 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) % (((/* implicit */int) (short)32740))))) ? (arr_19 [i_4 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
                            arr_36 [i_11] [(_Bool)1] [i_4] [i_5 + 1] [(_Bool)0] = ((/* implicit */unsigned int) ((arr_18 [i_9] [i_11 + 2]) > (arr_18 [i_9] [i_11 - 1])));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned short i_12 = 0; i_12 < 25; i_12 += 4) 
            {
                arr_40 [i_4] [i_4] [i_12] [i_4] &= ((((/* implicit */_Bool) 18446744073709551604ULL)) ? (3034065400031387354ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))));
                var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((var_4) << (((/* implicit */int) arr_14 [i_12])))))));
                /* LoopNest 2 */
                for (signed char i_13 = 0; i_13 < 25; i_13 += 3) 
                {
                    for (unsigned long long int i_14 = 0; i_14 < 25; i_14 += 1) 
                    {
                        {
                            arr_46 [i_4] [i_4] [i_4] [i_13] [i_14] = ((/* implicit */long long int) ((((/* implicit */int) (signed char)27)) <= (((/* implicit */int) arr_20 [i_4] [i_12]))));
                            var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) ((short) 4651739455245839397ULL))) : ((-(((/* implicit */int) (short)-32738)))))))));
                            var_20 = ((/* implicit */short) ((unsigned char) (-2147483647 - 1)));
                        }
                    } 
                } 
            }
        }
        for (unsigned short i_15 = 4; i_15 < 22; i_15 += 2) 
        {
            var_21 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))) + (((((/* implicit */_Bool) arr_39 [i_15 - 4] [i_4 - 1])) ? (arr_39 [i_15 + 1] [i_4 + 1]) : (18446744073709551615ULL)))));
            /* LoopSeq 2 */
            for (signed char i_16 = 2; i_16 < 24; i_16 += 3) 
            {
                var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_4)))))));
                arr_52 [i_4] = ((/* implicit */long long int) min((((((/* implicit */int) (short)-8192)) + (830093528))), (((((/* implicit */_Bool) arr_38 [i_16 + 1] [i_15 - 4] [i_4 + 1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)23724))))));
            }
            for (short i_17 = 0; i_17 < 25; i_17 += 1) 
            {
                arr_55 [i_17] [i_4] [i_4] [i_15] = ((/* implicit */signed char) var_7);
                var_23 ^= ((/* implicit */short) min((4294967295U), (((/* implicit */unsigned int) (_Bool)1))));
                var_24 &= ((/* implicit */int) ((unsigned short) (+(((/* implicit */int) var_2)))));
            }
            /* LoopNest 2 */
            for (signed char i_18 = 0; i_18 < 25; i_18 += 1) 
            {
                for (unsigned long long int i_19 = 4; i_19 < 23; i_19 += 4) 
                {
                    {
                        var_25 = ((/* implicit */_Bool) 2553857887263971823LL);
                        var_26 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((short) (signed char)9)))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned char i_20 = 0; i_20 < 25; i_20 += 1) 
        {
            arr_63 [i_4] [i_4] [i_20] = ((/* implicit */_Bool) var_5);
            var_27 = ((((var_4) >> (((/* implicit */int) arr_33 [i_20] [i_20] [14U] [i_4] [i_4])))) / (((/* implicit */unsigned int) ((/* implicit */int) var_7))));
        }
    }
}
