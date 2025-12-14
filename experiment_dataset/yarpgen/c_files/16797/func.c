/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16797
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
    var_17 = ((/* implicit */unsigned long long int) max((min((((((/* implicit */_Bool) 9223372036854775807LL)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) var_7))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_12))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) ((int) var_2))))))));
    var_18 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) min((1581837733), (var_8))))) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) max((var_13), (((/* implicit */unsigned char) ((signed char) -1900967519))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 *= ((/* implicit */signed char) ((((_Bool) arr_1 [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-25522))))) : (((/* implicit */int) (!(((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) -1693442537)))))))));
                    var_20 += ((((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned short) var_14)))))) < (((unsigned int) ((unsigned short) 3711386352199291080ULL))));
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */signed char) ((_Bool) 3274031621U));
                    var_21 = (+(((((((/* implicit */_Bool) 2750865629U)) && (var_1))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) 10081125619886805169ULL)) ? (8388607) : (var_16))))));
                }
            } 
        } 
    } 
}
