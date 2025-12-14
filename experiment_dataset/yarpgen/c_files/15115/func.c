/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15115
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
    var_10 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!((!(((/* implicit */_Bool) 16976059722395882343ULL)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */_Bool) var_0);
                var_11 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_0] [1] [i_1]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [(unsigned short)21] [i_0])) && (((/* implicit */_Bool) (unsigned char)164)))))) : (var_8)));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    for (unsigned int i_3 = 1; i_3 < 23; i_3 += 3) 
                    {
                        {
                            var_12 = ((/* implicit */unsigned char) (~(((/* implicit */int) min((arr_10 [i_0] [i_0] [i_0] [i_2]), (((/* implicit */short) arr_1 [i_2] [i_3 - 1])))))));
                            arr_11 [i_2] = ((/* implicit */short) min((((/* implicit */int) ((_Bool) (unsigned char)239))), (((((/* implicit */int) arr_9 [i_2] [i_3 + 1] [i_3 - 1] [i_2])) / ((+(((/* implicit */int) (signed char)64))))))));
                            arr_12 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) (+((~(18446744073709551615ULL))))))));
                        }
                    } 
                } 
                var_13 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)32767)) != (((/* implicit */int) (short)-28639))));
            }
        } 
    } 
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */int) var_1)) & (((/* implicit */int) (signed char)-75))))))) ? ((~(((((/* implicit */_Bool) 1073741824)) ? (((/* implicit */int) (short)5189)) : (((/* implicit */int) (signed char)-23)))))) : (((/* implicit */int) var_0))));
}
