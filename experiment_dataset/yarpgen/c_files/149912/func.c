/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149912
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
    var_13 = ((/* implicit */int) var_11);
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            var_14 = ((/* implicit */long long int) min((var_14), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_4 [i_0] [i_1])) : (var_5)))) ? ((~(0LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)0)))))))));
            var_15 = ((/* implicit */unsigned int) var_10);
            var_16 = ((/* implicit */unsigned char) var_11);
            /* LoopNest 2 */
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 15; i_3 += 1) 
                {
                    {
                        var_17 = ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1))));
                        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)61)) / (((/* implicit */int) var_10))))) ? (((/* implicit */int) (unsigned char)58)) : (((/* implicit */int) var_4))));
                        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (~(0LL))))));
                    }
                } 
            } 
            var_20 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) var_8)) < (((/* implicit */int) var_4)))))));
        }
        var_21 -= ((/* implicit */short) ((var_6) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])) : (var_7)))) : ((+(0LL)))));
    }
}
