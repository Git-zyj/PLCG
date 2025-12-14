/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170956
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
    var_13 = ((/* implicit */short) var_4);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        arr_2 [7] = ((/* implicit */_Bool) max((max((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)15)) < (((/* implicit */int) (unsigned char)255))))), (((((/* implicit */_Bool) 2188467709781779034LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)126))) : (arr_1 [(unsigned char)0]))))), (((/* implicit */long long int) min((arr_0 [i_0]), (arr_0 [2]))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_0])) == (((0) | (2147483647)))));
        var_14 = arr_0 [i_0];
    }
    var_15 = ((/* implicit */_Bool) max(((+(((/* implicit */int) ((_Bool) -2036328093))))), (((/* implicit */int) (short)-32761))));
}
