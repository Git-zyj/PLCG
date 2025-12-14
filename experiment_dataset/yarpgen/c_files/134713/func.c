/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134713
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
    var_14 -= ((/* implicit */long long int) var_13);
    var_15 = ((/* implicit */unsigned int) min((var_15), (var_9)));
    var_16 ^= ((/* implicit */unsigned long long int) -806083212);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 2; i_0 < 9; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */_Bool) arr_0 [i_0]);
        var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) arr_0 [i_0]))));
        arr_4 [(signed char)4] = ((/* implicit */long long int) arr_0 [i_0]);
    }
    for (unsigned int i_1 = 2; i_1 < 9; i_1 += 4) /* same iter space */
    {
        arr_8 [i_1] = ((/* implicit */_Bool) (-(min(((+(arr_6 [i_1]))), (((/* implicit */unsigned long long int) var_4))))));
        /* LoopNest 3 */
        for (unsigned short i_2 = 3; i_2 < 9; i_2 += 3) 
        {
            for (unsigned short i_3 = 2; i_3 < 7; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 2; i_4 < 8; i_4 += 3) 
                {
                    {
                        arr_18 [i_1 + 1] [i_2] = ((/* implicit */int) (!(arr_10 [i_1] [i_2] [i_1])));
                        arr_19 [i_4] [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_1 - 2])) ? (((/* implicit */unsigned int) 32752)) : (arr_15 [i_2] [i_2 + 1] [i_4 + 1] [i_4])));
                    }
                } 
            } 
        } 
        arr_20 [i_1] = (~(arr_15 [i_1 + 1] [1ULL] [i_1] [2LL]));
        arr_21 [i_1 + 1] = 562949953419264LL;
    }
    for (int i_5 = 0; i_5 < 17; i_5 += 4) 
    {
        arr_24 [i_5] = ((/* implicit */_Bool) var_10);
        arr_25 [i_5] [8U] = min((((/* implicit */unsigned int) ((int) var_5))), (((((/* implicit */_Bool) min((((/* implicit */unsigned int) 32759)), (var_9)))) ? (((((/* implicit */_Bool) -806083212)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (2785828166U))) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_6), (((/* implicit */signed char) arr_23 [i_5])))))))));
    }
    var_18 -= ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) -806083206)) ? (-7998925298033834376LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)59458)))))) ? (((/* implicit */int) var_10)) : (((((/* implicit */int) var_0)) ^ (-32760))))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6))))));
}
