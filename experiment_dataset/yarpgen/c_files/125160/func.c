/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125160
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
    var_11 -= ((/* implicit */unsigned char) (+(((((/* implicit */int) (!(var_0)))) | (min((((/* implicit */int) var_9)), (var_10)))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 2; i_2 < 12; i_2 += 4) 
                {
                    for (unsigned int i_3 = 2; i_3 < 13; i_3 += 2) 
                    {
                        {
                            var_12 = ((/* implicit */unsigned int) arr_2 [i_0]);
                            var_13 *= ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_4), (0ULL)))) ? (((/* implicit */int) ((short) arr_7 [i_1] [i_2 + 2]))) : (min((var_10), (((/* implicit */int) arr_7 [i_3] [i_2 + 1]))))));
                            var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_0) ? (var_4) : (arr_13 [i_3] [10U] [i_2 - 1] [(signed char)10])))) ? (arr_13 [i_3] [i_3] [i_2 + 2] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_13 [i_3] [i_3] [i_2 - 2] [i_3])))))))));
                        }
                    } 
                } 
                arr_15 [i_0] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((signed char) var_3))), (((((/* implicit */_Bool) min((0ULL), (((/* implicit */unsigned long long int) var_8))))) ? (((/* implicit */unsigned long long int) ((var_10) | (((/* implicit */int) arr_11 [i_0]))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_0 [i_0])))))));
                var_15 = ((/* implicit */signed char) min((0ULL), (2073361014046253822ULL)));
            }
        } 
    } 
}
