/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147051
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
    var_20 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) / (var_4)))) ? ((-((+(((/* implicit */int) var_1)))))) : (((/* implicit */int) var_17))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 4; i_0 < 15; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) -8047924492096816029LL))));
        var_21 = ((/* implicit */_Bool) ((0ULL) + (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0 - 4]))));
    }
    /* LoopSeq 1 */
    for (unsigned char i_1 = 1; i_1 < 7; i_1 += 1) 
    {
        arr_7 [i_1 - 1] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_5 [i_1]))));
        arr_8 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1]))) ^ (((arr_1 [i_1] [i_1 - 1]) / (((/* implicit */long long int) -1772369203))))));
    }
}
