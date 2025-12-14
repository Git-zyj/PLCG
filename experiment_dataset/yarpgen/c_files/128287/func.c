/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128287
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
    var_15 = ((/* implicit */short) var_11);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    var_16 += ((/* implicit */long long int) (!(((/* implicit */_Bool) 6558546058172004315LL))));
                    var_17 |= ((/* implicit */short) ((((/* implicit */long long int) ((unsigned int) (signed char)8))) % (((((/* implicit */_Bool) 17489028341603212661ULL)) ? (3506934320286285949LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-32747)))))));
                    arr_8 [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) arr_5 [i_0] [i_1]);
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) (-(((((-1101180054680476487LL) == (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))))) ? (var_4) : (((((/* implicit */long long int) ((/* implicit */int) (short)-20764))) / (-6324505374711816567LL)))))));
    var_19 = min((((/* implicit */unsigned long long int) var_14)), (min((17489028341603212659ULL), (((/* implicit */unsigned long long int) (signed char)-9)))));
}
