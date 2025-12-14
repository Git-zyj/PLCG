/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150400
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
    var_10 -= ((/* implicit */_Bool) ((unsigned int) ((long long int) (((_Bool)0) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)0))))));
    var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) (~(((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_2)), (var_4)))) ? (((/* implicit */int) ((_Bool) (short)0))) : (((/* implicit */int) (signed char)127)))))))));
    var_12 -= ((/* implicit */unsigned long long int) ((long long int) (+(((((/* implicit */_Bool) var_4)) ? (-5110682222803180311LL) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))));
    var_13 += ((/* implicit */short) ((int) ((((/* implicit */_Bool) var_6)) ? (min((var_5), (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_9)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_14 ^= ((/* implicit */int) ((long long int) 649941818U));
                var_15 = ((/* implicit */unsigned char) max((2456214053014860495ULL), (((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) var_4)) ? (var_8) : (arr_0 [i_0] [i_1])))))));
            }
        } 
    } 
}
