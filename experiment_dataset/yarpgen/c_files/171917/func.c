/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171917
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
    var_18 = ((long long int) max((var_13), (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-1)))))));
    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) 1048575U))));
    var_20 = ((/* implicit */signed char) max((((/* implicit */int) (!((!(((/* implicit */_Bool) 1048575U))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)233))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_14)))) : ((+(((/* implicit */int) var_9))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */unsigned int) min((((/* implicit */int) min((arr_2 [i_0] [i_0]), (arr_2 [i_1] [i_0])))), ((~(((/* implicit */int) arr_2 [i_0] [i_0]))))));
                var_22 = ((/* implicit */unsigned short) var_7);
            }
        } 
    } 
}
