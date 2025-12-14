/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124230
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
    var_15 += ((/* implicit */long long int) var_11);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_16 -= ((/* implicit */unsigned long long int) ((arr_1 [i_0]) % (((((/* implicit */_Bool) 20ULL)) ? (((/* implicit */int) (_Bool)1)) : (arr_2 [i_0])))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 21; i_4 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */unsigned long long int) arr_4 [i_1] [i_3])) : (arr_6 [i_0] [i_3])))) ? ((-(177828591))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_3)))))))));
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_4 + 2] [i_4] [i_4 + 1] [i_4 + 3])) ? (var_2) : (arr_10 [i_4 + 3] [i_4 + 1] [i_4 + 1] [i_4 - 1])));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_18 ^= ((/* implicit */long long int) ((unsigned char) arr_4 [i_6] [i_6]));
                                arr_23 [(_Bool)1] [(_Bool)1] = -1063848272;
                                arr_24 [i_0] [i_1] [i_1] [11] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_5 - 1] [i_5 - 1] [i_5 - 1])) ? (((((/* implicit */int) (unsigned char)29)) * (((/* implicit */int) arr_14 [i_2] [i_2] [i_2] [i_2])))) : (((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_1])) ? (arr_16 [i_0] [i_1] [i_2] [i_2]) : (((/* implicit */int) var_5))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_7 = 0; i_7 < 20; i_7 += 4) /* same iter space */
    {
        arr_28 [13LL] [i_7] = ((/* implicit */unsigned char) (+((+(-1063848271)))));
        var_19 = ((/* implicit */unsigned int) ((_Bool) arr_16 [i_7] [i_7] [i_7] [i_7]));
        var_20 += ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)47)) ^ (((((/* implicit */_Bool) arr_8 [i_7] [i_7])) ? (arr_9 [i_7] [i_7] [i_7] [i_7]) : (var_13)))));
    }
    /* vectorizable */
    for (long long int i_8 = 0; i_8 < 20; i_8 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) var_1))));
        /* LoopNest 2 */
        for (int i_9 = 3; i_9 < 17; i_9 += 1) 
        {
            for (unsigned int i_10 = 0; i_10 < 20; i_10 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 20; i_11 += 1) 
                    {
                        for (unsigned long long int i_12 = 0; i_12 < 20; i_12 += 3) 
                        {
                            {
                                arr_41 [i_10] [i_10] [i_10] [14LL] [14LL] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [i_9 - 3] [i_9] [i_9 - 1] [i_9] [(short)10])) ? (((/* implicit */int) var_4)) : ((-(((/* implicit */int) var_3))))));
                                arr_42 [i_8] [i_11] [6LL] [(short)16] [i_8] &= ((/* implicit */long long int) var_12);
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned char i_13 = 0; i_13 < 20; i_13 += 2) 
                    {
                        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (~(var_13))))));
                        var_23 = ((/* implicit */int) ((short) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) arr_44 [i_8] [i_9] [i_10] [i_13])))));
                    }
                    for (long long int i_14 = 0; i_14 < 20; i_14 += 1) 
                    {
                        arr_48 [i_10] [9LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (arr_27 [13LL]) : (((/* implicit */long long int) arr_16 [(unsigned short)19] [i_9] [(unsigned char)18] [i_14]))))) ? (((((/* implicit */_Bool) arr_7 [i_8] [i_8] [i_8])) ? (1063848272) : (122670558))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0)))))));
                        arr_49 [i_9] [i_9] [i_8] [i_8] [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) arr_33 [i_8] [i_9 - 2])) ? (((/* implicit */long long int) var_10)) : (arr_33 [i_8] [i_9 + 1])));
                        arr_50 [i_10] &= ((/* implicit */_Bool) (+(((/* implicit */int) var_3))));
                    }
                }
            } 
        } 
        arr_51 [(_Bool)1] [i_8] = (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)141))))));
    }
    var_24 ^= ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_14)));
}
