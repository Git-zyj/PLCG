/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149629
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
    var_14 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_6)) == (((((/* implicit */_Bool) min((var_1), (((/* implicit */short) var_13))))) ? (((((/* implicit */_Bool) (short)-32760)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13615))) : (11423859858717795666ULL))) : (var_0)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_15 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */short) (signed char)-97)), ((short)4)))) ? (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_0])) : (((((/* implicit */_Bool) (short)-26140)) ? (((/* implicit */unsigned long long int) 4203864256U)) : (9308928935261498928ULL)))));
                arr_8 [i_1] [(unsigned char)12] [i_0] = var_9;
            }
        } 
    } 
}
