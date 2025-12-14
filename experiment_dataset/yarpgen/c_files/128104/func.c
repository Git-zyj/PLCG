/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128104
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
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) (unsigned char)175)) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_15)))) : (((((/* implicit */_Bool) (unsigned char)175)) ? (((/* implicit */int) (unsigned char)175)) : (((/* implicit */int) (signed char)127)))))) : (((((/* implicit */int) var_11)) << (((((/* implicit */int) min(((unsigned char)175), (((/* implicit */unsigned char) (signed char)127))))) - (118)))))));
    var_19 |= ((/* implicit */signed char) (short)-1);
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            for (int i_2 = 3; i_2 < 8; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */signed char) ((_Bool) max((14200601055730233ULL), (7814182164572510143ULL))));
                    arr_9 [i_0 - 1] [i_0 - 1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_8 [i_2 + 1] [i_2] [i_2])) && (((/* implicit */_Bool) (signed char)(-127 - 1))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) arr_8 [i_0 + 1] [i_1 + 2] [i_2 + 1]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
                    arr_10 [i_0] [i_0 - 1] [i_0] = ((/* implicit */short) 4294967295U);
                    arr_11 [i_0] [i_0] = ((/* implicit */short) min((((long long int) max((arr_7 [i_0 - 1] [i_1 + 1] [i_1 + 1]), (((/* implicit */unsigned int) (short)0))))), (((/* implicit */long long int) (unsigned char)0))));
                    arr_12 [i_0] [(short)0] [i_2 - 3] [i_2 - 3] = ((/* implicit */signed char) 0LL);
                }
            } 
        } 
    } 
    var_21 += ((/* implicit */long long int) max((((/* implicit */unsigned int) max(((unsigned char)0), (((/* implicit */unsigned char) (_Bool)1))))), (((var_4) << (((((/* implicit */int) var_5)) + (81)))))));
}
