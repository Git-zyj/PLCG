/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156453
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 14; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (short i_3 = 4; i_3 < 13; i_3 += 4) 
                    {
                        /* LoopSeq 4 */
                        for (short i_4 = 0; i_4 < 15; i_4 += 3) /* same iter space */
                        {
                            var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) min((arr_7 [i_3] [i_4] [i_3 + 2] [i_3 + 2]), (((/* implicit */unsigned short) ((short) max((((/* implicit */signed char) arr_4 [i_0] [i_2] [i_0])), (var_9))))))))));
                            arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_6 [i_2] [i_2] [i_2]);
                            var_18 = ((/* implicit */unsigned int) min((var_18), (arr_2 [i_1] [i_3] [i_4])));
                            arr_16 [i_0] [i_1] [i_0] [i_3] [i_4] = ((/* implicit */_Bool) ((unsigned short) arr_1 [i_0] [i_2 - 2]));
                            arr_17 [i_2] [i_0] [i_2 + 1] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-3646)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)0))))) : (2975444773U)));
                        }
                        for (short i_5 = 0; i_5 < 15; i_5 += 3) /* same iter space */
                        {
                            var_19 = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) arr_9 [i_0] [12U] [i_3 - 4] [12LL])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_2] [2ULL] [i_2] [(short)2] [7LL]))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_2] [i_2] [i_0] [i_5])) : (((/* implicit */int) var_15)))))));
                            arr_20 [i_0] [i_0] [(_Bool)1] [i_3] [i_5] = ((/* implicit */unsigned int) arr_0 [i_0]);
                            var_20 = ((/* implicit */signed char) (-(var_8)));
                        }
                        for (short i_6 = 0; i_6 < 15; i_6 += 3) /* same iter space */
                        {
                            var_21 = arr_14 [i_3] [i_3] [i_3 + 2] [i_3];
                            var_22 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_18 [i_2] [i_2] [i_2] [i_0] [i_2 - 1])) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [i_2] [i_3] [i_6]))))) << (((((/* implicit */int) var_11)) - (157)))));
                            var_23 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_0] [i_1] [i_2]))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0]))) : (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) (+(8930420120645904840LL))))))));
                            arr_23 [i_0] [i_1] [i_1] [i_2] [i_0] [i_6] = ((/* implicit */unsigned int) (~(max((arr_8 [i_0] [i_1] [i_1]), (((/* implicit */long long int) arr_19 [i_0] [i_1] [i_3 - 2] [i_6]))))));
                        }
                        for (short i_7 = 0; i_7 < 15; i_7 += 1) 
                        {
                            arr_26 [i_0] [(_Bool)1] [i_0] [i_0] [i_0] [i_0] [i_0] = (+(arr_22 [i_7] [i_3] [i_2] [i_1] [(short)10]));
                            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_2] [i_2 + 1] [i_2] [i_2] [i_2 - 1] [i_2] [i_2 - 2])) || (((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-3646)) && (((/* implicit */_Bool) (unsigned char)142))))), (((((/* implicit */_Bool) arr_19 [i_0] [i_1] [i_2] [i_3])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))))));
                            var_25 = ((/* implicit */signed char) (short)-3646);
                            arr_27 [i_7] [i_7] [i_7] [i_7] [i_0] [i_7] [i_7] = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (short)3646)) : (-423604501))));
                            arr_28 [i_3] [i_3] [i_0] [i_3] [i_3 - 1] = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) ((long long int) var_4))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_18 [i_3] [9LL] [i_2] [i_0] [i_7]))))) : (arr_22 [i_2 - 1] [i_2 - 2] [i_2 - 1] [i_2] [i_2 - 2]))) + (9223372036854775807LL))) >> (((((/* implicit */int) var_14)) + (28792)))));
                        }
                        var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((unsigned int) (-(((/* implicit */int) var_15))))))));
                    }
                    for (short i_8 = 0; i_8 < 15; i_8 += 2) 
                    {
                        var_27 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_2])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_8] [i_2 + 1] [i_2 - 1])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_12 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [11LL]))))) : (max((((/* implicit */unsigned int) arr_6 [i_0] [i_1] [i_1])), (var_2)))))) : (max(((~(var_10))), (((/* implicit */unsigned long long int) (short)-3646))))));
                        var_28 &= ((/* implicit */_Bool) max((((/* implicit */short) var_13)), ((short)1122)));
                    }
                    /* LoopSeq 2 */
                    for (unsigned short i_9 = 0; i_9 < 15; i_9 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (signed char i_10 = 0; i_10 < 15; i_10 += 4) 
                        {
                            var_29 = ((/* implicit */short) var_3);
                            arr_37 [i_0] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_2 - 2])) ? (((/* implicit */int) arr_24 [i_2 + 1])) : (((/* implicit */int) arr_24 [i_2 - 1]))))) ? (((((/* implicit */_Bool) arr_24 [i_2 - 1])) ? (((/* implicit */int) arr_24 [i_2 - 2])) : (((/* implicit */int) arr_24 [i_2 - 2])))) : ((~(((/* implicit */int) arr_24 [i_2 - 2]))))));
                        }
                        arr_38 [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_0 [i_0]);
                    }
                    for (unsigned short i_11 = 0; i_11 < 15; i_11 += 1) /* same iter space */
                    {
                        var_30 = ((/* implicit */long long int) var_0);
                        arr_42 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) (short)-18807))));
                        var_31 &= ((((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2 + 1] [i_0])) ? (((/* implicit */int) arr_10 [i_2 + 1] [i_2 - 1])) : (((/* implicit */int) arr_10 [i_2 - 2] [i_2 - 1])))) > (((/* implicit */int) ((((/* implicit */int) arr_34 [i_2] [i_2] [i_2 + 1] [i_2 - 2])) != (((/* implicit */int) arr_10 [i_2 - 1] [i_2 + 1]))))));
                        arr_43 [i_0] = (unsigned char)162;
                        arr_44 [i_2] [i_1] [i_2 - 2] [i_1] [i_2] |= ((/* implicit */unsigned char) (+(((/* implicit */int) var_4))));
                    }
                }
            } 
        } 
    } 
    var_32 = ((/* implicit */unsigned char) var_15);
}
