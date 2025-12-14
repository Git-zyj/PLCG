/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142917
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
    var_18 = ((/* implicit */short) min((((/* implicit */long long int) max((((/* implicit */unsigned int) (-(((/* implicit */int) (short)(-32767 - 1)))))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) : (959986173U)))))), ((((-(1323708442647325781LL))) & (var_16)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        var_19 = ((/* implicit */int) ((((/* implicit */_Bool) 959986173U)) ? (-1323708442647325782LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(var_16)))) ? ((~(1323708442647325781LL))) : (((/* implicit */long long int) ((/* implicit */int) var_11)))));
    }
    var_20 = ((/* implicit */unsigned short) 3U);
    var_21 = ((/* implicit */unsigned char) (~(min((((/* implicit */long long int) var_13)), (((((/* implicit */_Bool) 1354272818U)) ? (-1323708442647325762LL) : (((/* implicit */long long int) 959986173U))))))));
}
