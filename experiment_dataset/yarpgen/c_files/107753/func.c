/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107753
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
    var_12 &= ((/* implicit */unsigned short) ((2129500474806375371ULL) < (((/* implicit */unsigned long long int) 5853889084017671012LL))));
    var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) (-((-(((long long int) (_Bool)1)))))))));
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-((+(((/* implicit */int) var_9))))))) && (((/* implicit */_Bool) (((~(var_11))) + (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) ((unsigned long long int) (unsigned short)23));
                var_15 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)65514))))))))) <= (((((/* implicit */_Bool) (unsigned short)37132)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_11)))));
            }
        } 
    } 
}
