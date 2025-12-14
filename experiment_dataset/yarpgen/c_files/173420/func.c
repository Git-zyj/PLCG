/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173420
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) max((min(((-(((/* implicit */int) arr_0 [i_1])))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)136))))))), (((/* implicit */int) arr_0 [i_1])))))));
                var_14 = ((/* implicit */long long int) min((var_14), ((~(((((/* implicit */_Bool) arr_5 [i_1] [i_0] [i_1])) ? (((/* implicit */long long int) (~(4193280)))) : ((((_Bool)1) ? (6492737177800610799LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) ((((((var_9) > (((/* implicit */long long int) ((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)21393)) : (((/* implicit */int) (unsigned short)44782)))) : (((/* implicit */int) var_2)))) <= (var_5)));
    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 4907378863065324594ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_7)) - (((/* implicit */int) (signed char)0))))))))) : (min((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) var_2)) : (var_5)))), (((13539365210644227022ULL) & (((/* implicit */unsigned long long int) -1LL)))))))))));
}
