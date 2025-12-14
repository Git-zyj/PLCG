/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156354
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
    var_11 = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : ((+((((_Bool)1) ? (72057594037927935LL) : (((/* implicit */long long int) 1881342097U))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                arr_4 [i_1] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (-(arr_0 [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) min(((_Bool)1), ((_Bool)1))))) : (((((/* implicit */_Bool) 220376586799350970LL)) ? (1700775845195899606LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)20)))))))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)160)) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) 849541383639574745LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)42879))))) ? (((/* implicit */int) (unsigned char)11)) : (((/* implicit */int) max(((short)-29239), (((/* implicit */short) (unsigned char)160)))))))));
            }
        } 
    } 
}
