/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127172
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
    for (long long int i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            {
                var_10 = ((/* implicit */unsigned int) max(((-(((/* implicit */int) (short)21114)))), (((/* implicit */int) max((((/* implicit */short) (unsigned char)159)), ((short)124))))));
                var_11 &= ((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */int) (short)511)) == (var_9)))), ((+(((/* implicit */int) (unsigned char)255))))));
                var_12 &= var_8;
                var_13 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)255)) ? (2870131474U) : (1497586446U)));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_6), (((/* implicit */short) (unsigned char)119))))) ? (((/* implicit */int) ((var_2) == (((/* implicit */unsigned long long int) 0U))))) : (((((/* implicit */int) var_3)) << (((((/* implicit */int) var_8)) - (109)))))))), (((max((var_2), (((/* implicit */unsigned long long int) var_4)))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
}
