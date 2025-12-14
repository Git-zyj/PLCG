/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109055
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
    for (int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_7)), (arr_2 [i_0] [i_0]))))));
        var_20 |= ((/* implicit */unsigned short) min((((arr_2 [i_0] [(unsigned char)14]) | (arr_2 [8ULL] [i_0]))), (579624259877983338ULL)));
        var_21 ^= ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) 10259058421561704344ULL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_15))))));
    }
    var_22 = ((/* implicit */unsigned long long int) var_0);
}
