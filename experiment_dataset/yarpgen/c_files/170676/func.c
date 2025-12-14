/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170676
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
    var_15 &= ((/* implicit */unsigned short) var_7);
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 += ((/* implicit */unsigned short) (((_Bool)1) || (((/* implicit */_Bool) 268435455LL))));
        var_17 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)45)) || ((_Bool)0)));
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 &= ((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (0U))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)8191))))))));
                    var_19 = ((/* implicit */signed char) ((int) (unsigned char)15));
                    var_20 += ((/* implicit */unsigned short) ((((((/* implicit */int) (short)8191)) << (((2057992293) - (2057992278))))) << (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (short)(-32767 - 1)))))));
                }
            } 
        } 
        var_21 *= ((/* implicit */unsigned short) (!((_Bool)1)));
    }
    var_22 |= ((/* implicit */long long int) var_4);
}
