/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149990
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) arr_2 [i_0]);
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) 0ULL);
        arr_6 [i_0] [i_0] = 18446744073709551615ULL;
        var_17 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((-290515592) + (2147483647))) << (((18446744073709551609ULL) - (18446744073709551609ULL)))))) / (14540762013632060112ULL)));
    }
    var_18 *= ((/* implicit */_Bool) max((max((((15919279379393151227ULL) ^ (((/* implicit */unsigned long long int) -2021866955)))), (var_9))), (((/* implicit */unsigned long long int) ((unsigned char) var_4)))));
}
