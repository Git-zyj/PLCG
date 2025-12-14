/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135143
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
    var_15 = var_9;
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_16 *= ((/* implicit */unsigned char) ((max((var_3), (((/* implicit */unsigned long long int) (short)-21055)))) + (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)12800)) + (((/* implicit */int) var_11))))) - ((+(2080911375U))))))));
                var_17 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((-(((/* implicit */int) (short)31642)))), (((/* implicit */int) ((((/* implicit */int) (unsigned char)237)) <= (((/* implicit */int) var_11)))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)194)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)5710))))) : (((3456764750878081477ULL) >> (((/* implicit */int) (_Bool)1)))))))));
            }
        } 
    } 
}
