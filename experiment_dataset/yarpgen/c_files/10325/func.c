/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10325
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
    for (int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */long long int) min((((/* implicit */int) ((unsigned short) arr_4 [i_0] [i_0] [i_1]))), (((((/* implicit */int) var_15)) << (((((/* implicit */int) var_11)) - (221)))))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((var_4) ? (-1884819522) : (1884819539)))) : (((long long int) (signed char)0)))))))));
                var_20 = ((/* implicit */unsigned short) 1884819532);
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) min(((-(((/* implicit */int) var_0)))), (min((((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)16)) : (1938841228))), (((((/* implicit */_Bool) 4143638036497065236LL)) ? (((/* implicit */int) (unsigned short)17459)) : (-909616323)))))));
    var_22 = ((/* implicit */signed char) var_1);
    var_23 -= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((unsigned char) var_6))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -2002617760))))) : (((/* implicit */int) ((unsigned char) var_7))))) < (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)-28)) : (((/* implicit */int) var_6))))))))));
}
