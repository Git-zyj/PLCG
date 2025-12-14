/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166325
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
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */long long int) -336217983)) * (0LL)))))))));
        var_19 = min((((/* implicit */signed char) (_Bool)1)), ((signed char)-18));
    }
    for (long long int i_1 = 0; i_1 < 17; i_1 += 3) 
    {
        var_20 |= ((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_1] [i_1]))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_2 = 4; i_2 < 15; i_2 += 1) 
        {
            arr_8 [i_1] [i_1] = ((/* implicit */int) arr_6 [i_2] [i_2 - 1]);
            var_21 -= var_11;
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 13; i_3 += 4) 
    {
        arr_13 [(signed char)10] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_3])) ? (var_3) : ((((_Bool)1) ? (((/* implicit */int) var_4)) : (-1)))));
        arr_14 [i_3] [1] = ((/* implicit */_Bool) (~(var_12)));
    }
    for (long long int i_4 = 0; i_4 < 23; i_4 += 1) 
    {
        arr_18 [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */int) var_8)) - (((((/* implicit */_Bool) 27)) ? (var_1) : (((((/* implicit */_Bool) arr_16 [(signed char)0])) ? (var_3) : (((/* implicit */int) (signed char)-118))))))));
        var_22 = ((/* implicit */long long int) ((int) min(((~(var_16))), (((arr_17 [i_4]) >> (((arr_17 [i_4]) - (1210680599))))))));
    }
    var_23 = ((/* implicit */int) max((((((/* implicit */long long int) ((/* implicit */int) ((signed char) var_4)))) | ((((_Bool)1) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_8))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_9)) / (var_13)))) ? (((/* implicit */int) var_15)) : (((var_2) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_5)))))))));
    var_24 = ((/* implicit */long long int) (~((+(((var_16) + (var_14)))))));
    var_25 = min((((/* implicit */long long int) (~(((/* implicit */int) min((var_4), (var_7))))))), (min((((var_13) / (var_13))), (((/* implicit */long long int) ((var_1) / (((/* implicit */int) (signed char)-18))))))));
}
