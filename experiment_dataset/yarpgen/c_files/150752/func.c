/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150752
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
    var_17 = ((/* implicit */int) var_10);
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 16; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_2] [i_0] [i_2] [i_0])) ? (((/* implicit */long long int) min(((-(((/* implicit */int) (unsigned short)38521)))), ((+(((/* implicit */int) var_8))))))) : ((((!(((/* implicit */_Bool) (unsigned short)34340)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)36088))) : (-357818096122887302LL)))));
                    var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) var_12))));
                    var_19 = ((/* implicit */unsigned int) max((var_2), (((/* implicit */unsigned long long int) min((357818096122887319LL), (((/* implicit */long long int) (_Bool)1)))))));
                    var_20 *= ((/* implicit */short) (+(357818096122887301LL)));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) min((var_9), (var_9)))) ? (((/* implicit */int) (unsigned char)207)) : (((/* implicit */int) var_3)))), (var_11)));
    var_22 = ((/* implicit */unsigned short) var_5);
}
