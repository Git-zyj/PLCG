/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123697
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 21; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */unsigned short) (-(((/* implicit */int) (short)(-32767 - 1)))));
                    var_17 = ((/* implicit */unsigned short) arr_4 [i_1] [i_0] [i_2 - 2]);
                    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-73)) % (707827955)))) ? (max((((/* implicit */unsigned long long int) 2470728314U)), (8796025913344ULL))) : (((var_1) >> (((((/* implicit */int) arr_1 [i_2])) + (2863)))))))) ? (min((707827955), (((((/* implicit */_Bool) 707827955)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) arr_5 [i_2]))));
                    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) max((((/* implicit */short) (_Bool)1)), ((short)-32757))))));
                }
            } 
        } 
    } 
    var_20 &= ((/* implicit */int) (+(((4732736651179382852ULL) | (((/* implicit */unsigned long long int) ((var_10) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))))));
}
