/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111988
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 3; i_3 < 17; i_3 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned int) ((((((arr_1 [i_1]) + (9223372036854775807LL))) << (((((arr_1 [i_0]) + (6135831015051357336LL))) - (35LL))))) & (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_1 [i_0])))));
                            var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (+(((/* implicit */int) arr_2 [i_1] [i_2] [i_3])))))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned long long int) (~((~(arr_1 [i_0])))));
            }
        } 
    } 
    var_20 = ((/* implicit */short) var_11);
}
