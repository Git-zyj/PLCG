/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116221
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
    var_19 = ((/* implicit */unsigned long long int) var_9);
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 16; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        {
                            var_20 ^= ((/* implicit */unsigned int) (-(max((((/* implicit */unsigned long long int) arr_1 [i_3])), (max((((/* implicit */unsigned long long int) var_18)), (13235301445844363067ULL)))))));
                            var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) arr_2 [12LL] [i_2] [12LL]))));
                        }
                    } 
                } 
                var_22 += ((/* implicit */short) ((var_16) ? (max((((/* implicit */long long int) (short)23946)), (((((/* implicit */_Bool) 4294967268U)) ? (((/* implicit */long long int) arr_1 [i_0])) : (-4334396766122311139LL))))) : (((/* implicit */long long int) -2147483642))));
                arr_8 [i_0] [i_0] = var_13;
                var_23 = ((/* implicit */unsigned short) (~(((((/* implicit */unsigned long long int) ((var_15) ? (arr_1 [(_Bool)1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) ^ (((((/* implicit */_Bool) arr_5 [i_0 + 2] [i_1] [i_0] [i_1 + 2])) ? (15410818961420612620ULL) : (((/* implicit */unsigned long long int) arr_7 [i_0] [15U] [i_0] [15U] [6ULL]))))))));
            }
        } 
    } 
}
