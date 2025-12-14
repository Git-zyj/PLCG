/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170405
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
    var_12 = ((/* implicit */unsigned long long int) var_9);
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 24; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_1] = ((/* implicit */unsigned short) ((((arr_0 [i_1]) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(var_4))))) : (((1250422038U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-26))))))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((-472343776) & (((/* implicit */int) (unsigned short)58285)))))))))));
                var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) (((+(((/* implicit */int) (unsigned char)206)))) << (((((((/* implicit */int) var_10)) << (((((/* implicit */int) (signed char)127)) - (116))))) - (28723182))))))));
                arr_5 [i_0] [(unsigned short)24] [i_0] &= ((/* implicit */short) var_4);
                /* LoopNest 3 */
                for (short i_2 = 2; i_2 < 24; i_2 += 3) 
                {
                    for (long long int i_3 = 3; i_3 < 23; i_3 += 4) 
                    {
                        for (int i_4 = 1; i_4 < 24; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [18] [i_2] [i_2] [i_4] &= ((/* implicit */signed char) max((min((472343798), (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_2 + 1])) ? (((/* implicit */int) arr_3 [(_Bool)1] [i_4 - 1] [i_3])) : (((/* implicit */int) arr_9 [i_3 - 3] [i_2 - 2] [i_0] [i_0] [8] [i_0]))))));
                                var_14 += ((/* implicit */signed char) 2299780299U);
                            }
                        } 
                    } 
                } 
                arr_15 [i_1] = ((/* implicit */unsigned char) ((unsigned int) var_2));
            }
        } 
    } 
    var_15 = ((/* implicit */short) 3688171746783388088LL);
}
