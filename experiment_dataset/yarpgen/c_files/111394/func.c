/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111394
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
    var_11 = ((/* implicit */unsigned short) (_Bool)1);
    var_12 = ((/* implicit */int) max((((/* implicit */long long int) (unsigned short)11019)), (((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) var_5)), ((unsigned char)30))))) * (min((1869891324407637370LL), (((/* implicit */long long int) var_9))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 4; i_0 < 17; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0 - 1] [i_0 - 1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((7127109093357461576LL), (((/* implicit */long long int) var_2))))) ? (3774649971015565422LL) : (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_5))))))) < (((/* implicit */long long int) ((/* implicit */int) var_2)))));
                arr_6 [i_1] [8ULL] [i_0] = ((/* implicit */long long int) 944504990);
                arr_7 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 555469119)) ? (((/* implicit */int) (signed char)41)) : (((/* implicit */int) (short)-29253))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */int) var_6)) > (min((((/* implicit */int) ((7311953838164498639LL) == (((/* implicit */long long int) ((/* implicit */int) (signed char)-23)))))), (((((/* implicit */int) var_6)) & (((/* implicit */int) var_3))))))));
}
