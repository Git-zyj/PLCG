/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161915
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
    var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) 0ULL))));
    var_13 &= ((/* implicit */signed char) (~(var_2)));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    var_14 += ((/* implicit */unsigned long long int) max((-7017330645647806458LL), (((/* implicit */long long int) var_2))));
                    arr_8 [i_2] [i_1] = ((/* implicit */unsigned int) arr_7 [i_1] [i_2]);
                }
            } 
        } 
    } 
    var_15 |= ((/* implicit */_Bool) var_2);
    /* LoopNest 3 */
    for (long long int i_3 = 0; i_3 < 18; i_3 += 4) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (long long int i_5 = 0; i_5 < 18; i_5 += 2) 
            {
                {
                    arr_15 [i_5] [10LL] [i_4] [i_5] &= ((/* implicit */unsigned char) (+((-(18446744073709551615ULL)))));
                    var_16 += ((/* implicit */unsigned int) var_10);
                    var_17 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) var_9)) % (arr_14 [i_4])))) | (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_6 [i_3] [i_3] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (((/* implicit */unsigned long long int) var_2)) : (((0ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))));
                    var_18 = ((/* implicit */unsigned short) ((2ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
                }
            } 
        } 
    } 
}
