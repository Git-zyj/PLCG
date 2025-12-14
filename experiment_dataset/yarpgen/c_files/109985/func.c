/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109985
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) (!(((/* implicit */_Bool) -2554330073839955804LL)))))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_12 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_4]))) : (((((/* implicit */_Bool) arr_2 [i_1] [i_3])) ? (-7837073342379274481LL) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1] [i_1] [i_3] [i_4])))))));
                                var_13 = ((/* implicit */short) max((((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (((arr_4 [i_4] [(unsigned char)9] [i_0] [i_0]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)1)))))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((arr_0 [i_0]), (((/* implicit */unsigned long long int) var_0))))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_14 = ((/* implicit */long long int) var_9);
}
