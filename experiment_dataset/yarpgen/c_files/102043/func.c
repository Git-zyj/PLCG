/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102043
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
    var_10 = ((/* implicit */unsigned int) var_9);
    var_11 = ((/* implicit */unsigned int) min((var_11), (var_2)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */long long int) min((var_12), (((((/* implicit */_Bool) (signed char)51)) ? (((((/* implicit */long long int) ((/* implicit */int) (signed char)-51))) ^ (5989720244808621394LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1])))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    for (unsigned short i_3 = 1; i_3 < 17; i_3 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_0] [i_0])), (max((((/* implicit */unsigned long long int) arr_6 [(signed char)3] [i_1] [i_2])), (var_3)))));
                            arr_13 [i_2] = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) -12)) ? (((/* implicit */int) (short)32767)) : (1846105900))));
                            arr_14 [i_2] [i_2] [i_2] [i_3] = ((/* implicit */int) var_3);
                        }
                    } 
                } 
            }
        } 
    } 
}
