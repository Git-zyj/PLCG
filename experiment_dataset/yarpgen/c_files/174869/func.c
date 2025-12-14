/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174869
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
    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) max((max((((/* implicit */unsigned long long int) (-(1105976638)))), (var_14))), (((/* implicit */unsigned long long int) var_1)))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            for (unsigned int i_2 = 4; i_2 < 17; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_3 = 1; i_3 < 16; i_3 += 4) 
                    {
                        arr_9 [i_2] [i_2] [i_1 + 1] [i_0] = ((signed char) arr_7 [i_0]);
                        var_16 = ((/* implicit */unsigned short) arr_2 [i_2] [i_0]);
                        var_17 &= ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) arr_8 [i_0])) ? (-1) : (((/* implicit */int) arr_7 [i_1])))));
                        var_18 -= ((/* implicit */long long int) ((_Bool) arr_5 [i_1 - 1] [i_1 + 2] [i_1]));
                    }
                    /* vectorizable */
                    for (unsigned int i_4 = 0; i_4 < 19; i_4 += 2) 
                    {
                        arr_14 [i_4] [i_2] = ((/* implicit */short) (+(((/* implicit */int) (unsigned short)35092))));
                        var_19 = ((/* implicit */_Bool) (short)126);
                        arr_15 [i_0] [i_0] = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)35596))) : (1082510666186017509LL)));
                    }
                    arr_16 [i_1] = ((/* implicit */unsigned long long int) (signed char)-112);
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */signed char) ((long long int) max((((/* implicit */unsigned long long int) ((unsigned int) var_12))), (var_8))));
}
