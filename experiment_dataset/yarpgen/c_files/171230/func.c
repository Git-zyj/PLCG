/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171230
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
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) max((var_4), (var_9))))) ? (var_5) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)54)) : (((/* implicit */int) (short)28666))))), ((~(var_5)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_18 |= ((/* implicit */signed char) (-(min(((+(((/* implicit */int) (signed char)7)))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)110)) : (var_12)))))));
                var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-28658))))) ? ((+(((/* implicit */int) (unsigned char)201)))) : ((+(((/* implicit */int) var_15))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_1 [i_0] [i_1])) : (((/* implicit */int) (signed char)-104)))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)139)))))))))))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((max((2ULL), (((/* implicit */unsigned long long int) (unsigned char)54)))), (((/* implicit */unsigned long long int) max((var_10), (((/* implicit */int) var_6)))))))) ? ((-(((/* implicit */int) (unsigned short)15607)))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_3 [i_0] [i_1] [i_1])) : (((/* implicit */int) (unsigned char)9))))))))));
            }
        } 
    } 
}
