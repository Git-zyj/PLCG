/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144092
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
    for (unsigned short i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        var_16 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)104)) ? (((long long int) ((((/* implicit */_Bool) 17948414584161005604ULL)) ? (498329489548546011ULL) : (17948414584161005604ULL)))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)58355)))));
        var_17 ^= ((/* implicit */long long int) arr_0 [i_0] [i_0]);
    }
    var_18 = ((/* implicit */unsigned long long int) ((int) var_9));
    var_19 = ((/* implicit */unsigned char) max((((/* implicit */int) var_5)), (((((/* implicit */_Bool) var_3)) ? ((~(((/* implicit */int) (unsigned char)3)))) : (((/* implicit */int) (unsigned char)124))))));
    var_20 = ((/* implicit */signed char) var_4);
}
