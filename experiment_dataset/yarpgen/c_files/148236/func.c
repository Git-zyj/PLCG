/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148236
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
    var_12 = ((/* implicit */int) ((((/* implicit */_Bool) ((min((67108863U), (((/* implicit */unsigned int) var_6)))) * (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) ? (max((4227858432U), (((/* implicit */unsigned int) (short)22682)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_11)) != (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_5))))))))));
    var_13 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) min(((unsigned short)65535), (((/* implicit */unsigned short) var_6))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((((/* implicit */int) var_9)) >= (((/* implicit */int) var_0)))))))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) ((1438492044U) - (1438492044U))))));
                var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) 4227858433U)) ? (1438492051U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)159))))))));
                arr_7 [i_1] = ((/* implicit */long long int) (signed char)22);
                arr_8 [i_1] [i_1] [5LL] = arr_5 [i_1] [i_0] [i_0];
            }
        } 
    } 
}
