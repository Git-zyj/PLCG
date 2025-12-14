/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10994
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
    var_15 = 577230167;
    var_16 &= -577230170;
    var_17 &= ((/* implicit */long long int) var_7);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((arr_3 [i_1] [i_0] [i_0]) + (2147483647))) >> (((/* implicit */int) (_Bool)0))))) | (arr_0 [i_0] [i_0])));
                arr_6 [i_0] [8U] [i_0] = ((/* implicit */signed char) max((arr_0 [i_0] [(unsigned short)14]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((33554431LL), (((/* implicit */long long int) (short)16383))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)32752))))) : (((/* implicit */int) ((unsigned char) (unsigned char)26))))))));
                var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) max((((((/* implicit */int) var_8)) / (((/* implicit */int) (unsigned short)65535)))), (((((/* implicit */int) ((_Bool) arr_4 [i_0] [i_0]))) % (((/* implicit */int) (short)-18994)))))))));
            }
        } 
    } 
}
