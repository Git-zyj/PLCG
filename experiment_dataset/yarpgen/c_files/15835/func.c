/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15835
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
    var_17 = ((/* implicit */unsigned long long int) var_13);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_18 += arr_4 [i_1] [(unsigned char)6];
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 1; i_3 < 11; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_19 += ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_3 - 1] [(signed char)2] [i_4] [i_4])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_3 [(unsigned short)6])) : (((/* implicit */int) var_10))))) : (var_6))))));
                                var_20 = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0])) ? (-1714916522) : (((/* implicit */int) arr_6 [i_1] [i_1] [i_3 - 1]))))), ((~(max((((/* implicit */unsigned long long int) arr_0 [i_1])), (18036822528017125603ULL))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
