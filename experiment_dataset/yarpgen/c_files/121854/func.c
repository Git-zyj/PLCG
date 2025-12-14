/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121854
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
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_0 [i_0]))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) (signed char)0))));
                    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_2 - 1] [i_2] [i_2 - 1] [i_2 - 1])) ? (arr_5 [i_2] [i_2 - 1] [(unsigned char)0] [i_2 - 1]) : (arr_5 [i_1] [i_1] [i_1] [i_2 - 1])));
                }
            } 
        } 
    }
    var_15 = ((/* implicit */_Bool) min((var_10), (((/* implicit */long long int) (-(((/* implicit */int) max((((/* implicit */signed char) var_12)), ((signed char)-16)))))))));
    /* LoopSeq 2 */
    for (short i_3 = 2; i_3 < 9; i_3 += 4) 
    {
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_7 [i_3 - 1])), (arr_5 [i_3] [i_3] [i_3 - 1] [i_3 + 1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-121)) & (((/* implicit */int) (short)-12631))))) : (((unsigned long long int) var_7))));
        arr_9 [i_3] [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_11))));
    }
    for (unsigned short i_4 = 2; i_4 < 17; i_4 += 4) 
    {
        arr_13 [(short)4] = ((/* implicit */unsigned short) ((long long int) ((((((/* implicit */int) var_7)) / (((/* implicit */int) var_3)))) * (-815276996))));
        var_17 += ((/* implicit */unsigned short) ((max((min((815276971), (((/* implicit */int) arr_11 [i_4])))), (((((/* implicit */int) arr_10 [i_4])) | (((/* implicit */int) arr_11 [i_4])))))) * (((((/* implicit */int) var_7)) + (((((/* implicit */_Bool) (unsigned char)171)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_10 [i_4 - 2]))))))));
        /* LoopSeq 3 */
        for (int i_5 = 1; i_5 < 19; i_5 += 4) 
        {
            arr_16 [i_4] [i_4 - 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_14 [i_5] [i_5 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 3293717222U)) == (arr_14 [i_5 - 1] [i_5 + 1]))))) : (min((arr_14 [i_5] [i_5 + 1]), (arr_14 [i_5 + 1] [i_5 + 1])))));
            var_18 = ((/* implicit */short) min((var_8), (((/* implicit */unsigned int) ((arr_14 [i_5 + 2] [i_5]) != (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_4)), (var_10)))))))));
            var_19 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (+(-2630090400168434131LL)))), (((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_4)), (var_7)))) ? (((/* implicit */unsigned long long int) -815276996)) : (arr_14 [i_5 + 2] [i_5])))));
        }
        for (long long int i_6 = 0; i_6 < 21; i_6 += 1) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned long long int i_7 = 1; i_7 < 17; i_7 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_8 = 3; i_8 < 19; i_8 += 4) 
                {
                    /* LoopSeq 1 */
                    for (int i_9 = 4; i_9 < 19; i_9 += 2) 
                    {
                        var_20 = ((long long int) (unsigned short)16686);
                        arr_30 [i_7] = ((/* implicit */unsigned char) ((_Bool) (_Bool)1));
                        arr_31 [i_7] [i_6] [i_4 - 2] [i_4 - 2] [i_9] [i_4 + 1] = ((/* implicit */_Bool) arr_28 [i_7] [i_7]);
                    }
                    /* LoopSeq 1 */
                    for (unsigned char i_10 = 0; i_10 < 21; i_10 += 2) 
                    {
                        arr_34 [i_7] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_14 [i_4 + 4] [i_4 + 2])) ? (((/* implicit */unsigned long long int) -7351347461397261086LL)) : (arr_14 [i_4 - 1] [i_4 + 4])));
                        arr_35 [i_10] [i_7] [i_8] [i_7] [i_6] [i_7] [i_4] = ((/* implicit */int) (signed char)127);
                    }
                    arr_36 [i_4] [i_4] [i_4] [i_4] [i_4 + 3] [i_7] = ((/* implicit */_Bool) arr_25 [i_4] [i_6] [i_4] [i_8] [i_4 - 1]);
                    arr_37 [i_4 + 1] [i_6] [i_7] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) 20U)) ? (((/* implicit */unsigned long long int) var_2)) : (((((/* implicit */_Bool) arr_12 [i_4] [i_4 + 3])) ? (arr_14 [i_4] [i_4]) : (((/* implicit */unsigned long long int) 1001250083U))))));
                }
                var_21 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((-2630090400168434131LL) + (9223372036854775807LL))) << (((((-1539284472) + (1539284477))) - (5)))))) != (((var_12) ? (6511321750674785048ULL) : (((/* implicit */unsigned long long int) 1777322905U))))));
            }
            for (unsigned short i_11 = 0; i_11 < 21; i_11 += 4) 
            {
                var_22 = ((/* implicit */unsigned int) ((_Bool) arr_19 [i_11]));
                arr_40 [i_4 + 2] [i_6] [i_11] = ((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)52601)), (-815277003)));
            }
            for (unsigned char i_12 = 0; i_12 < 21; i_12 += 2) 
            {
                arr_44 [i_6] = ((/* implicit */short) (+(max((((/* implicit */unsigned long long int) arr_32 [i_4 + 4] [i_6] [i_6] [i_6] [i_4])), (arr_38 [i_4 - 1])))));
                var_23 = ((/* implicit */unsigned int) min((var_23), (((unsigned int) max((((((/* implicit */int) (short)-18831)) * (((/* implicit */int) (short)15367)))), (((/* implicit */int) min(((_Bool)1), (var_6)))))))));
            }
            var_24 = var_9;
        }
        for (long long int i_13 = 4; i_13 < 17; i_13 += 4) 
        {
            var_25 = ((/* implicit */short) min((3293717223U), (((/* implicit */unsigned int) (short)-18860))));
            var_26 |= ((/* implicit */unsigned char) min((((((_Bool) arr_41 [i_4 + 2] [i_4] [i_4] [i_4 + 2])) ? (min((((/* implicit */unsigned int) var_6)), (var_8))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_4])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)-72))))))), (((/* implicit */unsigned int) (-(((/* implicit */int) max((arr_23 [i_13]), (var_12)))))))));
            arr_49 [i_4] [i_4] = ((/* implicit */short) ((_Bool) min((max(((unsigned short)65535), (((/* implicit */unsigned short) (_Bool)1)))), (((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) var_6))))))));
        }
        arr_50 [i_4 - 2] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) ((short) (signed char)-111))) > ((~(((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) var_7)) * (((/* implicit */int) var_12))))));
        var_27 = ((/* implicit */long long int) 1228100976U);
    }
}
