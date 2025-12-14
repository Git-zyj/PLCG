/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172073
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                arr_5 [i_1] &= ((/* implicit */_Bool) max((max((((/* implicit */long long int) 2583421040U)), (arr_1 [i_1]))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)149)) < (((/* implicit */int) (signed char)112)))))));
                var_12 = ((/* implicit */long long int) max((max(((short)-31043), (((/* implicit */short) var_0)))), (((/* implicit */short) var_0))));
                var_13 |= ((/* implicit */signed char) var_5);
            }
        } 
    } 
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned short)31355)) ? (6408548231557855366ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))) ? (min((((/* implicit */unsigned int) (~(((/* implicit */int) var_8))))), (var_9))) : (((((/* implicit */_Bool) min((1253006043U), (((/* implicit */unsigned int) (signed char)-106))))) ? (((((/* implicit */_Bool) var_7)) ? (var_6) : (var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)67)))))));
    var_15 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) var_7)) : (((unsigned long long int) ((short) var_8)))));
    var_16 = ((/* implicit */unsigned short) ((var_9) >= (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
    var_17 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) 4082418909969789818ULL)) ? (((((/* implicit */_Bool) (signed char)-127)) ? (((/* implicit */int) (unsigned char)67)) : (((/* implicit */int) (unsigned char)84)))) : ((-(((/* implicit */int) (short)21562))))))));
}
