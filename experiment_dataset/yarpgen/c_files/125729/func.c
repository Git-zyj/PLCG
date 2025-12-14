/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125729
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
    var_18 = ((var_10) << (((((long long int) var_2)) - (6138418864803237103LL))));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 21; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (long long int i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    var_19 = ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((long long int) -1LL)) : (((((/* implicit */_Bool) arr_3 [i_0 + 2] [i_0 + 1])) ? (arr_6 [i_0 + 2] [i_0] [i_0 + 1] [i_0 + 2]) : (((/* implicit */long long int) ((/* implicit */int) ((arr_4 [i_0]) > (14LL))))))));
                    arr_7 [i_0] [5LL] [i_1] [i_0] = ((((/* implicit */_Bool) -1LL)) ? (16383LL) : (1LL));
                    arr_8 [i_0] [i_0] [i_2] = (-((~((~(var_9))))));
                    arr_9 [i_0] [i_0] = min(((-(-3636204035345001458LL))), (((((/* implicit */_Bool) ((arr_3 [i_0 + 2] [18LL]) + (var_3)))) ? (min((2686658104336662715LL), (arr_0 [i_1]))) : (((((/* implicit */_Bool) 5293007025448885425LL)) ? ((-9223372036854775807LL - 1LL)) : (var_13))))));
                }
                /* vectorizable */
                for (long long int i_3 = 0; i_3 < 23; i_3 += 4) 
                {
                    arr_12 [i_0] [i_1] [i_1] = ((((/* implicit */_Bool) arr_10 [i_0 - 2] [i_1] [i_0 - 2])) ? (arr_10 [i_0 - 2] [i_1] [i_1]) : (arr_10 [i_0 - 2] [i_1] [i_0 - 2]));
                    arr_13 [i_0 + 2] [17LL] [i_0] = arr_0 [17LL];
                    arr_14 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((arr_11 [i_0]) ^ (var_10))))));
                }
                arr_15 [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(arr_11 [i_0]))))));
                arr_16 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) var_15)) ? ((-(arr_3 [i_0 - 1] [i_0 - 1]))) : (((long long int) ((((/* implicit */_Bool) var_3)) ? (var_6) : (6834937014719850625LL)))));
                var_20 = ((((/* implicit */_Bool) var_11)) ? ((~(905482221536484948LL))) : (((((/* implicit */_Bool) arr_1 [i_0 - 3])) ? (arr_4 [i_0]) : (arr_1 [i_0 - 1]))));
            }
        } 
    } 
    var_21 &= (((-9223372036854775807LL - 1LL)) ^ (0LL));
}
