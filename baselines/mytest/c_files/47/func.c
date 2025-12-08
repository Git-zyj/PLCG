/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47
Invocation: ../scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47 -o /data/zyj/loop_generator/baselines/yarpgen/mytest/c_files/47
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 24; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    arr_8 [i_0 + 1] [i_1] [i_2] = ((/* implicit */unsigned int) var_5);
                    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)-8736)))))));
                    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)20906)))))));
                }
            } 
        } 
        var_22 ^= ((/* implicit */int) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */unsigned int) -1)) : (134184960U)));
        arr_9 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 + 1] [i_0 + 1]))) != (1989473949761753875LL)));
    }
    var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) ((var_18) - (((/* implicit */int) var_11)))))));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 11; i_3 += 1) 
    {
        for (signed char i_4 = 0; i_4 < 11; i_4 += 1) 
        {
            {
                arr_15 [i_4] [i_4] [8LL] = ((/* implicit */long long int) arr_6 [(short)7] [i_4]);
                /* LoopNest 3 */
                for (unsigned int i_5 = 0; i_5 < 11; i_5 += 3) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 4) 
                    {
                        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                        {
                            {
                                arr_22 [i_3] [(signed char)2] [i_4] [i_6] [i_7] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-106)) ? (134184960U) : (((/* implicit */unsigned int) var_4))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (((unsigned int) -1LL))))));
                                var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) min(((-((-(((/* implicit */int) var_15)))))), ((+(((/* implicit */int) var_2)))))))));
                                arr_23 [i_4] [9LL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) (signed char)0))));
                                arr_24 [i_3] [i_4] [i_4] [i_6] [i_6] [i_7] [i_7 + 1] = ((/* implicit */signed char) ((short) arr_21 [i_3] [(_Bool)1] [i_3] [i_5] [i_6] [i_7 + 1]));
                            }
                        } 
                    } 
                } 
                arr_25 [i_3] [i_4] [(unsigned short)5] = ((max((((/* implicit */unsigned int) arr_5 [i_3] [i_3] [i_3])), (var_13))) * (((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [6U]))) : (var_6))) : (((/* implicit */unsigned int) ((var_4) / (((/* implicit */int) var_1))))))));
            }
        } 
    } 
    var_25 = var_5;
    var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) ((var_13) != (((/* implicit */unsigned int) min((var_9), (((((/* implicit */_Bool) 3783563247U)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1))))))))))));
}
