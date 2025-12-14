/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167408
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
    var_19 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((+(((/* implicit */int) (unsigned char)9)))) & (var_15)))) ? (((((((/* implicit */int) var_0)) == (var_15))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) max((((/* implicit */unsigned short) var_0)), (var_8)))))) : (((/* implicit */int) var_14))));
    var_20 = ((/* implicit */unsigned int) var_3);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 25; i_3 += 1) 
                {
                    {
                        var_21 = ((/* implicit */unsigned char) (-(((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_1]))) & (min((12U), (((/* implicit */unsigned int) var_3))))))));
                        var_22 = (+(((((/* implicit */_Bool) ((unsigned char) var_18))) ? ((+(2251799809490944ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))))));
                        var_23 = ((/* implicit */unsigned short) var_9);
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) arr_5 [i_0])), (-832474118)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0]))))) : (((((/* implicit */int) arr_5 [i_0])) & (((/* implicit */int) var_18))))));
    }
}
