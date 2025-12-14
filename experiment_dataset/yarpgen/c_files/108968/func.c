/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108968
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
    var_14 = ((/* implicit */unsigned long long int) var_8);
    var_15 = ((((/* implicit */_Bool) var_11)) ? (((unsigned int) 0U)) : (((((/* implicit */_Bool) max((((/* implicit */signed char) var_4)), (var_10)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) : ((-(var_13))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_16 = min((((/* implicit */unsigned long long int) (short)32767)), (var_0));
                    var_17 ^= ((/* implicit */long long int) (~(16U)));
                    arr_7 [i_0] [i_0] [i_1 + 2] [i_2] = ((/* implicit */signed char) min((max((((/* implicit */unsigned int) (short)1920)), (559432131U))), (((/* implicit */unsigned int) min(((+(((/* implicit */int) (short)-32747)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))))));
                }
            } 
        } 
    } 
}
