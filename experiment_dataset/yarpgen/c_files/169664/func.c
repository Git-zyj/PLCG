/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169664
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
    for (signed char i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_0 [i_0 + 1] [i_0 + 1]) ^ (((/* implicit */unsigned long long int) 0))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (9223372036854775807LL)))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_1 [5U])))) : (((((/* implicit */_Bool) (short)-32759)) ? (((/* implicit */int) (signed char)89)) : (((/* implicit */int) (unsigned char)155)))))) : (((((((((/* implicit */int) var_17)) + (2147483647))) << (((67108832LL) - (67108832LL))))) & (((/* implicit */int) arr_2 [i_0 + 2] [i_0 + 1]))))));
        var_18 = ((/* implicit */short) max((var_18), (((short) min((arr_2 [i_0 + 2] [i_0 + 2]), (((/* implicit */short) var_9)))))));
    }
    var_19 = ((((((/* implicit */int) ((((/* implicit */int) (unsigned short)50698)) == (((/* implicit */int) (short)21725))))) + (((/* implicit */int) var_17)))) == (((/* implicit */int) ((_Bool) ((int) var_2)))));
}
