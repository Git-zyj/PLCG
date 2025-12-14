/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167523
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
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) min((((/* implicit */short) ((_Bool) var_12))), (var_8)))) : (((var_3) ? (var_5) : (((/* implicit */int) var_8))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    arr_10 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */long long int) 134152192U)) & (-5107992762640034946LL)));
                    var_17 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_12)), (((((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) var_10)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))) : (arr_9 [i_0] [3U] [i_2])))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned int) var_0);
    /* LoopNest 3 */
    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 3) 
    {
        for (int i_4 = 0; i_4 < 10; i_4 += 4) 
        {
            for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
            {
                {
                    var_19 |= ((/* implicit */unsigned int) (((~(((((/* implicit */_Bool) arr_16 [i_4])) ? (arr_4 [i_4] [i_5 + 1]) : (((/* implicit */unsigned long long int) arr_8 [i_4] [2ULL])))))) != (((/* implicit */unsigned long long int) 5107992762640034945LL))));
                    arr_20 [i_3] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((unsigned int) arr_6 [i_3] [i_5 + 1] [i_5])) : (((((/* implicit */_Bool) var_0)) ? (arr_6 [i_4] [i_5 + 1] [(_Bool)1]) : (arr_6 [i_4] [i_5 + 1] [i_5 + 1])))));
                }
            } 
        } 
    } 
}
