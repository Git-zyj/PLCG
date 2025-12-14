/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134339
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) max((((arr_1 [i_0]) % (arr_2 [i_0] [i_0]))), (((/* implicit */int) arr_0 [i_0] [i_0]))))) != (max((((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) | (1855216104U))), (((/* implicit */unsigned int) (-(arr_2 [i_0] [i_0]))))))));
        var_19 = ((/* implicit */_Bool) (((~(arr_2 [i_0] [i_0]))) ^ (((/* implicit */int) ((((/* implicit */int) ((unsigned short) (-2147483647 - 1)))) < (max(((-2147483647 - 1)), (((/* implicit */int) arr_0 [i_0] [i_0])))))))));
        arr_3 [i_0] = ((/* implicit */long long int) (-(((max((((/* implicit */int) arr_0 [i_0] [i_0])), ((-2147483647 - 1)))) / (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_2 [i_0] [i_0]) : (((/* implicit */int) arr_0 [i_0] [i_0]))))))));
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)62)))) & (min(((-(((/* implicit */int) (_Bool)1)))), (max((((/* implicit */int) (short)25668)), (arr_1 [i_0])))))));
    }
    var_21 -= ((/* implicit */short) ((((((/* implicit */_Bool) (((-2147483647 - 1)) % (766074725)))) && (var_17))) ? ((+(((((/* implicit */int) var_4)) & (var_5))))) : (((/* implicit */int) ((((var_12) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_17)))) >= (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))))));
}
