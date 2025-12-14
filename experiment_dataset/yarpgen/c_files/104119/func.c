/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104119
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
    for (short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) arr_1 [i_0]);
                                arr_12 [i_0] [i_1] [i_1] [i_0] [i_1] = ((/* implicit */unsigned char) var_4);
                                arr_13 [i_3] [i_1] |= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [15] [i_3] [i_4]))) < (((arr_11 [i_4] [i_4] [3U] [i_4] [4U]) << (((((/* implicit */int) (unsigned short)15077)) - (15073)))))));
                                var_18 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_4 [i_0] [i_0] [i_0] [i_0])) + (2147483647))) << (((12ULL) - (12ULL)))))) ? (arr_10 [i_0] [i_1] [i_1] [i_2] [12U] [i_4] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))) ? (min((var_11), (((/* implicit */unsigned int) min((arr_6 [i_3] [i_3] [i_3]), (((/* implicit */int) var_2))))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (short)-11991)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 16; i_5 += 2) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 2) 
                        {
                            {
                                var_19 ^= ((/* implicit */unsigned short) ((((((/* implicit */int) ((-1152655803) > (((/* implicit */int) (unsigned short)50453))))) <= (((/* implicit */int) var_15)))) ? (((((/* implicit */long long int) ((/* implicit */int) var_6))) + (arr_16 [i_2] [i_5] [i_2] [i_0] [i_5] [i_5]))) : (((/* implicit */long long int) arr_17 [i_0] [i_1] [i_2] [i_5] [i_1] [i_0]))));
                                var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) var_14))));
                                arr_20 [i_6] [i_0] [i_5] [i_5] [i_2] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) (-(((/* implicit */int) arr_5 [i_0] [i_1] [i_2] [i_0])))))) ? (((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)250))) + (5ULL))) << (((((var_16) << (((((((/* implicit */int) var_5)) + (32401))) - (38))))) - (5193138357804767952LL))))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)-115))))), (var_8))))));
                                var_21 -= ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) arr_3 [i_1])) : (arr_10 [i_0] [1ULL] [i_0] [i_0] [i_0] [i_0] [(unsigned short)7])))) ? (((((/* implicit */_Bool) 6ULL)) ? (arr_2 [14U]) : (((/* implicit */int) var_15)))) : (((/* implicit */int) arr_18 [i_1] [i_1] [i_1] [i_1] [i_5]))))));
                                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)250)) ? (1152655802) : ((+(((/* implicit */int) arr_19 [i_0] [i_0] [i_0]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 0; i_7 < 16; i_7 += 4) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 16; i_8 += 3) 
                        {
                            {
                                arr_27 [i_0] [0LL] [i_0] [(short)0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) arr_22 [i_8] [i_0] [i_2] [i_0] [i_0])) > (((/* implicit */int) arr_22 [i_0] [i_0] [i_2] [i_7] [i_8]))))) % ((~(((/* implicit */int) arr_22 [i_8] [i_0] [i_2] [i_0] [i_0]))))));
                                var_23 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((arr_16 [i_0] [i_1] [i_0] [i_0] [i_0] [i_8]) / (((/* implicit */long long int) ((/* implicit */int) (signed char)64)))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_16))) : (((/* implicit */long long int) ((((/* implicit */_Bool) -5745438317401644524LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_2] [i_8]))) : (arr_23 [i_0] [i_0] [i_2] [i_2] [i_7] [i_8])))))), (((/* implicit */long long int) (+(arr_6 [i_0] [i_1] [i_8]))))));
                                var_24 = ((/* implicit */_Bool) min((var_24), (((((/* implicit */_Bool) 1152655803)) || (((/* implicit */_Bool) 1584732909))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_9 = 0; i_9 < 16; i_9 += 4) 
                    {
                        for (unsigned int i_10 = 0; i_10 < 16; i_10 += 3) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned char) var_5);
                                var_26 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((-1152655803), (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-775)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_15 [i_0] [i_1] [i_0] [i_9] [10U]))))) : (((arr_23 [i_0] [i_2] [i_0] [i_9] [i_9] [i_10]) >> (((((/* implicit */int) var_6)) - (12927)))))))) ? (((/* implicit */int) var_7)) : (((((/* implicit */int) arr_21 [i_9])) / (((/* implicit */int) arr_29 [i_10] [(signed char)10] [i_2] [i_2] [i_1] [i_0]))))));
                                var_27 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)46261))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_11 = 0; i_11 < 21; i_11 += 1) 
    {
        for (unsigned char i_12 = 0; i_12 < 21; i_12 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        {
                            var_28 = ((/* implicit */unsigned int) arr_37 [(unsigned char)1] [i_14]);
                            arr_44 [i_14] [i_12] [i_12] = ((/* implicit */unsigned short) arr_42 [i_13] [i_13]);
                            arr_45 [i_11] [18U] [18U] [i_14] = ((/* implicit */int) arr_35 [i_13] [i_12]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    for (unsigned long long int i_16 = 0; i_16 < 21; i_16 += 1) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (~(var_14)))) == (18446744073709551609ULL)));
                            var_30 &= ((/* implicit */unsigned char) var_8);
                            var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_35 [i_11] [i_11]) ? (((/* implicit */long long int) arr_37 [i_16] [5])) : (var_14)))) ? (((/* implicit */int) ((short) ((420297980) >> (((((/* implicit */int) (unsigned short)14023)) - (14012))))))) : (((/* implicit */int) (unsigned short)57093))));
                            var_32 = ((unsigned short) arr_49 [i_16] [(_Bool)1]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_17 = 0; i_17 < 21; i_17 += 1) 
                {
                    for (long long int i_18 = 0; i_18 < 21; i_18 += 1) 
                    {
                        {
                            var_33 *= ((/* implicit */unsigned int) ((18446744073709551609ULL) % (18446744073709551610ULL)));
                            var_34 = ((/* implicit */unsigned long long int) ((arr_48 [i_11] [i_17] [(unsigned char)16] [i_18]) >> (((min((-1261438715), (((/* implicit */int) (_Bool)0)))) + (1261438720)))));
                            arr_57 [i_17] [(unsigned short)13] [i_17] = ((/* implicit */signed char) (+(((/* implicit */int) var_3))));
                        }
                    } 
                } 
            }
        } 
    } 
}
