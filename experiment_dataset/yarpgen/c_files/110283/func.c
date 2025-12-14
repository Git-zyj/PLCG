/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110283
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
    var_10 = ((/* implicit */unsigned int) var_2);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_11 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned long long int) ((2060052981) & (528601521))))))) ? (max((((3230534120804130520ULL) * (15216209952905421073ULL))), (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_1 [i_0]))))));
        var_12 = ((/* implicit */signed char) max((min((((/* implicit */unsigned long long int) max((arr_2 [i_0]), (arr_2 [19])))), (((3230534120804130536ULL) + (((/* implicit */unsigned long long int) arr_1 [i_0])))))), (((((/* implicit */unsigned long long int) (+(arr_2 [i_0])))) * (((((/* implicit */_Bool) arr_2 [(short)0])) ? (15216209952905421095ULL) : (((/* implicit */unsigned long long int) 1232891608))))))));
    }
}
