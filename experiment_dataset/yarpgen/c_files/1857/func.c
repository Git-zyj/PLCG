/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1857
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
    var_10 = ((((/* implicit */_Bool) (signed char)97)) ? (((/* implicit */int) (signed char)12)) : (((/* implicit */int) (signed char)-13)));
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 13; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */unsigned long long int) min(((signed char)-9), ((signed char)8)));
                    var_12 = ((/* implicit */unsigned short) ((var_7) ? (((/* implicit */int) arr_7 [i_0 - 1] [i_0 + 1] [i_2] [i_1 + 1])) : (((/* implicit */int) ((_Bool) (!(var_3)))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */short) ((var_6) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
    var_14 |= ((/* implicit */_Bool) var_8);
    var_15 = ((/* implicit */signed char) ((((((/* implicit */_Bool) min((2602600424510931522ULL), (((/* implicit */unsigned long long int) -4941643792223608022LL))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_7)))) * (((/* implicit */int) var_2))));
}
