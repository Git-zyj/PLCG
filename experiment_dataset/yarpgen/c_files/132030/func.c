/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132030
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
    for (unsigned char i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        var_20 = 629414032;
        arr_4 [(unsigned char)5] &= ((/* implicit */short) (!(((((/* implicit */_Bool) 18384468726696700907ULL)) && (((/* implicit */_Bool) max((arr_1 [i_0] [0]), (((/* implicit */int) (unsigned char)39)))))))));
        var_21 = ((/* implicit */unsigned int) (short)31600);
        arr_5 [i_0] = ((/* implicit */unsigned long long int) var_7);
    }
    var_22 += ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_19))))) ? (max((((/* implicit */unsigned long long int) var_5)), (var_1))) : (62275347012850708ULL))))));
}
