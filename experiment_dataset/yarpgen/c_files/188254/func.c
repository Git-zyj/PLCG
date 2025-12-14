/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188254
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
    var_18 = ((/* implicit */unsigned long long int) (unsigned short)10351);
    var_19 = (unsigned short)10358;
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        arr_3 [19ULL] [19ULL] &= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (signed char)3)), (max(((unsigned short)10341), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)55184)) && (((/* implicit */_Bool) (unsigned short)10351)))))))));
        var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])), (var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [(signed char)7] [1ULL])) || (((/* implicit */_Bool) arr_0 [i_0] [(unsigned short)6])))))) : (9223363240761753600ULL))))));
    }
}
