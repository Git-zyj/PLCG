/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10416
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
    var_19 = ((/* implicit */long long int) max((var_19), (var_6)));
    var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_6))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */short) (!((!(((/* implicit */_Bool) (unsigned short)27963))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 15; i_4 += 1) 
                        {
                            {
                                var_22 += ((/* implicit */_Bool) (+((~(arr_13 [(unsigned char)4] [i_4 + 1] [i_4] [i_4 + 2] [i_4 + 1] [i_4] [i_4 + 1])))));
                                arr_14 [i_0] [i_1] [i_1] [i_1] [(_Bool)1] [i_4] = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_1 - 1] [i_3]))))));
                                var_23 += ((/* implicit */short) (!((!(((/* implicit */_Bool) 1716302321U))))));
                                arr_15 [i_0] [i_0] [i_1] [i_0] [i_2] [i_1] [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(394903064U))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 17; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 1; i_6 < 14; i_6 += 2) 
                        {
                            {
                                var_24 ^= ((/* implicit */unsigned int) (+((+(((/* implicit */int) (signed char)13))))));
                                arr_23 [i_1] [i_1] [i_2] [i_5] [i_6 - 1] = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_16 [i_0] [i_1 + 1])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
