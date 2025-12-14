/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157683
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
    var_11 -= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((var_0) + (2147483647))) << (((((var_6) + (3298835351621591932LL))) - (6LL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) : ((+(var_2))))), (((((/* implicit */unsigned long long int) (+(var_6)))) / (((((/* implicit */unsigned long long int) var_9)) * (var_7)))))));
    var_12 |= ((/* implicit */int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (min((11865652144053757620ULL), (((((/* implicit */_Bool) var_6)) ? (var_2) : (((/* implicit */unsigned long long int) var_3))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -4079185699832148346LL)) ? (3268121655651691769ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) 6581091929655793995ULL))))))));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            var_13 |= ((/* implicit */short) (+((+(((/* implicit */int) var_8))))));
            arr_7 [i_0] [i_0] [i_1] = ((/* implicit */short) var_7);
        }
    }
}
