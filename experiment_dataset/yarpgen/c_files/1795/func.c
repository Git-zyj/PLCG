/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1795
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
    var_19 &= ((((var_5) + (2147483647))) << (((((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)181)) ? (var_6) : (((/* implicit */int) var_9)))) > (((/* implicit */int) var_10))))) - (1))));
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 13; i_1 += 4) 
        {
            for (signed char i_2 = 2; i_2 < 12; i_2 += 1) 
            {
                {
                    var_20 = max((min((((/* implicit */long long int) (~(((/* implicit */int) (signed char)-15))))), (max((-7435358564959419220LL), (((/* implicit */long long int) var_13)))))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1] [i_1] [i_1 - 1] [i_1 - 1]))) : ((+(-5872147778528051954LL))))));
                    var_21 = ((/* implicit */signed char) arr_2 [i_0 - 3]);
                    var_22 = ((/* implicit */int) (!(((/* implicit */_Bool) -1900011576306810615LL))));
                    var_23 = ((/* implicit */unsigned char) (~(((((/* implicit */int) (unsigned char)185)) ^ (((/* implicit */int) var_4))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */int) var_15);
    var_25 = ((/* implicit */int) ((unsigned char) min((((/* implicit */int) max(((unsigned char)185), (var_10)))), (var_5))));
}
