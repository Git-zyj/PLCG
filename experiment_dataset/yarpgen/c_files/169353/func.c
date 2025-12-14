/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169353
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */int) (((((~(((/* implicit */int) var_11)))) > (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (unsigned char)159)) : (((/* implicit */int) var_2)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (-(2147483644)))) ? (((((/* implicit */_Bool) var_6)) ? (-2147483645) : (arr_6 [i_1]))) : (min((2147483644), (arr_5 [i_0] [i_1])))))) : (((((long long int) (unsigned char)123)) / (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1])) ? (-2147483645) : (((/* implicit */int) (unsigned short)51638)))))))));
                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2147483642)) ? (min((((((/* implicit */_Bool) -2147483642)) ? (2147483644) : (((/* implicit */int) var_9)))), (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) var_6))));
                arr_7 [(unsigned short)2] = ((/* implicit */int) max((((/* implicit */unsigned short) ((1073479680U) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)13)))))), (var_15)));
                arr_8 [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_3))));
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) var_7);
    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)108))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (signed char)127)))) : (max((((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)86))) : (var_8))), (((/* implicit */unsigned int) var_5))))));
    var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-102)), ((unsigned char)30)))) & (((/* implicit */int) ((unsigned short) (unsigned char)2)))))))))));
}
