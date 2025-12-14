/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131824
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
    var_13 &= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)66)) + (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4089037883U)) ? (var_12) : (var_2)))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 2) /* same iter space */
    {
        var_14 = ((unsigned int) (!(((/* implicit */_Bool) ((unsigned int) (unsigned char)20)))));
        arr_2 [i_0] = ((/* implicit */unsigned char) ((unsigned int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))));
    }
    for (unsigned int i_1 = 0; i_1 < 14; i_1 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 14; i_2 += 4) 
        {
            for (unsigned char i_3 = 0; i_3 < 14; i_3 += 2) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) max((2147483648U), (var_11))))))) * (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 2147483647U)))))) <= (var_3))))));
                    var_16 &= ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_3 [i_3] [i_1])))) * ((-(max((arr_3 [i_3] [i_2]), (4294967288U))))));
                }
            } 
        } 
        var_17 = (+(((((/* implicit */_Bool) 2147483668U)) ? (3956532875U) : (arr_3 [i_1] [i_1]))));
        var_18 *= (unsigned char)110;
        var_19 = ((/* implicit */unsigned int) min((var_19), (((unsigned int) ((unsigned int) ((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_1])) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))));
    }
    var_20 = ((/* implicit */unsigned int) min((var_20), ((+(((unsigned int) ((3707437155U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)246))))))))));
    var_21 = var_3;
}
