/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150438
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
    var_17 = ((/* implicit */signed char) var_3);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)19))))) ? ((+(((/* implicit */int) var_13)))) : (((((/* implicit */_Bool) (unsigned short)30149)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) ((7454051813922500588LL) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)19))))))))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_19 = ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)236))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_11))))) : (2598578175U));
            var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) var_4))));
        }
        for (long long int i_2 = 0; i_2 < 18; i_2 += 4) 
        {
            var_21 *= ((/* implicit */signed char) ((((/* implicit */_Bool) min(((unsigned char)234), (var_6)))) ? (((((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) var_10)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 595695371U)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_12))))) : (max((595695371U), (((/* implicit */unsigned int) var_14)))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
            var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) var_1))));
            arr_10 [14U] = ((/* implicit */long long int) 3699271912U);
        }
    }
}
