/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165391
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
    var_16 = ((/* implicit */unsigned short) var_7);
    var_17 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 11161699889926850668ULL)))) + ((~(min((((/* implicit */unsigned long long int) (signed char)-111)), (11161699889926850668ULL))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned int) 7285044183782700953ULL);
                arr_7 [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_3)) & (((/* implicit */int) arr_5 [i_0] [i_1]))))))));
                arr_8 [i_0] [i_0] [i_0] = (!(((((/* implicit */int) arr_5 [i_0] [i_1])) == (((((/* implicit */_Bool) 11161699889926850657ULL)) ? (((/* implicit */int) var_15)) : (-1903431340))))));
            }
        } 
    } 
    var_18 = ((/* implicit */short) 268435440U);
}
