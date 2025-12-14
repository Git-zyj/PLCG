/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108118
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
    for (unsigned long long int i_0 = 3; i_0 < 8; i_0 += 3) 
    {
        var_12 ^= ((/* implicit */unsigned char) arr_1 [i_0]);
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((long long int) arr_0 [i_0]))) + ((((!(((/* implicit */_Bool) arr_0 [i_0])))) ? (arr_1 [i_0 + 1]) : (((/* implicit */unsigned long long int) ((4943373543649367384LL) + (-4943373543649367384LL))))))));
    }
    var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
}
