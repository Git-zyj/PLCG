/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155291
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
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3583668393357464506ULL)) ? (14863075680352087119ULL) : (3223979969820741841ULL)));
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((max((3583668393357464506ULL), (((/* implicit */unsigned long long int) var_6)))) >= (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) >> (((((/* implicit */int) var_7)) - (80))))))))) <= (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) (signed char)29))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 4; i_0 < 22; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_0 [i_0]);
                arr_7 [i_0 - 4] = ((/* implicit */unsigned long long int) arr_0 [i_0]);
            }
        } 
    } 
}
