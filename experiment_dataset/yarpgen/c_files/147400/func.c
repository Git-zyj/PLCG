/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147400
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
    for (int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_20 = ((/* implicit */int) (-(min((-1LL), (((/* implicit */long long int) var_3))))));
        var_21 = ((/* implicit */unsigned int) arr_2 [i_0] [i_0]);
        var_22 |= ((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551590ULL))));
        arr_3 [i_0] = ((signed char) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) (short)32020)) : (((/* implicit */int) arr_0 [i_0]))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 1; i_1 < 22; i_1 += 1) 
    {
        var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) (~(arr_5 [i_1 + 2]))))));
        var_24 = ((/* implicit */unsigned char) (short)32023);
    }
    var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) min(((-(((/* implicit */int) ((((/* implicit */int) var_18)) < (var_14)))))), (((/* implicit */int) min(((short)32767), (((/* implicit */short) min((var_10), (((/* implicit */unsigned char) var_8)))))))))))));
}
