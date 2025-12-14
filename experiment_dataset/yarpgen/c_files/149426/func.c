/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149426
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_14 = ((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_3 [i_0] [i_0])), (min((arr_1 [i_0]), (((/* implicit */unsigned short) (_Bool)1))))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            var_15 &= arr_3 [i_0] [i_1];
            var_16 = ((/* implicit */signed char) (+(((/* implicit */int) ((unsigned char) (~(((/* implicit */int) var_4))))))));
        }
    }
    for (short i_2 = 0; i_2 < 14; i_2 += 4) 
    {
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) max(((unsigned char)113), ((unsigned char)144))))) >= ((-(((/* implicit */int) var_7))))));
        var_18 = ((/* implicit */unsigned char) 456471300);
    }
    var_19 = ((/* implicit */long long int) var_1);
}
