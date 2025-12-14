/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152510
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
    var_12 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((-1677329363289235736LL) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)72))))) ? ((-9223372036854775807LL - 1LL)) : (((((/* implicit */_Bool) var_8)) ? (var_9) : (var_11)))))) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_5)))));
    var_13 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_7)))) ? (((/* implicit */int) ((signed char) var_5))) : (((((/* implicit */_Bool) 4787821586237394809LL)) ? (((/* implicit */int) (signed char)-111)) : (((/* implicit */int) (signed char)112))))))) ? (var_11) : (var_0));
    var_14 = ((/* implicit */long long int) (-(((/* implicit */int) var_3))));
    var_15 = ((/* implicit */signed char) ((((((/* implicit */int) var_4)) != (((/* implicit */int) var_2)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((var_7), (((/* implicit */long long int) var_10)))))))) : ((-(((/* implicit */int) var_8))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 18; i_2 += 3) 
            {
                {
                    arr_8 [i_2] [5LL] [i_2] [i_2 + 1] = ((/* implicit */signed char) ((long long int) ((((/* implicit */int) var_8)) + (((/* implicit */int) (signed char)-111)))));
                    arr_9 [i_1] [i_2 + 1] [i_2] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775807LL))))) % (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)23)) : (((/* implicit */int) arr_2 [i_0]))))))) ? (((long long int) ((long long int) 8564027878469422868LL))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) min((arr_7 [i_1] [i_2]), (var_8)))))));
                    var_16 = ((/* implicit */long long int) max(((-((-(((/* implicit */int) arr_2 [i_0])))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) var_3))))))));
                    var_17 = (~((~(arr_6 [(signed char)4]))));
                    var_18 = ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_6)))) : ((~(min((arr_3 [i_1]), (arr_1 [i_0]))))));
                }
            } 
        } 
    } 
}
