/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10003
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
    var_12 = 18446744073709551615ULL;
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1] = ((((long long int) arr_3 [i_0] [i_1] [i_1 - 2])) - (((/* implicit */long long int) (~(((/* implicit */int) (!(arr_4 [i_0] [i_1] [i_1]))))))));
                var_13 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1 - 2] [i_1 + 1] [i_1 + 1])) ? (((/* implicit */int) arr_0 [i_1 - 2])) : (((/* implicit */int) ((unsigned short) arr_1 [i_1])))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_1 + 1])) % (((/* implicit */int) arr_1 [i_1 - 2]))))) : (max((((/* implicit */long long int) max((((/* implicit */unsigned short) arr_4 [i_1] [i_1] [i_1])), (arr_2 [i_0] [i_0] [i_0])))), (((long long int) var_10))))));
                var_14 = ((/* implicit */long long int) ((unsigned short) max((arr_3 [i_1 - 1] [i_0] [i_0]), (var_10))));
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_1 + 1])) - (((/* implicit */int) arr_0 [i_1 + 1]))))), (max((((/* implicit */long long int) (+(7864320U)))), ((+(8521215115264LL)))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)14))));
    var_16 &= ((/* implicit */int) var_2);
}
