/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154077
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
    var_14 = ((/* implicit */unsigned short) 2847088253U);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (unsigned char i_2 = 1; i_2 < 21; i_2 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 2; i_3 < 22; i_3 += 4) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            arr_15 [i_0] [i_0] [i_0] [i_0] [i_4] [1U] [i_2 + 1] = ((/* implicit */unsigned int) var_13);
                            arr_16 [i_2 + 3] [i_1] [i_2 + 1] [i_0] [i_4] [17] [(unsigned char)17] = ((/* implicit */unsigned int) var_5);
                            arr_17 [i_3] = ((/* implicit */long long int) (+(((/* implicit */int) (signed char)0))));
                        }
                        arr_18 [12U] [i_0] [i_1] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) var_4)) : (var_8)))) ? (1979593563) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)14)) : (((/* implicit */int) (signed char)-12)))))), (((/* implicit */int) (!(((/* implicit */_Bool) -1582709535280411630LL)))))));
                        arr_19 [i_0] [i_1] [i_1] = ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)62)), (var_3)))) ? (3192783143U) : (((/* implicit */unsigned int) max((-1979593554), (((/* implicit */int) (signed char)68))))));
                    }
                    for (long long int i_5 = 4; i_5 < 21; i_5 += 4) /* same iter space */
                    {
                        arr_23 [i_0] [13] [i_2 + 2] [i_0] = ((/* implicit */long long int) var_10);
                        arr_24 [i_2 + 2] [i_0] [i_2 + 1] [i_1] = ((/* implicit */signed char) (unsigned char)102);
                    }
                    for (long long int i_6 = 4; i_6 < 21; i_6 += 4) /* same iter space */
                    {
                        arr_27 [i_6] [i_1] [i_2 + 3] [i_0] = ((/* implicit */unsigned char) (signed char)-24);
                        arr_28 [i_0] [i_0] [i_1] [i_0] [i_2 - 1] [i_6 - 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (4294967283U)))) ? (((((/* implicit */_Bool) 8178011627714945970LL)) ? (((/* implicit */long long int) 3608141402U)) : (var_0))) : (((/* implicit */long long int) (-(1034831878U))))));
                    }
                    arr_29 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) var_12);
                    arr_30 [i_0] [i_0] [(unsigned short)14] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_0)) ? (-2147483618) : (((/* implicit */int) var_7)))) : (((/* implicit */int) (unsigned short)8184)))), (min((((/* implicit */int) var_13)), (-1866935907)))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_5))));
    var_16 = ((/* implicit */int) var_5);
}
