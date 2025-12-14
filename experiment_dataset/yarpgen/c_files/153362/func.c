/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153362
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [(short)0] [(short)0] = ((/* implicit */int) ((((/* implicit */int) ((unsigned short) var_5))) > ((-(((/* implicit */int) arr_3 [i_1]))))));
                var_12 = ((/* implicit */unsigned int) var_10);
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) max((((/* implicit */long long int) (unsigned short)22232)), (8752242993372728157LL))))) < (((/* implicit */int) ((((/* implicit */int) arr_3 [i_0])) >= (((/* implicit */int) arr_3 [i_3])))))));
                            var_14 = ((/* implicit */short) ((((/* implicit */int) (unsigned short)43317)) ^ (((/* implicit */int) (unsigned short)43303))));
                            var_15 = ((/* implicit */signed char) arr_0 [i_0] [i_1]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 = max((((/* implicit */long long int) var_2)), (((((/* implicit */_Bool) ((var_9) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) ? (max((var_5), (((/* implicit */long long int) var_1)))) : (((/* implicit */long long int) ((/* implicit */int) var_4))))));
}
