/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123115
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
    var_10 = ((/* implicit */signed char) (+(((/* implicit */int) var_4))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) 1317300149)))))) ? (((/* implicit */int) ((arr_0 [i_0]) && (var_1)))) : ((-(((((/* implicit */_Bool) 1028291909)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)88))))))));
        var_12 = ((/* implicit */int) min((var_12), ((~(((/* implicit */int) arr_0 [i_0]))))));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            arr_5 [i_0] [i_0] = (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-116)) ? (((/* implicit */int) arr_0 [i_0])) : (var_8)))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (var_3) : (arr_2 [i_1]))) : (((/* implicit */int) max((((/* implicit */signed char) arr_0 [i_1])), ((signed char)0)))))));
            var_13 = ((/* implicit */int) arr_4 [i_0]);
            var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) 1278011492825285212LL))));
        }
        var_15 = max(((~(((((/* implicit */_Bool) var_6)) ? (arr_2 [i_0]) : (1697744078))))), (((/* implicit */int) arr_4 [i_0])));
    }
    for (int i_2 = 0; i_2 < 18; i_2 += 1) 
    {
        var_16 = ((/* implicit */_Bool) (~((-((((_Bool)1) ? (((/* implicit */int) var_1)) : (arr_7 [i_2])))))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 18; i_3 += 4) 
        {
            for (signed char i_4 = 3; i_4 < 17; i_4 += 4) 
            {
                {
                    var_17 ^= ((((/* implicit */_Bool) max((arr_11 [i_2] [i_3] [i_2]), (((/* implicit */long long int) ((((/* implicit */int) arr_13 [i_3] [i_3] [i_3])) ^ (((/* implicit */int) var_4)))))))) || (((/* implicit */_Bool) (signed char)(-127 - 1))));
                    arr_16 [i_2] [i_3] [i_2] = ((((/* implicit */_Bool) (-(arr_14 [i_4] [i_2] [i_2] [i_4 - 1])))) ? (((/* implicit */int) min((((/* implicit */signed char) var_9)), (arr_13 [i_4 - 2] [i_4 - 1] [i_4 - 2])))) : ((~(((/* implicit */int) arr_13 [i_4 - 2] [i_4 - 2] [i_4 + 1])))));
                    arr_17 [i_2] [i_2] [i_2] = ((/* implicit */int) arr_10 [i_2] [i_3] [i_4]);
                }
            } 
        } 
        var_18 = ((/* implicit */int) max((var_18), ((+(((((/* implicit */_Bool) 9223372036854775807LL)) ? (arr_14 [i_2] [10] [i_2] [i_2]) : ((-(((/* implicit */int) var_0))))))))));
    }
    var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) (!(((/* implicit */_Bool) 36028797018701824LL)))))));
    var_20 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) var_5)), (1227502348)))) ? (((((/* implicit */int) var_4)) - (((/* implicit */int) var_1)))) : (((/* implicit */int) var_1))))) ? ((~(((var_0) ? (((/* implicit */int) (signed char)-122)) : (((/* implicit */int) var_2)))))) : ((~((~(((/* implicit */int) (signed char)-122))))))));
}
