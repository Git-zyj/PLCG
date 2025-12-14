/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124480
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */long long int) ((((((/* implicit */_Bool) min((-1431839702320940148LL), (964198934498326379LL)))) ? (((var_8) ? (964198934498326375LL) : (479986811121255657LL))) : (1955700301084045936LL))) <= (var_3)));
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */long long int) var_8);
                    var_14 = ((/* implicit */_Bool) ((long long int) ((((((/* implicit */_Bool) var_3)) ? (964198934498326367LL) : (-964198934498326388LL))) | (((((/* implicit */_Bool) 0LL)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [(_Bool)1]))))))));
                    var_15 = (~((~(arr_3 [i_0]))));
                    var_16 = ((/* implicit */long long int) ((_Bool) (((!(var_10))) ? (min((arr_8 [i_0] [i_0] [i_0]), (964198934498326379LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [8LL] [8LL])) || (var_4))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_3 = 2; i_3 < 24; i_3 += 1) 
    {
        for (unsigned int i_4 = 1; i_4 < 22; i_4 += 4) 
        {
            {
                var_17 = min((((((/* implicit */_Bool) ((long long int) (_Bool)1))) ? (964198934498326379LL) : (max((arr_12 [i_3]), (((/* implicit */long long int) var_13)))))), (((/* implicit */long long int) min(((_Bool)0), (var_10)))));
                var_18 += ((/* implicit */long long int) var_6);
                var_19 += ((/* implicit */unsigned int) max((((((/* implicit */_Bool) min((var_7), (3828346239U)))) ? (min((((/* implicit */long long int) arr_18 [4LL] [i_4])), (-964198934498326373LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_3)))))))), (max((min((-964198934498326387LL), (((/* implicit */long long int) arr_18 [4U] [4U])))), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_14 [(_Bool)1] [(_Bool)1])))))))));
            }
        } 
    } 
    var_20 = var_9;
}
