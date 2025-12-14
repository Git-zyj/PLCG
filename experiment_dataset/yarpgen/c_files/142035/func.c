/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142035
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
    var_12 = ((/* implicit */_Bool) var_2);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_2 [i_0] [6ULL])) * (8589934591ULL)))) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) max(((unsigned short)16), (((/* implicit */unsigned short) (short)14946)))))))) : (var_0)));
                var_14 *= ((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)255)), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) 33554304)) : (var_4)))));
            }
        } 
    } 
    var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) ((var_9) >> ((((-((+(var_9))))) - (14848536744069694577ULL))))))));
}
