/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122252
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
    var_15 = ((/* implicit */unsigned long long int) ((-5647707581685742954LL) <= (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((-2069198017634928324LL) ^ (((/* implicit */long long int) 1245055242U)))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_16 = ((signed char) 1187233878);
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 6; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) 4294967284U))) ? (1187233849) : (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_5 [9LL] [i_1] [i_0])) ? (((/* implicit */unsigned int) -1187233863)) : (4294967275U)))))));
                    var_18 = ((/* implicit */long long int) (~((+((~(((/* implicit */int) (_Bool)1))))))));
                }
            } 
        } 
        var_19 = ((/* implicit */long long int) min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)24909)));
    }
}
