/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124536
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
    var_15 *= ((/* implicit */_Bool) var_10);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) min((min((((/* implicit */unsigned int) max((((/* implicit */int) var_3)), (arr_2 [i_1] [i_0] [i_0])))), (var_12))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [15ULL]))) : (((((/* implicit */_Bool) 1311657719U)) ? (4294967295U) : (((/* implicit */unsigned int) 268435455)))))))))));
            var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_1])) ? ((~(((/* implicit */int) var_9)))) : (arr_2 [i_0] [16] [i_0])))))));
        }
        arr_4 [i_0] = ((/* implicit */unsigned short) (((+(arr_2 [i_0] [i_0] [i_0]))) <= (((/* implicit */int) (!(((((/* implicit */int) var_6)) == (((/* implicit */int) var_0)))))))));
    }
    var_18 = ((/* implicit */signed char) var_4);
}
