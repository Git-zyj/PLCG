/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129910
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
    var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) (~(9139192419114316609LL))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            var_21 -= ((/* implicit */_Bool) var_10);
            arr_5 [i_0] |= arr_1 [2ULL] [i_1];
        }
        var_22 *= ((/* implicit */unsigned int) ((short) arr_3 [i_0] [i_0] [i_0]));
    }
    for (signed char i_2 = 0; i_2 < 19; i_2 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 19; i_3 += 4) 
        {
            for (unsigned char i_4 = 0; i_4 < 19; i_4 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned char i_5 = 0; i_5 < 19; i_5 += 4) 
                    {
                        arr_17 [i_2] [i_2] [i_3] [i_2] [i_2] = ((/* implicit */unsigned int) arr_10 [i_2]);
                        var_23 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_10 [i_2]))));
                    }
                    /* vectorizable */
                    for (unsigned char i_6 = 0; i_6 < 19; i_6 += 3) 
                    {
                        var_24 = ((/* implicit */unsigned int) (+(arr_1 [i_3] [i_6])));
                        var_25 = ((/* implicit */int) arr_16 [i_2] [i_2] [i_2] [i_6]);
                        var_26 = ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_2] [i_4] [i_2])) ? (arr_13 [i_2] [i_2] [i_2]) : (((/* implicit */int) arr_0 [6U]))));
                        arr_21 [i_2] [i_2] [i_4] [i_3] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_14))) - (arr_19 [i_2] [i_3] [i_4] [i_6])));
                    }
                    for (int i_7 = 0; i_7 < 19; i_7 += 2) 
                    {
                        var_27 = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_2 [i_4]), (arr_2 [i_2])))) ? (((/* implicit */unsigned long long int) (~(arr_1 [i_3] [i_3])))) : (((arr_16 [i_2] [i_2] [i_2] [i_2]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
                        /* LoopSeq 1 */
                        for (int i_8 = 0; i_8 < 19; i_8 += 2) 
                        {
                            arr_27 [0U] [i_3] [i_4] [i_2] [0U] = ((/* implicit */unsigned int) var_0);
                            arr_28 [i_2] [i_3] [i_3] [i_3] [i_3] [(short)16] [i_3] = ((/* implicit */unsigned short) ((min((-5069933201888428426LL), (((/* implicit */long long int) (signed char)-2)))) ^ (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_26 [i_2] [8] [i_7] [i_8]))))));
                        }
                        var_28 = ((/* implicit */int) min((((/* implicit */long long int) (unsigned short)44544)), (2161263401290672038LL)));
                        var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) ((int) var_14)))));
                        arr_29 [i_2] = ((/* implicit */short) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned short) -2161263401290672021LL)))))) ^ (min((((((/* implicit */_Bool) (unsigned short)24654)) ? (arr_16 [i_2] [i_3] [i_2] [14ULL]) : (((/* implicit */unsigned long long int) 2161263401290672031LL)))), (((/* implicit */unsigned long long int) arr_18 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]))))));
                    }
                    for (long long int i_9 = 0; i_9 < 19; i_9 += 4) 
                    {
                        arr_33 [i_2] [i_3] [i_4] [i_2] [i_4] = ((/* implicit */int) 2161263401290672020LL);
                        var_30 = ((/* implicit */unsigned int) arr_8 [i_2]);
                        var_31 -= ((/* implicit */unsigned short) arr_20 [i_9] [i_3] [i_2]);
                        var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) var_4))));
                        var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_16 [7LL] [i_2] [i_2] [i_2]))) ? ((+(((/* implicit */int) arr_24 [i_2] [i_3] [(short)6] [i_2])))) : (((/* implicit */int) ((unsigned char) arr_32 [i_2] [i_2] [i_4] [(unsigned char)2])))));
                    }
                    arr_34 [i_2] [i_3] [i_2] = ((/* implicit */signed char) (~(((-2161263401290672039LL) ^ (((/* implicit */long long int) ((/* implicit */int) (short)-22859)))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_10 = 1; i_10 < 16; i_10 += 2) 
                    {
                        var_34 = ((/* implicit */unsigned long long int) arr_13 [(short)9] [i_2] [i_4]);
                        /* LoopSeq 1 */
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            var_35 = ((/* implicit */int) -6555306628245154254LL);
                            var_36 = ((/* implicit */_Bool) (unsigned char)157);
                        }
                    }
                    var_37 = ((/* implicit */short) ((min((((((/* implicit */long long int) arr_15 [i_2] [i_2] [i_3] [i_4])) % (var_4))), ((-(2161263401290672037LL))))) % (((/* implicit */long long int) ((/* implicit */int) min((arr_22 [i_2]), (arr_22 [i_2])))))));
                }
            } 
        } 
        arr_39 [i_2] = ((/* implicit */signed char) ((((/* implicit */long long int) min((((((/* implicit */_Bool) arr_1 [i_2] [i_2])) ? (((/* implicit */int) arr_6 [i_2])) : (arr_13 [i_2] [i_2] [i_2]))), (arr_23 [(short)4] [i_2] [i_2] [i_2])))) >= (var_4)));
        var_38 = ((/* implicit */short) arr_7 [i_2] [i_2]);
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 10; i_12 += 2) 
    {
        var_39 = ((/* implicit */int) ((signed char) arr_2 [i_12]));
        arr_43 [i_12] [i_12] = ((/* implicit */unsigned int) arr_14 [i_12] [i_12] [i_12] [i_12]);
    }
}
