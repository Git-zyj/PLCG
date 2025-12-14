/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164277
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
    var_17 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_12)))) & (((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) ((16055571135070982405ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) ? ((-(((/* implicit */int) (short)24459)))) : (((/* implicit */int) var_7)))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */int) var_3)) % (((/* implicit */int) var_1)))))));
    var_18 = ((/* implicit */unsigned short) ((_Bool) var_4));
    var_19 = ((/* implicit */unsigned char) var_13);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 15; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) ((unsigned long long int) arr_0 [i_0])))) ? (((/* implicit */int) ((unsigned char) ((unsigned long long int) arr_3 [i_0])))) : (((/* implicit */int) ((((/* implicit */int) arr_2 [i_1 + 3] [i_0])) == (((/* implicit */int) var_14))))))))));
                var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((unsigned long long int) ((_Bool) ((((/* implicit */int) (short)-24459)) != (arr_3 [i_0]))))))));
            }
        } 
    } 
}
