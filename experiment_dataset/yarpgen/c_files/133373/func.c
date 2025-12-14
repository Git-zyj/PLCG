/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133373
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
    var_13 = var_0;
    var_14 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((12718569406098905517ULL), (5728174667610646117ULL)))) ? (((((/* implicit */int) (unsigned char)240)) * (((/* implicit */int) (short)0)))) : (((((/* implicit */int) var_4)) / (((/* implicit */int) (short)-7))))))) || (((/* implicit */_Bool) var_0)));
    var_15 = ((/* implicit */short) var_0);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            for (unsigned int i_2 = 4; i_2 < 22; i_2 += 2) 
            {
                {
                    arr_7 [i_1] [i_1] [i_1] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 977938715414699646LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32213))) : (2227883524908022819LL)))) ? ((+(3455913098414506023LL))) : (max((3810853280952420552LL), (((/* implicit */long long int) arr_3 [i_0] [(unsigned char)21] [i_2]))))))), (((unsigned long long int) (unsigned short)32213))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 20; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                arr_15 [i_1] [i_1] [i_2] [i_3 - 1] [i_4] = ((/* implicit */unsigned int) min(((~(1342479280))), (var_2)));
                                var_16 ^= ((/* implicit */unsigned int) var_9);
                                var_17 = ((/* implicit */unsigned long long int) arr_10 [i_1] [i_1] [i_1] [i_2 - 3]);
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */long long int) arr_11 [i_0] [(_Bool)1]);
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        arr_18 [i_5] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_3 [i_5] [(unsigned char)3] [i_5]))));
        /* LoopNest 2 */
        for (signed char i_6 = 2; i_6 < 9; i_6 += 1) 
        {
            for (signed char i_7 = 0; i_7 < 11; i_7 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 0; i_8 < 11; i_8 += 2) 
                    {
                        for (signed char i_9 = 0; i_9 < 11; i_9 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_8 [i_6 - 2] [i_6 - 1] [i_6] [i_6 - 1] [i_6 + 1]), (arr_8 [i_6 + 1] [i_6 - 1] [i_6 + 1] [i_6 - 2] [i_6 + 2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!((!(((/* implicit */_Bool) var_1)))))))) : (3953592463U)));
                                var_20 = ((/* implicit */long long int) min((min((-2147483645), (((/* implicit */int) (unsigned short)33323)))), (((((/* implicit */int) arr_14 [i_6 - 2] [i_6 - 2] [i_6 - 2] [i_8] [i_8])) & (((/* implicit */int) (short)-8))))));
                                var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_7))));
                            }
                        } 
                    } 
                    var_22 -= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_5] [18LL] [i_6] [i_7]))) > (4678300377167646247LL)))) / (((((((/* implicit */unsigned long long int) arr_20 [i_6] [(short)2])) > (arr_26 [4] [4]))) ? (((/* implicit */int) min((arr_0 [i_5]), ((unsigned char)62)))) : (((/* implicit */int) (short)8))))));
                }
            } 
        } 
    }
    for (short i_10 = 1; i_10 < 15; i_10 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_11 = 0; i_11 < 16; i_11 += 4) 
        {
            for (long long int i_12 = 2; i_12 < 15; i_12 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_13 = 4; i_13 < 14; i_13 += 3) 
                    {
                        for (unsigned short i_14 = 0; i_14 < 16; i_14 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */int) 8672396614855129504ULL);
                                var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((506822779), (((/* implicit */int) arr_40 [i_10] [i_10] [i_14]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_11] [i_10 - 1]))) % (var_3)))) : (arr_5 [i_14] [i_14] [i_14] [i_14])))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)93))))) : (arr_35 [i_10 - 1] [(unsigned short)11] [i_10 - 1])));
                            }
                        } 
                    } 
                    arr_45 [i_10 + 1] [i_10 + 1] [i_10] [i_10 + 1] = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_5)), (arr_2 [(short)22])))) ? (((/* implicit */unsigned long long int) arr_8 [i_10] [i_10 - 1] [18ULL] [i_11] [i_12 - 2])) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1342479280)) ? (arr_39 [i_10] [7U] [i_10] [i_12] [(short)7]) : (((/* implicit */long long int) ((/* implicit */int) (short)-12)))))) ? (max((arr_5 [i_10] [i_11] [15U] [i_10]), (((/* implicit */unsigned long long int) arr_4 [i_11] [i_11])))) : (((((/* implicit */_Bool) 5728174667610646117ULL)) ? (((/* implicit */unsigned long long int) var_3)) : (arr_32 [i_10 - 1] [i_10]))))));
                }
            } 
        } 
        var_25 += ((/* implicit */unsigned short) ((var_7) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) -2147483645))))));
        /* LoopNest 2 */
        for (unsigned char i_15 = 1; i_15 < 13; i_15 += 3) 
        {
            for (unsigned int i_16 = 2; i_16 < 13; i_16 += 1) 
            {
                {
                    var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (signed char)93)) : (-1342479280)));
                    var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((((/* implicit */int) arr_3 [i_15 + 3] [i_15 + 2] [i_15 + 2])) >= (((((/* implicit */int) arr_3 [i_15 + 3] [i_15] [i_15 - 1])) + (((/* implicit */int) (short)4)))))))));
                    var_28 = max((((/* implicit */long long int) (signed char)77)), (arr_41 [i_10] [i_10] [i_10] [i_16] [i_10]));
                    /* LoopNest 2 */
                    for (unsigned short i_17 = 0; i_17 < 16; i_17 += 2) 
                    {
                        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned long long int) (!(((_Bool) (!(((/* implicit */_Bool) 2948901694807477346LL)))))));
                                arr_56 [i_10] = ((/* implicit */long long int) ((max((((((/* implicit */_Bool) arr_10 [i_18] [i_10] [i_10] [i_10])) ? (var_7) : (5519058845029141044ULL))), (((/* implicit */unsigned long long int) 7895922147551149217LL)))) >= (((/* implicit */unsigned long long int) ((((-2948901694807477347LL) < (((/* implicit */long long int) ((/* implicit */int) (signed char)109))))) ? (max((((/* implicit */long long int) (unsigned short)0)), (var_8))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_2 [i_10 - 1]) < (5728174667610646117ULL))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(13828570492078592012ULL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) -1219373940)), (arr_36 [i_10] [i_10] [i_10]))))))) : (var_2)));
    }
}
