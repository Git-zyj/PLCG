/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161335
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned long long int) var_3);
                                var_18 |= ((/* implicit */unsigned long long int) (+((~(min((((/* implicit */int) var_11)), (arr_4 [i_0])))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)32743)) < (arr_6 [i_0] [i_1] [i_0] [i_2]))))) + (9858079584226027694ULL))) + (((/* implicit */unsigned long long int) (-(arr_12 [i_0] [i_1]))))));
                    var_20 = ((/* implicit */short) (+((~(arr_4 [i_1])))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((((var_15) != (((/* implicit */int) var_9)))) ? (max((((/* implicit */unsigned long long int) var_3)), (8588664489483523921ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))));
    var_22 &= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) var_9)) < (((/* implicit */int) (unsigned char)11))))) << (((max((min((var_16), (var_7))), (((/* implicit */unsigned long long int) ((var_1) > (((/* implicit */long long int) ((/* implicit */int) var_4)))))))) - (7203323414038005754ULL)))));
    var_23 = ((/* implicit */unsigned char) var_2);
}
