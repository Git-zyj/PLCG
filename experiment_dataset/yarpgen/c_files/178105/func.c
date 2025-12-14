/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178105
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
    var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) var_0))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned int) (~(arr_1 [i_0])));
                arr_6 [i_1 - 1] [i_1] [7LL] = ((/* implicit */unsigned short) (((~(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)57862))) * (arr_2 [i_0]))))) & (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
                var_15 *= ((/* implicit */signed char) (!(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_0 [i_0]) : (arr_2 [i_1])))) && (((((/* implicit */_Bool) (short)-3447)) || (((/* implicit */_Bool) arr_0 [i_1]))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_10))));
}
