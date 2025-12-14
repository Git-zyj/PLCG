/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134153
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
    for (int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_10 &= ((/* implicit */unsigned char) (+((-((-(((/* implicit */int) var_4))))))));
                arr_7 [(unsigned char)9] [i_1] [(short)13] &= ((/* implicit */long long int) min((65535U), (((/* implicit */unsigned int) ((((/* implicit */long long int) min((4294901761U), (4294901761U)))) == (arr_0 [i_0]))))));
                /* LoopSeq 3 */
                for (signed char i_2 = 2; i_2 < 13; i_2 += 4) 
                {
                    var_11 = ((/* implicit */_Bool) (-(((/* implicit */int) var_4))));
                    arr_10 [i_0] [i_1] [i_1] [2U] = ((/* implicit */_Bool) 4294901761U);
                    arr_11 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) var_3);
                }
                for (int i_3 = 0; i_3 < 15; i_3 += 4) 
                {
                    var_12 = ((/* implicit */_Bool) (((~(((/* implicit */int) arr_6 [i_0] [1U])))) ^ (((((/* implicit */int) var_1)) >> (((-724192401) * (((/* implicit */int) arr_6 [i_3] [i_3]))))))));
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (int i_5 = 4; i_5 < 14; i_5 += 2) 
                        {
                            {
                                arr_18 [i_4] [8U] [i_3] [i_4] = ((/* implicit */short) (((~(arr_5 [i_5 - 1] [i_5 + 1]))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)511)))));
                                var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (4294901761U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)29187)))))) ? (10778378027383815557ULL) : (((/* implicit */unsigned long long int) (+(410125614)))))))));
                                var_14 *= ((/* implicit */unsigned int) max((((/* implicit */int) (unsigned char)108)), ((~(((/* implicit */int) (signed char)-1))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned short i_6 = 2; i_6 < 14; i_6 += 2) 
                {
                    var_15 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_13 [i_6 - 1] [5LL] [(unsigned char)11]))));
                    /* LoopSeq 1 */
                    for (signed char i_7 = 1; i_7 < 13; i_7 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_8 = 0; i_8 < 15; i_8 += 4) 
                        {
                            arr_28 [i_0] [i_1] [13ULL] [14] [2ULL] = ((/* implicit */unsigned short) var_4);
                            var_16 = ((/* implicit */unsigned short) ((int) 4294901761U));
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 15; i_9 += 1) 
                        {
                            var_17 = ((/* implicit */int) arr_30 [i_6] [i_9] [7LL] [i_6 - 2]);
                            var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-112)) ? (2529544267U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))))) ? (((((/* implicit */_Bool) var_3)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)30094))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1)))));
                            var_19 = ((/* implicit */unsigned char) ((((/* implicit */long long int) (-(-1298252961)))) + (((((/* implicit */long long int) arr_29 [i_9] [i_6])) ^ (2097151LL)))));
                            var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((/* implicit */int) (short)127)) >= (1330801239))))));
                        }
                        var_21 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (var_2) : (var_0))));
                    }
                    arr_32 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) var_8);
                }
                arr_33 [i_1] = ((unsigned short) (+(((((((/* implicit */int) arr_17 [i_0] [i_0] [i_1] [i_1] [i_1] [i_1])) + (2147483647))) >> (((2108203005333490853LL) - (2108203005333490832LL)))))));
            }
        } 
    } 
    var_22 = ((/* implicit */short) ((max((((((/* implicit */_Bool) var_9)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)30094))))), (max((((/* implicit */unsigned long long int) var_4)), (var_0))))) - (((/* implicit */unsigned long long int) (+((+(((/* implicit */int) var_9)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_10 = 2; i_10 < 16; i_10 += 1) 
    {
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            {
                var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) var_3))));
                /* LoopNest 2 */
                for (unsigned long long int i_12 = 0; i_12 < 18; i_12 += 1) 
                {
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        {
                            var_24 ^= ((/* implicit */unsigned char) arr_37 [i_10] [i_11] [(_Bool)1]);
                            var_25 = ((/* implicit */long long int) ((unsigned short) (+(((((/* implicit */int) (signed char)-1)) * (((/* implicit */int) (_Bool)0)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_26 = ((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) ((65534U) ^ (248911410U))))));
    var_27 -= ((/* implicit */unsigned int) var_8);
}
