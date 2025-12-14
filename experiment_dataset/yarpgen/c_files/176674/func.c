/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176674
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
    var_14 = ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (((((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) 3744744506U)) : (var_8))) * (((/* implicit */long long int) var_0)))));
    var_15 = var_8;
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((arr_0 [i_1 - 1]), (arr_0 [i_1 - 1]))))));
                var_16 = ((((/* implicit */_Bool) (~(4503599627370494LL)))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((((/* implicit */_Bool) (unsigned char)169)) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1 + 1] [4LL]))))) : (((arr_3 [i_0] [i_0] [i_0]) ? (arr_1 [i_1 + 1]) : (((/* implicit */long long int) arr_5 [i_0])))))) : (((/* implicit */long long int) 4294967293U)));
            }
        } 
    } 
}
