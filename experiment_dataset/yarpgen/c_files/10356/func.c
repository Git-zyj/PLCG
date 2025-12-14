/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10356
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                arr_6 [i_1] [i_0] [i_0] = ((/* implicit */int) max((((/* implicit */unsigned int) -2122517230)), (((((/* implicit */_Bool) (-(((/* implicit */int) (short)1022))))) ? (((4294967295U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)48))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1])))))));
                var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_10))) + (var_5)))) ? (((/* implicit */long long int) 575479762U)) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)69))) + (-2337456552824443039LL)))))) ? (max((((/* implicit */unsigned int) ((unsigned short) -2337456552824443039LL))), (max((((/* implicit */unsigned int) (_Bool)1)), (arr_1 [i_0]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 372641965)) ? (((/* implicit */int) (unsigned short)38888)) : (1776844515))))));
            }
        } 
    } 
    var_17 = ((/* implicit */short) var_5);
}
