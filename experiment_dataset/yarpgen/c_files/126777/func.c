/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126777
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
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_11)))) ? (((/* implicit */long long int) min((530304135U), (((/* implicit */unsigned int) var_17))))) : (((((/* implicit */_Bool) 530304115U)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_17)))))))) ? (min((((((/* implicit */_Bool) (signed char)-91)) ? (3764663161U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))), (((((/* implicit */_Bool) -1438207101)) ? (390504228U) : (((/* implicit */unsigned int) -261763290)))))) : (((((/* implicit */_Bool) max((var_0), (var_0)))) ? (var_1) : (((((/* implicit */_Bool) 530304115U)) ? (var_7) : (var_1)))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)0)) > (-545371955)));
                arr_5 [i_0] [i_0] = max((arr_1 [i_1] [i_0]), (((/* implicit */unsigned int) arr_2 [i_0])));
                arr_6 [i_0] = ((/* implicit */signed char) max((((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_1])))))) : (var_14))), (((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */int) (signed char)77)), (0)))))))));
                var_21 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) 530304115U)) ? (((/* implicit */int) (signed char)0)) : (515905004)));
            }
        } 
    } 
    var_22 = (~((((!(((/* implicit */_Bool) 545371937)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (signed char)-91))))) : (var_12))));
    var_23 = ((/* implicit */unsigned char) var_10);
}
