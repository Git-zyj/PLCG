/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179614
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
    for (int i_0 = 4; i_0 < 22; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_11 [i_2] [i_1] [i_1] [i_0 + 1] = ((/* implicit */unsigned int) ((int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_0))))) <= (var_14))));
                    arr_12 [i_0] [i_2 + 2] = (((+(((/* implicit */int) (unsigned short)30992)))) * ((-(((/* implicit */int) min(((unsigned short)58528), (((/* implicit */unsigned short) (signed char)-5))))))));
                    var_15 = ((/* implicit */_Bool) max((max((((/* implicit */long long int) arr_4 [i_2 - 1] [i_2] [i_2 + 2])), (arr_9 [i_0 + 1] [i_2 - 1] [i_2] [i_0 + 1]))), (((/* implicit */long long int) (~(((((/* implicit */_Bool) (unsigned char)200)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-94))) : (2255145032U))))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) var_14))));
}
