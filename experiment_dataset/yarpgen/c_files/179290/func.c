/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179290
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
    var_14 = ((/* implicit */unsigned char) var_3);
    var_15 = ((/* implicit */unsigned char) 5736648994942126036LL);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(arr_2 [i_0]))))));
        arr_4 [(unsigned char)6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_1 [i_0]), (arr_1 [i_0])))) ? (arr_1 [i_0]) : (max((((/* implicit */long long int) var_13)), (var_2)))));
    }
    for (long long int i_1 = 0; i_1 < 10; i_1 += 4) /* same iter space */
    {
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned long long int) var_4);
        var_16 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned long long int) var_13))))))))));
    }
}
