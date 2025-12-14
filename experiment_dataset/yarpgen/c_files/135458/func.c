/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135458
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
    var_20 ^= ((/* implicit */int) var_8);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        var_21 ^= ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)61888))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            arr_4 [i_0 - 1] [i_0] [9LL] = ((/* implicit */short) (+(((/* implicit */int) (unsigned char)151))));
            var_22 ^= ((/* implicit */signed char) ((((((/* implicit */int) var_12)) ^ (((/* implicit */int) (unsigned short)3660)))) / (((/* implicit */int) (unsigned short)34615))));
            /* LoopSeq 2 */
            for (unsigned short i_2 = 3; i_2 < 23; i_2 += 1) 
            {
                /* LoopSeq 2 */
                for (long long int i_3 = 0; i_3 < 24; i_3 += 4) 
                {
                    arr_9 [i_0] [i_0] [i_2 - 1] [(short)0] = ((/* implicit */long long int) (_Bool)0);
                    var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (+(((/* implicit */int) (unsigned short)3676)))))));
                }
                for (short i_4 = 0; i_4 < 24; i_4 += 2) 
                {
                    var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) (-(((/* implicit */int) var_17)))))));
                    arr_12 [i_0] [i_0] [i_2] [i_4] [i_4] = var_16;
                }
                arr_13 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (2486109665U))) ^ (((/* implicit */unsigned int) (-(((/* implicit */int) var_6)))))));
                var_25 = ((/* implicit */unsigned char) (-((((_Bool)1) ? (var_4) : (((/* implicit */int) (unsigned short)61888))))));
                arr_14 [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) var_10))));
            }
            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
            {
                arr_18 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) var_10);
                /* LoopSeq 1 */
                for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 4) 
                {
                    var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) (short)-8608))));
                    arr_21 [i_0] [i_1] [(short)13] [i_6] = ((/* implicit */signed char) var_1);
                    arr_22 [(_Bool)1] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)13611)) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)32689)) : (((/* implicit */int) var_0))))));
                }
                arr_23 [(short)14] [i_5] [i_5] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) * ((~(var_8)))));
                arr_24 [i_0] [i_1] [i_1 - 1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_16))))) | (var_8)));
                arr_25 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_13))))) ? ((-(((/* implicit */int) var_12)))) : (((((/* implicit */_Bool) (short)-8605)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_16))))));
            }
            var_27 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)-16384)) : (((/* implicit */int) (unsigned short)32680))))));
            arr_26 [i_0 - 1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (((-628574982) | (((/* implicit */int) var_6)))) : (var_4)));
        }
        for (signed char i_7 = 1; i_7 < 22; i_7 += 3) 
        {
            /* LoopSeq 1 */
            for (int i_8 = 1; i_8 < 23; i_8 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 2) 
                {
                    for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 2) 
                    {
                        {
                            arr_37 [i_0] [i_9] [i_8] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_15))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_13))));
                            arr_38 [i_10] [i_9] [i_0] [i_7 - 1] [i_0] = (-(((/* implicit */int) (!(((/* implicit */_Bool) -1254897588))))));
                            arr_39 [i_0] [i_7 + 1] [i_0] [i_8] = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
                            arr_40 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? ((-(((/* implicit */int) (unsigned short)43738)))) : (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_14))))));
                        }
                    } 
                } 
                arr_41 [i_0] [(unsigned char)1] [i_8] = ((/* implicit */long long int) (-((+(((/* implicit */int) (unsigned short)10030))))));
            }
            var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((4885213473788301495ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))));
            arr_42 [i_0] [i_0] = ((/* implicit */signed char) (_Bool)1);
        }
    }
    for (unsigned int i_11 = 2; i_11 < 14; i_11 += 4) 
    {
        var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) (-(((((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (478950741U) : (var_2)))) & (((0LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)10044))))))))))));
        arr_46 [i_11] = ((/* implicit */short) ((((/* implicit */int) var_1)) ^ ((-(((((/* implicit */int) var_16)) | (((/* implicit */int) var_12))))))));
    }
    var_30 = 3973697268U;
}
