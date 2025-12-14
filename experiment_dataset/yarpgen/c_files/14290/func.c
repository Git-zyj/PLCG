/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14290
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
    var_15 = ((/* implicit */unsigned char) 5511297238959261735LL);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (short)30598)) : (((/* implicit */int) (short)-30594))));
        arr_2 [i_0] = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */int) var_8)) != ((-(((/* implicit */int) (unsigned short)18))))))), (min((((/* implicit */long long int) ((int) 7733913459629319218LL))), (((arr_1 [i_0 - 1] [i_0]) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0)))))))));
    }
}
