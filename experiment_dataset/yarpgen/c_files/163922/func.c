/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163922
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
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) >= (((/* implicit */int) (_Bool)1))))) >= (((/* implicit */int) (short)13908)))))) ^ ((~((~(9007199254740991LL)))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 4; i_3 < 22; i_3 += 1) 
                    {
                        var_19 ^= ((/* implicit */int) (+((~(7755634581847571084LL)))));
                        var_20 = ((/* implicit */_Bool) var_9);
                        var_21 *= ((/* implicit */unsigned int) arr_9 [i_0] [i_1] [(_Bool)1] [i_3]);
                    }
                    var_22 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_5 [i_0 + 2] [i_0 + 1] [i_0 + 1] [i_0 + 2]))));
                }
            } 
        } 
    } 
}
