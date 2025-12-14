/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180728
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
    var_20 = ((/* implicit */_Bool) var_12);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */short) ((((((/* implicit */_Bool) 8988568491367500301ULL)) ? (((/* implicit */int) (unsigned char)13)) : ((~(((/* implicit */int) arr_3 [i_0] [i_0])))))) != (min(((+(((/* implicit */int) (unsigned char)128)))), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_15))))))));
                var_22 ^= ((/* implicit */unsigned short) ((long long int) var_9));
                var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) arr_3 [i_0] [i_0]))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_0]))))) : (min((((/* implicit */unsigned long long int) arr_3 [i_1] [i_0])), (var_17)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0])))))) : (max(((+(1810171258U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_0 [i_0])) : (793106762))))))));
            }
        } 
    } 
    var_24 += ((/* implicit */signed char) (+(((((((/* implicit */_Bool) var_11)) ? (var_10) : (2903664925588741361ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
    var_25 = ((/* implicit */_Bool) (~(((unsigned long long int) ((((/* implicit */int) (unsigned char)245)) >> (((((/* implicit */int) var_2)) + (35))))))));
    var_26 = min((((unsigned char) min((((/* implicit */long long int) var_15)), (var_14)))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_8))))));
}
