/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157053
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
    for (unsigned short i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned short) max((((/* implicit */int) (unsigned short)10178)), ((~(((/* implicit */int) arr_1 [i_0]))))));
        var_21 = ((/* implicit */unsigned long long int) var_3);
        var_22 = ((/* implicit */long long int) var_1);
    }
    /* LoopNest 2 */
    for (unsigned short i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        for (short i_2 = 0; i_2 < 16; i_2 += 2) 
        {
            {
                arr_8 [i_1] = ((/* implicit */unsigned long long int) (unsigned short)65533);
                var_23 ^= ((/* implicit */unsigned short) (~(min((-555759370289362431LL), (arr_7 [i_1] [i_1] [i_1])))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 1) 
    {
        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_3]))))) : (arr_10 [i_3])))) ? ((+(-555759370289362431LL))) : (arr_10 [i_3])));
        arr_11 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : ((((+(arr_0 [i_3] [i_3]))) - (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 555759370289362431LL))))))))));
    }
}
