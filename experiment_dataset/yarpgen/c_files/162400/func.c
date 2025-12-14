/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162400
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
    for (short i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7986277099468440451ULL)) ? (4264365573U) : (4016652551U)));
                var_17 += ((/* implicit */short) (-(((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1] [i_0 - 1]))));
                var_18 = ((/* implicit */unsigned short) arr_1 [i_0 - 1]);
                var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((short) (unsigned short)34260)))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) ((int) max((var_6), (min((var_7), (var_2))))));
    var_21 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_6)), (2923590392U)));
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 23; i_2 += 3) 
    {
        for (int i_3 = 1; i_3 < 22; i_3 += 2) 
        {
            {
                var_22 = ((/* implicit */short) ((min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) 4016652534U)) : (arr_5 [i_2]))), (((/* implicit */unsigned long long int) var_5)))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-19463)))));
                var_23 = ((/* implicit */int) arr_5 [i_3]);
            }
        } 
    } 
}
