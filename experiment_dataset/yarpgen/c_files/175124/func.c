/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175124
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
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        arr_2 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) arr_1 [(unsigned short)13])) : (((/* implicit */int) var_0))))) ^ ((+(2216240207651547321ULL)))))) ? (((/* implicit */int) var_9)) : (max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_0])))), (((-2147483636) ^ (((/* implicit */int) arr_1 [12LL])))))));
        arr_3 [i_0] = ((((/* implicit */unsigned int) (-2147483647 - 1))) ^ (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (short)12))))) : (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned int) (-2147483647 - 1))) : (4221971496U))))));
        var_12 = ((/* implicit */unsigned long long int) ((max((((/* implicit */int) arr_1 [i_0])), ((~(((/* implicit */int) arr_0 [i_0])))))) << (((((/* implicit */int) var_2)) - (59110)))));
    }
    var_13 = ((/* implicit */unsigned int) var_8);
    var_14 = var_2;
}
