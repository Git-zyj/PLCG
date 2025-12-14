/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129179
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
    var_18 *= ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) (+(var_4)))) || (((/* implicit */_Bool) (unsigned short)0))))) >> ((((+(16392399415722158036ULL))) - (16392399415722158010ULL)))));
    var_19 = 16392399415722158058ULL;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                arr_5 [i_0 - 1] [(short)10] = ((/* implicit */short) ((signed char) min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (2054344657987393568ULL))), (((/* implicit */unsigned long long int) ((unsigned short) arr_4 [i_0 - 3] [14LL]))))));
                var_20 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 3])) ? (arr_1 [i_0 - 2]) : (((/* implicit */int) arr_4 [i_0 - 3] [i_0 + 1]))))) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (signed char)111)) : (arr_1 [i_0]))) / (((/* implicit */int) (unsigned char)135))))) : ((-(3570967914023726150LL)))));
            }
        } 
    } 
    var_21 *= var_6;
    var_22 = ((/* implicit */signed char) (unsigned short)8698);
}
