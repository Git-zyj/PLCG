/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163788
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
    var_19 = ((/* implicit */_Bool) min(((-((-(4294967232LL))))), (var_18)));
    var_20 = ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)-31811))) & (-7588939890131732122LL)))) ? ((~(((/* implicit */int) var_9)))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) ((((/* implicit */int) (short)24)) == (87373612)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_18))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_2 [i_0] [4U] = ((/* implicit */signed char) var_11);
        arr_3 [i_0] = ((/* implicit */_Bool) arr_0 [i_0]);
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0])));
        arr_5 [(signed char)4] = ((/* implicit */int) ((arr_1 [i_0]) * (((/* implicit */unsigned long long int) var_7))));
    }
    var_21 = ((/* implicit */unsigned short) (_Bool)1);
}
