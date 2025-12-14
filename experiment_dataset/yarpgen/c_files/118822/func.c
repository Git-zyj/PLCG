/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118822
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
    var_18 = ((/* implicit */long long int) ((unsigned short) ((short) (!(var_5)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned short)19527)) ? (((/* implicit */int) (!(var_16)))) : (((/* implicit */int) (unsigned short)19529)))) & (1530917289))))));
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */long long int) ((int) ((var_14) / (arr_1 [i_0]))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_3 = 2; i_3 < 21; i_3 += 3) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (unsigned int i_5 = 0; i_5 < 22; i_5 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 22; i_6 += 4) 
                    {
                        for (signed char i_7 = 0; i_7 < 22; i_7 += 4) 
                        {
                            {
                                arr_22 [i_7] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_3] [i_3] [i_5] [i_3])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_13))))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)19551)) + (1530917289)))) : (((long long int) (unsigned short)19527)))) != (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)50690)))))));
                                arr_23 [i_3] [i_3] [i_3] [i_3 - 2] = (unsigned short)46476;
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) (-(((/* implicit */int) var_5)))))) ? (((/* implicit */long long int) ((arr_16 [i_3 - 2]) ? (((((arr_13 [12LL] [i_4] [i_4] [i_4]) + (2147483647))) << (((((/* implicit */int) var_9)) - (30654))))) : (((/* implicit */int) (!(var_16))))))) : (((((/* implicit */_Bool) arr_10 [i_3] [i_4] [i_5])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)43752)) : (((/* implicit */int) arr_8 [i_3] [i_3]))))) : ((-9223372036854775807LL - 1LL))))));
                }
            } 
        } 
    } 
}
