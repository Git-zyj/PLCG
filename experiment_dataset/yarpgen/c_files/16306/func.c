/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16306
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14843))) < (24ULL)))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) > (-7LL)))))), (((/* implicit */int) (signed char)52))));
                    var_13 = ((/* implicit */unsigned short) var_0);
                    var_14 = ((/* implicit */short) max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (1256140204U)))) : (arr_3 [i_0]))), (((/* implicit */long long int) ((((/* implicit */_Bool) 3038827085U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-19493))) : (2500726543U))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */signed char) var_9);
    var_16 = ((/* implicit */unsigned short) (-(18446744073709551568ULL)));
    var_17 = ((/* implicit */unsigned int) var_1);
}
