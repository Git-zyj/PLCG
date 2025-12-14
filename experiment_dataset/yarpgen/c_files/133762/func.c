/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133762
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
    var_15 = ((((/* implicit */int) (signed char)64)) >= (((/* implicit */int) (signed char)37)));
    var_16 ^= ((/* implicit */unsigned int) ((long long int) ((unsigned int) ((((/* implicit */int) var_4)) < (((/* implicit */int) var_8))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned int) ((((_Bool) arr_1 [i_0])) || ((!(arr_4 [i_0] [i_1] [i_1])))));
                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) >> ((((((_Bool)1) ? (arr_3 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_1] [i_0]))))) - (17008263694276794924ULL)))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)21821))) : (((((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_0] [i_0] [i_1])) ^ (((/* implicit */int) arr_1 [i_0]))))) & (((6539800828358434786LL) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)54)))))))));
                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [(short)8])) ? (((((/* implicit */_Bool) (signed char)123)) ? (-1647733546) : (((/* implicit */int) (signed char)102)))) : (((/* implicit */int) arr_4 [(signed char)6] [i_1] [4ULL]))))) ? ((-(((/* implicit */int) arr_2 [(_Bool)1] [i_1] [(_Bool)1])))) : (((/* implicit */int) (((+(((/* implicit */int) (_Bool)1)))) > (((((/* implicit */_Bool) (short)-21821)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (signed char)22))))))))))));
            }
        } 
    } 
    var_20 = (~((~((~(((/* implicit */int) (_Bool)1)))))));
    var_21 = min((((/* implicit */unsigned int) min((((var_4) ? ((-2147483647 - 1)) : (((/* implicit */int) (signed char)124)))), (((/* implicit */int) ((((/* implicit */_Bool) 2147483647)) || (((/* implicit */_Bool) (short)21821)))))))), (var_13));
}
