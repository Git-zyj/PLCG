/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135145
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) 0LL)) || ((_Bool)1)));
        var_12 = ((/* implicit */int) ((long long int) max((((/* implicit */long long int) ((_Bool) 1920491203))), (((((/* implicit */_Bool) 2351560386U)) ? (((/* implicit */long long int) 1920491212)) : (-5312069611382583210LL))))));
        arr_3 [i_0] = ((/* implicit */int) ((unsigned char) 1920491200));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            var_13 = ((int) arr_2 [(unsigned short)14]);
            var_14 = (!(((/* implicit */_Bool) 2499070514U)));
        }
    }
    var_15 -= max((2147483647), (1920491189));
}
