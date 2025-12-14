/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167669
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
    var_12 = ((unsigned int) var_6);
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)30))))), (arr_2 [i_0])));
        arr_4 [i_0 + 2] = ((/* implicit */unsigned int) arr_0 [i_0] [i_0]);
        arr_5 [i_0] [i_0] = ((/* implicit */short) var_9);
        arr_6 [i_0 + 2] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 + 2] [i_0 + 2]))))) % ((~(((/* implicit */int) var_4))))));
        arr_7 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_0 [i_0] [i_0 - 2]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-22930)))))) ? (max((((/* implicit */unsigned long long int) (unsigned short)65530)), (arr_0 [i_0 + 2] [i_0]))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) var_1)), (arr_2 [i_0]))))));
    }
    var_13 ^= ((/* implicit */int) ((((22ULL) + (((var_10) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned short) var_5))))) ? (var_3) : (((/* implicit */int) min((var_11), (var_0)))))))));
}
