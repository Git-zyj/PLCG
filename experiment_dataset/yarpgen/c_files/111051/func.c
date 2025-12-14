/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111051
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_9 [i_1] [i_1] [i_2] = ((((/* implicit */_Bool) max((((/* implicit */int) arr_7 [i_0] [i_1] [i_2])), (((((/* implicit */int) (short)7151)) * (((/* implicit */int) var_1))))))) ? (((/* implicit */unsigned int) ((int) (~(((/* implicit */int) var_0)))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)7151))) : (((((/* implicit */_Bool) var_7)) ? (arr_2 [6] [2ULL]) : (((/* implicit */unsigned int) var_6)))))));
                    arr_10 [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (+((-9223372036854775807LL - 1LL))))) <= (((((/* implicit */_Bool) max(((short)7132), (((/* implicit */short) arr_4 [i_0]))))) ? ((+(11193007224649268907ULL))) : (((/* implicit */unsigned long long int) ((long long int) arr_8 [i_0])))))));
                    var_10 = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (short)7151)) ? (2600813418U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)36675))))), (((/* implicit */unsigned int) arr_4 [i_2]))))) ? (((/* implicit */long long int) (+(var_8)))) : (var_5)));
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */unsigned short) ((var_5) >= (-6918203365405811975LL)));
    /* LoopSeq 2 */
    for (long long int i_3 = 0; i_3 < 22; i_3 += 4) 
    {
        arr_13 [i_3] = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) -2147483638)) ? (((/* implicit */int) arr_12 [i_3] [i_3])) : (((/* implicit */int) (short)-12229)))));
        arr_14 [i_3] [i_3] = -2147483643;
        arr_15 [i_3] [i_3] = ((/* implicit */int) ((((unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_3])) ? (arr_11 [20U]) : (2600813418U)))) > (((/* implicit */unsigned long long int) var_5))));
    }
    for (long long int i_4 = 0; i_4 < 19; i_4 += 2) 
    {
        arr_18 [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) ((arr_17 [i_4]) != (var_6)))))));
        var_12 = ((((/* implicit */_Bool) max((((/* implicit */signed char) ((((/* implicit */int) var_1)) >= (((/* implicit */int) var_3))))), (arr_12 [i_4] [i_4])))) ? (((/* implicit */int) (short)-7137)) : (((/* implicit */int) var_0)));
        var_13 ^= ((/* implicit */long long int) ((((((/* implicit */int) arr_12 [i_4] [i_4])) - (((/* implicit */int) arr_12 [i_4] [i_4])))) + (((((/* implicit */_Bool) (+(arr_11 [(short)19])))) ? ((+(((/* implicit */int) arr_12 [(unsigned char)8] [i_4])))) : (((/* implicit */int) arr_12 [(unsigned short)12] [i_4]))))));
        var_14 ^= ((max((((/* implicit */long long int) arr_17 [i_4])), (var_5))) << ((((-((-(((/* implicit */int) (unsigned short)36676)))))) - (36676))));
        arr_19 [i_4] [18U] = ((/* implicit */unsigned short) -2147483622);
    }
    /* LoopNest 2 */
    for (unsigned short i_5 = 2; i_5 < 15; i_5 += 2) 
    {
        for (unsigned long long int i_6 = 3; i_6 < 14; i_6 += 4) 
        {
            {
                arr_26 [i_5] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)36694)) ? (((((/* implicit */int) var_2)) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_6]))))))) : (((/* implicit */int) ((unsigned short) var_4)))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_7 = 0; i_7 < 16; i_7 += 4) 
                {
                    arr_30 [i_5] [8U] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_22 [i_5 + 1])) ? (arr_29 [i_6 - 3] [10U]) : (arr_29 [i_6 - 3] [i_5])));
                    var_15 = ((/* implicit */signed char) (+(-9223372036854775789LL)));
                    /* LoopSeq 1 */
                    for (unsigned int i_8 = 1; i_8 < 15; i_8 += 4) 
                    {
                        var_16 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_32 [i_6] [6U] [i_7] [i_7] [i_8 + 1])) ? (((/* implicit */int) arr_32 [i_7] [i_8] [i_8] [i_7] [i_8 + 1])) : (-1091107444)));
                        arr_33 [i_5] [i_6] [i_6] [i_5 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (((/* implicit */long long int) var_6)) : (arr_23 [i_6 + 1] [i_6])));
                        arr_34 [15U] [i_6] = ((/* implicit */long long int) ((unsigned long long int) (signed char)107));
                    }
                    arr_35 [i_7] [i_6] [i_6] [3U] = ((/* implicit */int) arr_29 [i_5] [i_7]);
                    arr_36 [i_5] [12] [i_6] = ((/* implicit */unsigned short) var_9);
                }
                for (long long int i_9 = 0; i_9 < 16; i_9 += 2) 
                {
                    var_17 = min(((unsigned short)19701), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)12114)) == (var_4)))));
                    var_18 ^= ((/* implicit */long long int) -2147483638);
                }
            }
        } 
    } 
}
