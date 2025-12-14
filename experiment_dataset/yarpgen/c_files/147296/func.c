/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147296
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
    var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)31598)) ? (((((/* implicit */_Bool) (signed char)74)) ? (((/* implicit */int) (unsigned char)239)) : (((/* implicit */int) (short)18570)))) : (((/* implicit */int) var_9))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 25; i_2 += 3) /* same iter space */
                {
                    var_12 ^= ((/* implicit */short) (_Bool)1);
                    arr_7 [i_1] = ((/* implicit */unsigned short) arr_2 [i_0] [i_1] [i_2]);
                    arr_8 [i_0] [22LL] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_2) << (((/* implicit */int) arr_5 [i_0] [(_Bool)1] [(short)14] [i_0]))))) ? (arr_2 [(unsigned short)17] [i_1] [i_2]) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [6U]))) / (arr_2 [i_0] [i_1] [i_2])))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned short) arr_2 [i_0] [24ULL] [(short)24]);
                                arr_14 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */long long int) var_7);
                                arr_15 [(unsigned short)18] [i_1] [12ULL] [(short)16] [i_4] = ((/* implicit */short) ((((arr_3 [i_1]) & (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_1] [i_4]))))) & (((/* implicit */long long int) 4294967295U))));
                                arr_16 [i_4] [i_4] |= ((var_1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_4));
                                var_14 = ((/* implicit */int) ((((/* implicit */_Bool) 4U)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)244)))));
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_1] [i_1] = ((/* implicit */long long int) arr_10 [i_2] [i_1] [i_1] [i_1] [i_1] [i_0]);
                }
                for (int i_5 = 0; i_5 < 25; i_5 += 3) /* same iter space */
                {
                    arr_22 [i_0] [i_1] [i_5] [i_1] = ((/* implicit */_Bool) 4701756805590588856LL);
                    arr_23 [i_0] [(_Bool)1] [i_0] [i_1] = ((/* implicit */unsigned short) arr_18 [i_0] [i_1] [i_5]);
                    arr_24 [i_1] = ((/* implicit */signed char) arr_19 [i_0] [i_1]);
                }
                for (unsigned short i_6 = 0; i_6 < 25; i_6 += 3) 
                {
                    var_15 = ((/* implicit */long long int) (short)-16752);
                    /* LoopNest 2 */
                    for (short i_7 = 0; i_7 < 25; i_7 += 2) 
                    {
                        for (int i_8 = 0; i_8 < 25; i_8 += 4) 
                        {
                            {
                                arr_32 [i_1] [i_0] [i_6] = ((/* implicit */unsigned short) (((((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)29416)))) | (((/* implicit */int) (unsigned char)17))));
                                arr_33 [i_0] [1U] [i_1] = ((/* implicit */unsigned int) arr_28 [(unsigned char)3] [i_1] [i_6] [i_7] [i_1] [i_6]);
                                var_16 = ((/* implicit */signed char) ((2909377625U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_1] [i_1] [(unsigned short)16])))));
                                arr_34 [i_1] = ((/* implicit */short) 10939745194357063421ULL);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (short i_9 = 0; i_9 < 25; i_9 += 1) 
                    {
                        arr_37 [i_1] = ((/* implicit */unsigned char) arr_31 [i_0] [(short)21] [i_1] [i_6] [i_9]);
                        var_17 -= ((/* implicit */unsigned long long int) ((arr_5 [(signed char)10] [i_1] [(short)18] [i_9]) ? (((arr_5 [i_9] [14ULL] [14ULL] [i_0]) ? (((/* implicit */int) arr_5 [i_9] [(_Bool)1] [(_Bool)1] [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_0] [10U] [i_0])))) : (((/* implicit */int) arr_5 [i_0] [i_0] [0U] [i_0]))));
                    }
                }
                var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [(short)23])) ? (((/* implicit */int) arr_35 [(unsigned short)11] [i_1] [i_1] [12U])) : (((/* implicit */int) arr_20 [i_1] [i_0] [i_1]))))) ? (((/* implicit */int) arr_36 [i_1] [i_1] [i_0] [i_0])) : (((/* implicit */int) arr_36 [i_0] [i_1] [i_0] [(unsigned short)4])));
            }
        } 
    } 
}
