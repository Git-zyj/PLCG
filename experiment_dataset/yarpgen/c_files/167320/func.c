/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167320
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
    var_19 = -5133785471062716607LL;
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        arr_3 [i_0] [5LL] = ((long long int) ((arr_1 [3LL]) < (var_5)));
        arr_4 [i_0] = ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -6640048064564404180LL)))))) | ((+(arr_1 [i_0]))));
        var_20 = ((long long int) arr_1 [i_0]);
    }
    var_21 = 7566953042819020906LL;
}
