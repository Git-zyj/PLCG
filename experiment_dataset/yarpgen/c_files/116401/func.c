/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116401
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
    var_10 &= ((((/* implicit */int) ((unsigned short) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)0)))))) | (((/* implicit */int) min((max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)14181))), (((/* implicit */unsigned short) min(((_Bool)1), ((_Bool)1))))))));
    var_11 += ((var_8) ? ((~(((/* implicit */int) min(((_Bool)1), ((_Bool)1)))))) : (((/* implicit */int) (!((_Bool)1)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_12 = ((((/* implicit */_Bool) ((long long int) ((var_4) && (((/* implicit */_Bool) (short)7840)))))) ? (((/* implicit */unsigned long long int) -972188160)) : (0ULL));
                var_13 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 1651655726)), (15583993665712633660ULL))))));
            }
        } 
    } 
    var_14 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)51355))) - (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (4534539078709337011LL)))));
}
