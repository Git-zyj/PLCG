/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108311
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_1] [1ULL] [i_0] = ((/* implicit */short) arr_7 [i_0] [i_1] [i_2]);
                    var_17 = ((/* implicit */long long int) (+((+(((/* implicit */int) (unsigned char)31))))));
                    var_18 = ((/* implicit */unsigned short) (-(var_10)));
                    arr_9 [i_1] [i_1] = (signed char)-4;
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_3 = 1; i_3 < 21; i_3 += 4) 
    {
        for (unsigned int i_4 = 1; i_4 < 20; i_4 += 3) 
        {
            for (int i_5 = 0; i_5 < 22; i_5 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 2; i_6 < 21; i_6 += 2) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 22; i_7 += 1) 
                        {
                            {
                                arr_23 [i_3] [i_4] [i_5] [i_6] [i_3] [i_4] = ((/* implicit */long long int) max((((/* implicit */int) var_1)), ((~(((/* implicit */int) ((unsigned short) -9156819806959159324LL)))))));
                                var_19 *= ((/* implicit */short) 12689660922492235924ULL);
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))), ((-((-(((/* implicit */int) arr_18 [i_3] [(signed char)16] [i_3] [i_3])))))))))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 22; i_8 += 1) 
                    {
                        for (unsigned long long int i_9 = 2; i_9 < 20; i_9 += 4) 
                        {
                            {
                                var_21 &= ((/* implicit */short) arr_13 [i_3] [4] [i_5]);
                                var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) max(((unsigned short)15950), (((/* implicit */unsigned short) (unsigned char)225)))))));
                                arr_29 [i_3] [i_3] [i_3] [i_3] [i_3 + 1] [i_3] [i_3] = ((/* implicit */long long int) var_16);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned int i_10 = 3; i_10 < 21; i_10 += 2) 
                    {
                        arr_32 [i_3] [i_4] [i_3] [i_10] = ((/* implicit */short) (((+(((/* implicit */int) arr_20 [i_10 - 3] [i_10] [i_10 - 2] [i_10 + 1] [i_10 - 3] [i_10 + 1])))) != (((/* implicit */int) arr_20 [i_3 - 1] [i_4 - 1] [i_5] [i_5] [(_Bool)1] [i_10]))));
                        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) (_Bool)1))) ? (((/* implicit */int) (unsigned short)49599)) : (max((((((/* implicit */int) var_3)) | (((/* implicit */int) (unsigned char)225)))), (((/* implicit */int) (unsigned char)31))))));
                        var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) / (((arr_26 [i_3] [i_3 + 1]) / (arr_26 [i_3] [i_3 - 1]))))))));
                    }
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned long long int) var_4);
    /* LoopNest 2 */
    for (long long int i_11 = 3; i_11 < 12; i_11 += 4) 
    {
        for (long long int i_12 = 0; i_12 < 14; i_12 += 2) 
        {
            {
                arr_39 [i_11] [i_12] = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) arr_6 [i_11 + 1] [i_11] [i_11 - 3])) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15956))) - (var_15))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_10 [i_11]))))))));
                arr_40 [i_11] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned short) ((long long int) var_16))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_13 = 1; i_13 < 11; i_13 += 2) 
    {
        for (long long int i_14 = 3; i_14 < 13; i_14 += 1) 
        {
            {
                arr_45 [i_13] [i_13] [i_13] = ((/* implicit */_Bool) max((((unsigned char) arr_17 [i_13] [i_13])), (((/* implicit */unsigned char) ((signed char) min((var_6), (var_2)))))));
                /* LoopNest 3 */
                for (signed char i_15 = 1; i_15 < 11; i_15 += 3) 
                {
                    for (long long int i_16 = 3; i_16 < 11; i_16 += 1) 
                    {
                        for (unsigned int i_17 = 1; i_17 < 13; i_17 += 3) 
                        {
                            {
                                arr_53 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13] = ((/* implicit */unsigned char) arr_18 [i_14] [i_13] [i_16] [i_17]);
                                var_26 |= ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)31))))) || (((/* implicit */_Bool) arr_6 [i_14] [i_14] [i_14 + 1]))))) <= ((-(((/* implicit */int) arr_48 [i_13] [i_14] [i_16]))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_18 = 0; i_18 < 14; i_18 += 4) 
                {
                    for (short i_19 = 0; i_19 < 14; i_19 += 3) 
                    {
                        {
                            var_27 |= ((/* implicit */int) arr_14 [i_18]);
                            arr_59 [i_13] [i_19] [i_18] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) var_1)), ((+(((/* implicit */int) (unsigned short)49560))))))) ? ((+(7437096960435316271LL))) : (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)45)))))));
                            var_28 = ((/* implicit */int) (+(((((/* implicit */_Bool) (+(7166207054849450344LL)))) ? (((var_4) | (((/* implicit */unsigned int) ((/* implicit */int) arr_57 [i_18] [i_18] [1LL] [i_18]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_46 [i_13] [2ULL])))))));
                            arr_60 [i_13] [i_13 - 1] [i_13] [i_13] = ((/* implicit */signed char) 2228946431U);
                        }
                    } 
                } 
                arr_61 [(_Bool)0] &= ((/* implicit */long long int) (~(arr_14 [(short)18])));
                /* LoopNest 2 */
                for (unsigned int i_20 = 1; i_20 < 11; i_20 += 1) 
                {
                    for (unsigned int i_21 = 0; i_21 < 14; i_21 += 1) 
                    {
                        {
                            arr_67 [i_13] [i_14] [i_20 + 1] [i_13] [i_21] = ((/* implicit */int) ((((/* implicit */_Bool) 1490175573849568124LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)45))) : (5757083151217315692ULL)));
                            var_29 *= arr_18 [i_13 + 2] [18LL] [i_20] [i_14];
                            arr_68 [i_13] [i_14] [i_14] [i_14 - 1] [(signed char)11] [i_13] = ((/* implicit */unsigned long long int) var_13);
                        }
                    } 
                } 
            }
        } 
    } 
}
