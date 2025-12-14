/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1851
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
    var_17 = ((/* implicit */long long int) ((_Bool) ((unsigned int) min((var_11), (((/* implicit */int) var_3))))));
    var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((long long int) max((((/* implicit */unsigned long long int) max((var_11), (var_15)))), ((-(1883764684435365989ULL)))))))));
    var_19 = ((/* implicit */short) ((_Bool) var_9));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (int i_3 = 2; i_3 < 22; i_3 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned long long int) max((((((/* implicit */long long int) (~(arr_9 [i_0] [i_1] [i_1] [i_3])))) ^ (((long long int) arr_10 [i_0 - 2] [(unsigned short)16] [i_0] [i_0] [i_0] [(unsigned short)20])))), (((/* implicit */long long int) ((int) ((unsigned long long int) 16562979389274185640ULL))))));
                            var_21 = ((/* implicit */unsigned int) (_Bool)1);
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((/* implicit */int) var_3)) + (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_0 - 1] [i_0 - 2] [i_0 + 1]))))))))));
                var_23 += ((/* implicit */short) (!(((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (_Bool)1)))) ? (((0U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)111))))) : ((~(4294967295U))))))));
            }
        } 
    } 
}
