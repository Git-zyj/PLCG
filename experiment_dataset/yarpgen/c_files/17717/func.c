/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17717
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
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */_Bool) ((((_Bool) arr_2 [i_0 + 2])) ? (max((arr_2 [i_0 + 3]), (((/* implicit */unsigned long long int) arr_0 [i_1 + 3])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1 - 1])))));
                var_12 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0 + 1] [i_1 + 3])) ? (arr_5 [(unsigned short)10] [i_0 + 2] [i_1 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (arr_4 [i_0 - 1]) : (((((/* implicit */_Bool) arr_0 [i_0 + 3])) ? (arr_4 [i_0 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 3])))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned char) max((var_0), (((/* implicit */int) ((8830761371187492281LL) == (8830761371187492305LL))))));
}
