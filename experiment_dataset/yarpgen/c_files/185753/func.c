/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185753
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
    var_11 = ((/* implicit */short) 0);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 3; i_2 < 8; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */short) ((3943917185313505248LL) >> (((((((/* implicit */_Bool) -3943917185313505253LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)132))) : (33554431LL))) - (109LL)))));
                    arr_7 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_9)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_7))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_2))))))) ? (min((((((/* implicit */int) (unsigned short)28407)) / (((/* implicit */int) var_7)))), (var_1))) : (((/* implicit */int) ((short) ((var_6) ? (((/* implicit */int) (unsigned short)39706)) : (((/* implicit */int) var_7))))))));
                    arr_8 [i_1] [i_2] = ((/* implicit */int) (-(((unsigned int) 594192201U))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) 3943917185313505261LL)) ? (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) >> (((var_0) - (113895754687118798LL)))))) : (((unsigned int) -1811529757))))));
    var_14 = ((/* implicit */int) var_9);
}
