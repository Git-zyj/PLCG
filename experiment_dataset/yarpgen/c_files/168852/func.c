/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168852
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
    var_17 = max((min((var_15), (max((-1400609110508194127LL), (((/* implicit */long long int) 16256U)))))), (min((min((((/* implicit */long long int) var_7)), (var_14))), (((/* implicit */long long int) (~(var_1)))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 11; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */unsigned long long int) 1677103137U);
                    var_19 = max((((((/* implicit */unsigned int) ((/* implicit */int) var_0))) | (arr_7 [i_0] [i_0] [i_0] [i_0 - 3]))), ((~(arr_7 [i_0] [i_0] [i_0] [i_0 - 2]))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 13; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) (_Bool)1))))));
                                arr_15 [i_0] [i_0] [(signed char)11] [i_3] = ((int) 2868481210U);
                                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)0)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14703)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
