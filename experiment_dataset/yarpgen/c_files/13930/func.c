/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13930
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
    var_14 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_9))));
    var_15 = ((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned char)217)), (var_13)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned char) min((max((11055058033249156540ULL), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7)))))));
                var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(458707556U)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (-1421252469) : (((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((458707564U) < (arr_3 [i_0] [i_0]))))) : (7391686040460395097ULL))) : (((/* implicit */unsigned long long int) (+(2086064480))))));
                var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) 3836259732U))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_7 [i_2] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2] [i_2])) ? (((/* implicit */int) arr_5 [i_2] [i_2])) : (var_6)))) ? (((/* implicit */unsigned long long int) arr_3 [i_2] [i_2])) : (var_11));
        /* LoopNest 2 */
        for (unsigned char i_3 = 0; i_3 < 22; i_3 += 3) 
        {
            for (signed char i_4 = 0; i_4 < 22; i_4 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_5 = 2; i_5 < 20; i_5 += 3) 
                    {
                        var_19 = ((/* implicit */signed char) max((var_19), (var_3)));
                        arr_14 [i_2] [3U] [i_2] [i_2] = arr_5 [i_2] [i_2];
                        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) 458707564U))));
                    }
                    /* LoopSeq 2 */
                    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) /* same iter space */
                    {
                        arr_18 [i_2] [i_2] [i_2] [i_3] [i_2] [i_6 + 1] = ((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_2] [i_2] [i_2])) + (((/* implicit */int) arr_15 [7] [i_3] [i_4] [i_3] [i_2]))))) == (arr_17 [i_6 + 1] [i_6 + 1] [i_6] [i_6 + 1])));
                        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (~(((/* implicit */int) var_1)))))));
                    }
                    for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) /* same iter space */
                    {
                        arr_21 [i_2] [i_4] [i_2] [i_3] [i_4] [i_3] &= arr_13 [i_4] [(_Bool)1] [i_3] [i_2] [i_4];
                        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) var_4))));
                        arr_22 [i_2] = ((/* implicit */unsigned int) ((unsigned long long int) 7391686040460395076ULL));
                        var_23 ^= ((/* implicit */signed char) var_0);
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_8 = 3; i_8 < 18; i_8 += 2) 
        {
            for (unsigned short i_9 = 1; i_9 < 21; i_9 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_10 = 0; i_10 < 22; i_10 += 4) 
                    {
                        for (unsigned char i_11 = 0; i_11 < 22; i_11 += 2) 
                        {
                            {
                                arr_32 [i_2] [i_8] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_4 [i_2] [i_9 + 1] [i_2]))));
                                var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) (+(((3836259740U) << (((14103511583050579152ULL) - (14103511583050579132ULL))))))))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */unsigned char) var_12);
                    /* LoopNest 2 */
                    for (unsigned char i_12 = 0; i_12 < 22; i_12 += 3) 
                    {
                        for (signed char i_13 = 0; i_13 < 22; i_13 += 4) 
                        {
                            {
                                var_26 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_8 + 3] [i_8 + 3] [i_9 + 1] [i_12])) ? (2269814212194729984ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)48)))));
                                var_27 &= (unsigned char)24;
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_28 &= ((/* implicit */int) (_Bool)1);
}
