/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137723
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
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (long long int i_2 = 2; i_2 < 18; i_2 += 2) 
            {
                {
                    var_16 = max((((((/* implicit */_Bool) ((long long int) var_12))) ? (max((0LL), (-15LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0])) && (((/* implicit */_Bool) arr_1 [i_0] [i_0])))))))), (((((/* implicit */_Bool) 0LL)) ? (5223965174080025643LL) : (0LL))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 3; i_3 < 17; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) (((-9223372036854775807LL - 1LL)) <= (arr_1 [i_0] [i_3]))))));
                                var_18 = (~(5271262486291078210LL));
                                var_19 ^= ((((long long int) ((long long int) -5271262486291078211LL))) * (0LL));
                                var_20 = ((/* implicit */long long int) max((var_20), (arr_3 [i_0 + 1] [i_0 + 1])));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 20; i_5 += 3) 
                    {
                        for (long long int i_6 = 2; i_6 < 18; i_6 += 3) 
                        {
                            {
                                var_21 &= ((((/* implicit */_Bool) -6168330905194111227LL)) ? (-6168330905194111227LL) : (min((((((/* implicit */_Bool) -7872213397710521464LL)) ? (0LL) : ((-9223372036854775807LL - 1LL)))), (0LL))));
                                var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0 - 1] [i_6] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1118129838358021852LL)))))) : (min((-1LL), (var_2)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(9223372036854775807LL)))) ? ((+(arr_6 [i_1] [i_1] [i_0 + 2]))) : ((+(9223372036854775807LL))))))));
                                arr_16 [i_1] [i_6] [i_1] [i_5] [16LL] = 4398029733888LL;
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_7 = 1; i_7 < 15; i_7 += 2) 
    {
        for (long long int i_8 = 0; i_8 < 17; i_8 += 2) 
        {
            for (long long int i_9 = 2; i_9 < 13; i_9 += 2) 
            {
                {
                    arr_27 [i_7 + 1] [i_7] [i_7] [i_7 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_7 - 1] [i_7 - 1])) ? (((((/* implicit */_Bool) arr_23 [i_7] [i_8] [i_9])) ? (-1LL) : (arr_9 [i_7] [i_7] [i_9]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 2LL)) && (((/* implicit */_Bool) arr_8 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]))))))))) && (((/* implicit */_Bool) arr_12 [i_7] [i_8] [i_9]))));
                    var_23 = var_9;
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_10 = 0; i_10 < 17; i_10 += 2) 
                    {
                        arr_30 [i_7] [i_9] [i_7 + 1] [i_7] = (+(9223372036854775803LL));
                        var_24 = arr_11 [19LL] [i_7 + 1] [i_8] [i_7 + 1];
                        var_25 = ((((long long int) arr_23 [i_7] [i_8] [i_9])) / (arr_0 [i_7] [i_7 - 1]));
                        arr_31 [i_7] [i_8] [i_8] [i_8] [i_7] = ((((/* implicit */_Bool) (~(arr_2 [i_7] [i_7])))) ? (arr_26 [i_8]) : (((((/* implicit */_Bool) arr_11 [i_7] [i_7 + 2] [i_7 + 2] [i_7 + 2])) ? (arr_20 [i_10]) : (-14LL))));
                        var_26 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_11 [i_7] [i_7 + 2] [i_7 + 2] [i_7]))));
                    }
                }
            } 
        } 
    } 
}
