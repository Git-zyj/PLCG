/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17764
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
    var_11 = min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) (short)-22129))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 4294967294U)))))))), (((((((/* implicit */_Bool) 2147483647)) || (((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) : (var_8))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 3; i_2 < 14; i_2 += 4) 
            {
                {
                    var_12 += var_7;
                    var_13 = ((/* implicit */_Bool) min((min((arr_6 [i_2] [i_1] [(_Bool)1] [i_1]), (((/* implicit */long long int) 2U)))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_1 - 1])) ? (((/* implicit */int) (short)19939)) : (arr_1 [i_0]))))));
                    arr_7 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_5 [(_Bool)1] [(_Bool)1] [i_2 - 3]))))) | (((unsigned int) arr_6 [i_2] [i_2] [i_0] [i_2]))))) ? (min((arr_6 [i_2] [i_2 + 2] [i_2 + 2] [(unsigned short)10]), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [i_1] [i_0]))) * (2871784264U)))))) : (((/* implicit */long long int) max((arr_0 [i_1]), (arr_0 [i_2 - 3]))))));
                    var_14 = ((short) (-2147483647 - 1));
                }
            } 
        } 
    } 
}
