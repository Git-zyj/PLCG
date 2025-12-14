/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136544
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) && (((/* implicit */_Bool) min((((/* implicit */int) (short)32767)), (-2111237250))))))), (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned char)70))))));
                arr_4 [14LL] [i_1] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((short) var_10)))));
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned int) (-((~(((/* implicit */int) (unsigned short)0))))));
            }
        } 
    } 
    var_18 ^= ((/* implicit */signed char) (short)-1200);
    var_19 = ((/* implicit */short) (-(((/* implicit */int) var_9))));
    var_20 = var_10;
    var_21 += ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-117)) >= (((/* implicit */int) (unsigned char)252))));
}
