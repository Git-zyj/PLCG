/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17715
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
    var_20 |= var_0;
    var_21 = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (var_4) : (((/* implicit */long long int) 2026778986))))) ? (((/* implicit */int) ((_Bool) 4294967284U))) : ((~(((/* implicit */int) (signed char)35))))))), ((+(min((((/* implicit */unsigned long long int) var_2)), (var_11))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                for (unsigned int i_3 = 0; i_3 < 20; i_3 += 4) 
                {
                    {
                        arr_12 [i_3] [i_2] [4] [i_0] = (short)26728;
                        var_22 = ((/* implicit */unsigned short) 5704959843236023618LL);
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */signed char) var_3);
        var_24 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_1)) ? (arr_10 [i_0] [i_0] [i_0 - 2] [i_0 + 1]) : (((/* implicit */int) (_Bool)1))))))), (4294967269U)));
    }
}
