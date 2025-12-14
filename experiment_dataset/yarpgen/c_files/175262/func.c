/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175262
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
    var_10 = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) (+(((/* implicit */int) var_8))))) != (((-5496335724458721266LL) - (((/* implicit */long long int) ((/* implicit */int) var_3))))))) ? ((+(((var_8) ? (4294967295U) : (4294967271U))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 2) /* same iter space */
    {
        var_11 &= ((/* implicit */_Bool) ((var_2) - (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)8441)))))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (unsigned int i_2 = 3; i_2 < 12; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 1; i_3 < 11; i_3 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_4 = 1; i_4 < 9; i_4 += 3) 
                        {
                            var_12 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)11)) && (((/* implicit */_Bool) var_1))));
                            var_13 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4294967282U)) ? (((/* implicit */unsigned long long int) 2U)) : (2349924076678552872ULL)));
                            arr_13 [i_0] [i_0] [i_1] [i_2] [i_3 + 2] [i_2] = ((/* implicit */long long int) (unsigned short)5344);
                        }
                        arr_14 [(short)6] [i_2] [i_2] [i_3] [i_3] = ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)28))));
                    }
                    arr_15 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((((((/* implicit */_Bool) 1451278884U)) ? (arr_10 [i_0] [i_1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-23775))))) ^ (((((/* implicit */_Bool) arr_3 [i_1] [i_0])) ? (8U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)3875)))))));
                }
            } 
        } 
        arr_16 [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)200))) * (2015163470U)));
        arr_17 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)31))));
    }
    for (unsigned int i_5 = 0; i_5 < 13; i_5 += 2) /* same iter space */
    {
        arr_20 [i_5] [i_5] = ((/* implicit */unsigned char) 3538404166U);
        /* LoopNest 2 */
        for (long long int i_6 = 0; i_6 < 13; i_6 += 2) 
        {
            for (long long int i_7 = 0; i_7 < 13; i_7 += 3) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) (~(max((((((/* implicit */_Bool) var_0)) ? (1152921504606846976ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1792))))), (((/* implicit */unsigned long long int) 0U)))))))));
                    var_15 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 4294967278U))));
                }
            } 
        } 
        arr_28 [i_5] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_4))));
    }
    /* vectorizable */
    for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 3) 
    {
        var_16 = ((/* implicit */unsigned long long int) (-(((arr_29 [i_8]) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) (+(3357859814U))))));
    }
    /* LoopSeq 1 */
    for (unsigned short i_9 = 3; i_9 < 15; i_9 += 2) 
    {
        /* LoopNest 2 */
        for (short i_10 = 0; i_10 < 16; i_10 += 1) 
        {
            for (signed char i_11 = 0; i_11 < 16; i_11 += 1) 
            {
                {
                    arr_38 [i_9 - 2] [i_10] [i_9] = ((/* implicit */long long int) (+((-(var_7)))));
                    arr_39 [i_9] = ((/* implicit */signed char) min((((/* implicit */int) arr_35 [i_9 + 1] [i_9 - 1])), (((((/* implicit */_Bool) arr_35 [i_9 - 2] [i_9 - 3])) ? (((/* implicit */int) (short)17704)) : (((/* implicit */int) (short)11929))))));
                }
            } 
        } 
        var_18 += ((/* implicit */unsigned short) -721886393);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_12 = 0; i_12 < 16; i_12 += 3) 
        {
            var_19 -= (signed char)16;
            /* LoopNest 2 */
            for (long long int i_13 = 0; i_13 < 16; i_13 += 3) 
            {
                for (unsigned long long int i_14 = 0; i_14 < 16; i_14 += 4) 
                {
                    {
                        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) -1))));
                        /* LoopSeq 2 */
                        for (long long int i_15 = 0; i_15 < 16; i_15 += 2) /* same iter space */
                        {
                            var_21 = ((/* implicit */unsigned char) (~(135107988821114880ULL)));
                            var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (-(((2592969994944089204ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)20923))))))))));
                        }
                        for (long long int i_16 = 0; i_16 < 16; i_16 += 2) /* same iter space */
                        {
                            arr_55 [15LL] [15LL] [15LL] [i_9] [(_Bool)1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_4))));
                            arr_56 [i_12] [i_9] = ((/* implicit */signed char) ((((/* implicit */int) (short)-7092)) - (((/* implicit */int) (signed char)-124))));
                            arr_57 [(short)11] [(short)11] [i_9] [i_9] [i_13] [i_14] = ((/* implicit */unsigned int) (signed char)125);
                        }
                        var_23 += ((/* implicit */unsigned int) (~(((/* implicit */int) arr_52 [i_9] [3U] [i_9 - 1] [i_9] [i_14] [i_14] [i_14]))));
                        var_24 *= ((/* implicit */signed char) (~(((/* implicit */int) var_8))));
                        var_25 = ((/* implicit */signed char) (_Bool)1);
                    }
                } 
            } 
            var_26 = ((/* implicit */unsigned long long int) (unsigned char)229);
        }
    }
}
