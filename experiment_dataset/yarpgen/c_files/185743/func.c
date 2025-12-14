/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185743
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
    for (short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((((/* implicit */_Bool) -3617712571570866949LL)) ? (((/* implicit */long long int) 1803309213)) : (4314748680434340159LL))))));
                            var_18 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_6) ? (((/* implicit */int) arr_5 [i_1] [i_1] [i_1])) : (((/* implicit */int) var_14))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)22496))) : ((-(4286162724798413966LL)))))), (((unsigned long long int) -4286162724798413966LL))));
                            var_19 = ((/* implicit */unsigned char) min((var_19), (arr_9 [(short)8] [i_3] [i_3] [i_3])));
                        }
                    } 
                } 
                arr_11 [7U] [i_0] = ((/* implicit */unsigned short) arr_1 [i_0] [i_1]);
                var_20 = ((/* implicit */unsigned short) ((short) ((((/* implicit */int) ((short) arr_2 [i_0] [i_0] [i_0]))) == (((/* implicit */int) arr_3 [i_0] [(signed char)2])))));
                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) var_12))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) var_8);
}
