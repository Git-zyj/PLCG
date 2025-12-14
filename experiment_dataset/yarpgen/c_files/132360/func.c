/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132360
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
    var_10 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((((+(((/* implicit */int) (short)-26630)))) + (2147483647))) >> (((((var_8) >> (((/* implicit */int) var_9)))) - (2897201514803903957ULL)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (((390679847608500205LL) / (-390679847608500202LL)))));
    var_11 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((390679847608500205LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65508)))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 4; i_0 < 9; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) arr_1 [i_0 + 2]);
        var_12 = ((/* implicit */_Bool) arr_0 [i_0] [i_0]);
        var_13 = ((/* implicit */long long int) (!(((/* implicit */_Bool) -390679847608500205LL))));
        var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(2362464671164835272ULL)))) ? (arr_1 [i_0]) : (arr_1 [i_0])));
    }
}
