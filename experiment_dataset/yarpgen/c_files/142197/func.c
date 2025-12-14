/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142197
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
    for (signed char i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            var_14 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)1067))));
            arr_5 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)1062)) ? (((/* implicit */unsigned long long int) arr_1 [i_0 - 3])) : ((~(7ULL)))));
            var_15 ^= ((signed char) (unsigned char)15);
        }
        arr_6 [i_0] [i_0] = ((/* implicit */long long int) ((_Bool) (((!(((/* implicit */_Bool) (short)-1067)))) ? (((/* implicit */unsigned long long int) arr_3 [i_0 - 3] [i_0 - 3])) : (var_9))));
    }
    for (long long int i_2 = 3; i_2 < 18; i_2 += 4) 
    {
        arr_9 [i_2] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_7 [i_2 + 1])) ? (((/* implicit */int) (short)-12172)) : (251658240)))));
        arr_10 [i_2] = ((/* implicit */unsigned char) max((arr_7 [i_2 + 3]), (((((/* implicit */_Bool) arr_7 [i_2 + 1])) ? (((/* implicit */unsigned long long int) var_3)) : (arr_8 [i_2])))));
    }
    var_16 = (((~(((long long int) var_6)))) ^ (((/* implicit */long long int) ((int) max((var_7), (((/* implicit */unsigned long long int) var_11)))))));
}
