/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120830
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
    var_16 = ((/* implicit */long long int) (short)15);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 23; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 3; i_1 < 21; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 21; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                var_17 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_8) : (((/* implicit */unsigned int) var_0))))));
                                var_18 ^= ((/* implicit */unsigned long long int) min((((/* implicit */int) arr_0 [i_0 + 1])), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) (unsigned short)31115))))));
                                var_19 = ((/* implicit */long long int) var_2);
                            }
                        } 
                    } 
                    var_20 = ((((/* implicit */_Bool) ((arr_1 [i_0 + 1] [i_1 + 3]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_1] [i_1] [i_1] [i_2])))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)53)) || (((/* implicit */_Bool) 1119293585))))) : (((((/* implicit */_Bool) arr_1 [i_2] [i_0 + 1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_10 [i_0 - 2] [i_0 + 1] [i_0 + 1] [i_1 + 1] [i_2])))));
                    arr_11 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) var_9);
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (-(var_0))))));
    }
}
