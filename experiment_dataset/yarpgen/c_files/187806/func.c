/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187806
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
    var_19 = ((/* implicit */unsigned long long int) var_14);
    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((((/* implicit */int) var_17)) << (((((((/* implicit */_Bool) ((unsigned char) 1684168433538415916LL))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_8))))) : (var_14))) - (29LL))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (short i_2 = 4; i_2 < 9; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) -6LL)) ? (((unsigned long long int) (unsigned char)133)) : (((/* implicit */unsigned long long int) (+(1684168433538415916LL)))))))));
                    var_22 = ((/* implicit */unsigned long long int) max((1684168433538415916LL), (((/* implicit */long long int) (short)-8359))));
                    arr_9 [i_0] = ((/* implicit */unsigned long long int) arr_3 [(unsigned short)10] [i_1] [i_0]);
                }
            } 
        } 
    } 
}
