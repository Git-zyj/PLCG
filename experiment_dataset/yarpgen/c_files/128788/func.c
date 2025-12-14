/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128788
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_1] = max((((((/* implicit */_Bool) -2170769077185661310LL)) ? (arr_3 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))), (((/* implicit */unsigned int) ((int) arr_0 [i_0] [i_0]))));
                var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) 2170769077185661312LL)) ? (var_18) : (-2170769077185661312LL))), (((/* implicit */long long int) arr_1 [i_0]))))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) var_8);
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 16; i_2 += 1) 
    {
        for (int i_3 = 0; i_3 < 16; i_3 += 3) 
        {
            {
                var_21 &= ((/* implicit */signed char) max((((/* implicit */long long int) ((signed char) arr_7 [i_2]))), (var_18)));
                arr_9 [i_2] [i_3] = (+(((long long int) arr_8 [(_Bool)1] [3U] [13LL])));
                var_22 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_6 [3ULL] [i_3])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_7 [i_2]))))) : (((unsigned int) ((unsigned short) var_12)))));
                arr_10 [i_3] [i_3] = ((/* implicit */long long int) (signed char)2);
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) var_8))));
    var_24 = ((/* implicit */short) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_1))));
}
