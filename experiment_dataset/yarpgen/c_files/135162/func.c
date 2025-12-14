/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135162
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
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2101901459)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) 12010220704575012708ULL))));
    var_14 = ((/* implicit */short) var_1);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 12; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) (((!((_Bool)1))) || (((/* implicit */_Bool) (short)-4796))));
                arr_5 [i_0] [i_1] [i_1] &= ((/* implicit */unsigned short) 26ULL);
                arr_6 [i_0] [i_0] = ((/* implicit */_Bool) var_1);
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)10460))));
    var_16 *= ((/* implicit */unsigned long long int) (_Bool)1);
}
