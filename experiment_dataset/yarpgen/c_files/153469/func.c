/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153469
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
    var_10 = ((/* implicit */unsigned long long int) min((var_10), (((/* implicit */unsigned long long int) (-(((unsigned int) 2956266477U)))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((long long int) (_Bool)1)), (((/* implicit */long long int) ((short) var_6)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 7230187284660219441LL))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)25445))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)40090))))) : ((-(((/* implicit */int) (short)32767))))))));
                var_12 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) (signed char)0))) ? (((/* implicit */int) max((var_6), (((/* implicit */signed char) (_Bool)1))))) : ((~(((/* implicit */int) (_Bool)1))))))) ? (var_2) : (((/* implicit */unsigned long long int) ((unsigned int) 974490540588005774ULL))));
            }
        } 
    } 
}
