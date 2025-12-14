/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163283
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
    var_20 &= ((/* implicit */int) ((((/* implicit */_Bool) var_19)) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_9)) >= (var_8))))) % (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (var_7))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    var_21 *= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2001692755)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) (signed char)-55))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_0] [14LL])) + (((/* implicit */int) var_11))))) : (((long long int) var_17))))) && ((!(((/* implicit */_Bool) arr_0 [i_1 + 1])))));
                    arr_9 [i_1] [14ULL] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_17)) : (-2001692753)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) 2001692749))) ? ((~(var_12))) : (((/* implicit */long long int) ((/* implicit */int) ((var_14) < (((/* implicit */int) (short)-2260))))))))) : (max((min((var_2), (((/* implicit */unsigned long long int) arr_8 [i_0] [i_0])))), (((/* implicit */unsigned long long int) ((unsigned short) var_8)))))));
                }
            } 
        } 
    } 
}
