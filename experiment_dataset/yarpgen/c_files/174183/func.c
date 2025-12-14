/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174183
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_18 = ((/* implicit */long long int) (-(((/* implicit */int) ((unsigned short) ((((/* implicit */int) arr_1 [i_0])) >> (((((/* implicit */int) (short)-4460)) + (4491)))))))));
        var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((short) arr_0 [i_0])))) * (max((((/* implicit */long long int) (short)24535)), (8LL))))))));
    }
    for (short i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 16; i_2 += 4) 
        {
            for (long long int i_3 = 1; i_3 < 15; i_3 += 4) 
            {
                {
                    var_20 = ((/* implicit */long long int) (((-(((((/* implicit */int) arr_3 [(unsigned char)8])) & (((/* implicit */int) arr_11 [i_1] [i_1] [i_3 - 1])))))) * (((/* implicit */int) (!(((/* implicit */_Bool) ((var_6) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) (short)-24536))))))))));
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (signed char i_5 = 0; i_5 < 16; i_5 += 2) 
                        {
                            {
                                arr_16 [i_1] [i_1] [i_3 - 1] [i_1] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_1] [i_2])) - (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_1] [i_2] [i_4] [i_5])) && (((/* implicit */_Bool) arr_12 [i_1] [i_2] [(_Bool)1] [i_5])))))));
                                arr_17 [i_1] [i_2] [(short)13] [i_4] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_3] [i_3 + 1] [i_3 - 1])) ? (((/* implicit */int) arr_15 [i_2] [i_3 - 1] [i_3 - 1])) : (((/* implicit */int) arr_15 [i_1] [i_3 - 1] [i_3 + 1])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_1])) | (((/* implicit */int) (unsigned short)15457))))) && (((/* implicit */_Bool) arr_4 [i_1]))))))));
    }
    /* LoopNest 3 */
    for (signed char i_6 = 0; i_6 < 15; i_6 += 1) 
    {
        for (long long int i_7 = 0; i_7 < 15; i_7 += 2) 
        {
            for (long long int i_8 = 4; i_8 < 11; i_8 += 3) 
            {
                {
                    /* LoopSeq 4 */
                    for (short i_9 = 0; i_9 < 15; i_9 += 2) 
                    {
                        var_22 = ((/* implicit */signed char) (-((+((+(((/* implicit */int) arr_7 [i_9] [i_7] [i_7]))))))));
                        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) (short)24858)) : (((/* implicit */int) ((signed char) (short)4716)))))) ? (-1779205805470777979LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)5)))));
                        arr_28 [i_6] [i_6] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_5 [(signed char)1] [(signed char)1] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_24 [i_6] [i_7] [i_9]))) ^ (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)11978)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [(unsigned char)13] [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_6] [i_6] [11LL] [i_8] [9LL]))) : (var_3)))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_25 [i_6] [i_6] [2LL] [i_6] [i_6]))))) : (((((/* implicit */long long int) ((/* implicit */int) var_2))) ^ (arr_12 [i_6] [i_7] [i_7] [(short)12]))))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_20 [i_6])) : (((/* implicit */int) var_16)))))))));
                    }
                    for (unsigned char i_10 = 0; i_10 < 15; i_10 += 4) /* same iter space */
                    {
                        arr_32 [i_6] [i_7] [(short)12] [i_8 - 3] [i_6] = ((/* implicit */int) arr_6 [i_6]);
                        var_24 = ((/* implicit */short) (signed char)-122);
                    }
                    for (unsigned char i_11 = 0; i_11 < 15; i_11 += 4) /* same iter space */
                    {
                        arr_36 [i_6] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_22 [i_7] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_6] [i_6] [i_8 + 4]))) : (((((/* implicit */_Bool) var_1)) ? (arr_19 [i_6] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) var_10))))))) != (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_15 [i_6] [i_8 + 4] [i_8 + 4]))))));
                        var_25 = ((/* implicit */signed char) (+((((-(288230376151711743ULL))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_23 [i_6])))))))));
                    }
                    for (unsigned char i_12 = 0; i_12 < 15; i_12 += 4) /* same iter space */
                    {
                        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_8 - 1])) ? (((/* implicit */int) arr_20 [i_8 - 2])) : (var_9)))) ? (((long long int) arr_20 [i_8 + 3])) : (((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) (unsigned short)36473)))))));
                        var_27 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [i_12] [i_7] [i_7]))))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_15))))) : (((((/* implicit */long long int) -1664611386)) | (-6020061089430938378LL)))))) ? (((((/* implicit */int) (signed char)-30)) * ((-(((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) arr_9 [(unsigned char)2] [8LL]))));
                        arr_39 [i_12] = ((/* implicit */short) var_4);
                        arr_40 [i_6] [i_7] [i_8] = ((/* implicit */long long int) ((((((/* implicit */_Bool) -1LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_34 [(short)6] [i_8] [i_8 - 2] [i_6]))) >= (((arr_34 [i_8 + 2] [i_8 + 2] [i_8 + 1] [i_6]) << (((arr_34 [i_12] [i_12] [i_8 - 2] [i_6]) - (7781115363755150174LL)))))));
                        arr_41 [i_12] [(short)0] [i_7] [i_6] = (+(-4391141629522340138LL));
                    }
                    var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) var_7))));
                    var_29 += ((/* implicit */long long int) ((((/* implicit */_Bool) min(((~(((/* implicit */int) var_14)))), (((/* implicit */int) arr_26 [i_6] [i_7] [i_8 + 1] [i_7]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-47)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) (short)2346)) : (((/* implicit */int) (unsigned short)52193)))) : (((/* implicit */int) var_13))));
                }
            } 
        } 
    } 
}
