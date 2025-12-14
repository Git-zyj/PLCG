/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164804
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
    var_17 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned int) var_15))));
    var_18 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) 2910141846U)))) && (((/* implicit */_Bool) var_1))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) ((_Bool) var_0))))));
                arr_6 [i_0] [i_1] = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) ((var_11) ? (((/* implicit */long long int) var_7)) : (arr_1 [i_0] [i_0])))) ? (((((/* implicit */_Bool) 1384825471U)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) 1043379344)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [(signed char)10] [(signed char)10] [(signed char)10])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_11))))))));
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_15))) != (arr_1 [i_0] [i_1])));
                var_20 = ((/* implicit */unsigned int) arr_5 [i_1]);
                arr_8 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_7)))) <= (min((((/* implicit */long long int) ((int) 13531335838399120412ULL))), (((arr_1 [i_1] [i_1]) - (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_1])))))))));
            }
        } 
    } 
    var_21 += ((/* implicit */unsigned short) var_5);
}
