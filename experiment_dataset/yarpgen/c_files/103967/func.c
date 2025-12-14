/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103967
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
    var_19 = ((/* implicit */unsigned char) max((((/* implicit */long long int) var_11)), (2797228902292701019LL)));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (int i_1 = 3; i_1 < 13; i_1 += 2) 
        {
            for (long long int i_2 = 2; i_2 < 13; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_0] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(4169819237U)))) ? (2992497750U) : (((/* implicit */unsigned int) ((var_13) & (((/* implicit */int) arr_0 [i_1 + 1] [i_1 + 1])))))));
                    arr_10 [i_1] [i_1] = ((/* implicit */_Bool) max(((~(((/* implicit */int) (!((_Bool)1)))))), ((((~(((/* implicit */int) (short)-30762)))) >> (((/* implicit */int) arr_7 [i_1]))))));
                    arr_11 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) -6312364829197551228LL);
                }
            } 
        } 
    } 
    var_20 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (max((var_12), (((/* implicit */long long int) (short)30742)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_18)) < (var_13)))))))) ? (((unsigned long long int) (~(((/* implicit */int) var_16))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967286U)) ? (var_12) : (((/* implicit */long long int) var_4))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-30762)) ? (((/* implicit */int) (short)-11542)) : (((/* implicit */int) (short)30753))))) : (((unsigned long long int) (unsigned short)20818))))));
}
