/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174485
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
    for (long long int i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        var_12 ^= ((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) == (3U))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0 - 2] [i_0 + 2])) && ((_Bool)1)))) : (((/* implicit */int) var_5))));
        arr_3 [(signed char)5] [(short)1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)5))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 + 2] [i_0]))) / (var_4))) : (((/* implicit */long long int) (-(arr_0 [i_0 + 1] [(short)4]))))));
        var_13 = ((/* implicit */long long int) var_3);
    }
    var_14 = ((/* implicit */unsigned long long int) min(((+(((/* implicit */int) (unsigned short)24001)))), (((((/* implicit */_Bool) (-(1755639470049712192ULL)))) ? (((/* implicit */int) ((unsigned short) 2807822705U))) : (((/* implicit */int) var_11))))));
}
