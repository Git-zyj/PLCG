/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15252
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
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        arr_2 [i_0 + 1] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */int) (unsigned short)53923)) : (((/* implicit */int) arr_0 [i_0 + 1])))) - ((~(((/* implicit */int) arr_0 [i_0 + 1]))))));
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (-((+(((/* implicit */int) arr_1 [i_0]))))))) ? (((/* implicit */int) arr_1 [i_0])) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_1 [i_0])), ((unsigned short)53923)))) : (((((/* implicit */int) arr_0 [i_0 + 1])) - (((/* implicit */int) arr_0 [i_0]))))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_8 [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(-3602761320729202388LL))))));
                    arr_9 [i_0] [i_1] = ((((/* implicit */_Bool) arr_4 [16] [i_1] [i_0])) && (((/* implicit */_Bool) ((14235443220495349555ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11613)))))));
                }
            } 
        } 
    }
    var_15 = ((/* implicit */short) var_4);
}
