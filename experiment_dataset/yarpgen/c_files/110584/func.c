/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110584
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned char) (((~(arr_1 [i_0 + 1] [i_0 + 1]))) & ((~(min((arr_1 [(_Bool)1] [(_Bool)1]), (((/* implicit */long long int) var_10))))))));
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) -1592161136)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (unsigned short)15574))))))) ? (((/* implicit */unsigned long long int) var_1)) : (min((6987912642218878017ULL), (((/* implicit */unsigned long long int) -4032302370483268755LL)))))))));
    }
    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (+(-4032302370483268751LL))))));
    var_21 = ((/* implicit */unsigned char) var_15);
}
