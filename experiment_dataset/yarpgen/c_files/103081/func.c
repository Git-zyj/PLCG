/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103081
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
    var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) 926850961))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 9; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */long long int) min((var_14), (min((((/* implicit */long long int) (+(((/* implicit */int) var_4))))), (max((max((((/* implicit */long long int) var_11)), (-7125140249787378232LL))), (((((/* implicit */_Bool) 861315911)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_3 [i_1])))))))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 8; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 9; i_3 += 1) 
                    {
                        {
                            var_15 ^= ((/* implicit */unsigned int) arr_5 [i_0]);
                            var_16 += ((/* implicit */long long int) min((var_7), (((/* implicit */short) ((((/* implicit */int) (short)-22652)) == (((/* implicit */int) max(((short)-22652), ((short)22670)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
