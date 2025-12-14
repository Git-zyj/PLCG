/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181985
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
    var_19 = ((/* implicit */unsigned int) var_15);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (long long int i_1 = 4; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    var_20 = ((/* implicit */short) (~((+(((/* implicit */int) var_2))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6LL)) ? ((-(((/* implicit */int) (unsigned char)2)))) : (((/* implicit */int) (_Bool)1))));
                                var_22 = ((/* implicit */unsigned char) ((var_11) ? (((var_13) >> (((/* implicit */int) (short)2)))) : (((((/* implicit */unsigned int) var_1)) ^ (var_17)))));
                                var_23 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (7822513180085130507LL) : (((/* implicit */long long int) var_18))))) ? (((((/* implicit */_Bool) (short)22677)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_4))) : (var_4)));
                            }
                        } 
                    } 
                }
                var_24 = ((/* implicit */_Bool) (-(min((((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-21411))) != (var_15)))), (var_0)))));
            }
        } 
    } 
}
