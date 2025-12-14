/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162911
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
    var_17 = ((/* implicit */short) (((!(((/* implicit */_Bool) max(((unsigned char)130), ((unsigned char)114)))))) ? (((/* implicit */int) var_15)) : ((((!(((/* implicit */_Bool) (unsigned char)121)))) ? (((((/* implicit */_Bool) (unsigned char)110)) ? (((/* implicit */int) (unsigned char)96)) : (((/* implicit */int) var_10)))) : (((/* implicit */int) ((short) var_10)))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            {
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (unsigned short)28128)), (5191303413310581237ULL)));
                arr_8 [i_0] [i_1] = ((/* implicit */unsigned char) var_1);
                arr_9 [i_1] [i_0] = ((/* implicit */short) (unsigned char)171);
                var_18 *= ((/* implicit */unsigned int) (-(max((var_1), ((~(((/* implicit */int) (unsigned short)37398))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)113))))) : (5191303413310581240ULL)));
}
