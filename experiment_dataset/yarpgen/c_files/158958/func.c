/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158958
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
    for (signed char i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                arr_7 [i_1] [i_1] = ((/* implicit */signed char) max((max((arr_1 [i_0 - 2]), (arr_2 [i_0 - 2] [i_0 + 2]))), (((((/* implicit */_Bool) ((var_10) & (((/* implicit */long long int) ((/* implicit */int) var_7)))))) ? (max((var_15), (-1LL))) : (max((var_0), (((/* implicit */long long int) var_7))))))));
                var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-55)) ? (((/* implicit */int) (signed char)-55)) : (((/* implicit */int) arr_0 [i_0 + 1] [i_1]))))) ? ((+(-8634098687000809516LL))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_4 [i_0 + 1] [i_1]), (arr_4 [i_0 + 1] [i_1]))))));
                var_18 = ((/* implicit */signed char) max((((((/* implicit */_Bool) var_9)) ? (var_8) : (arr_6 [i_0 + 1]))), (max((min((var_11), (-8634098687000809516LL))), (((((/* implicit */_Bool) 3LL)) ? (arr_1 [i_0]) : (arr_6 [5LL])))))));
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)106)) < (((/* implicit */int) var_16)))))) & (max((var_15), (-2508916035185449602LL)))))) && (((/* implicit */_Bool) (+(((((/* implicit */long long int) ((/* implicit */int) var_9))) - (var_12))))))));
    var_20 = ((/* implicit */long long int) min((var_20), (((((/* implicit */_Bool) (((-(var_8))) & (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_12)))))) ? (((/* implicit */long long int) (+(((((/* implicit */int) var_1)) & (((/* implicit */int) var_16))))))) : (((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) & (min((((/* implicit */long long int) (signed char)-55)), (-1LL)))))))));
    var_21 = min((max((max((var_12), (((/* implicit */long long int) var_14)))), (((/* implicit */long long int) var_6)))), (((/* implicit */long long int) ((signed char) max(((signed char)-1), (var_1))))));
    var_22 = ((long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_6)), (var_4)))) ? (((/* implicit */long long int) ((/* implicit */int) max((var_16), (var_13))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-126))) : (-8876121592943651091LL)))));
}
