/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178094
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
    var_18 = ((var_5) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (short)16368)));
    var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) var_13))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (long long int i_4 = 3; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) (((~(16445265994095329152ULL))) << (((((/* implicit */int) (short)127)) - (113)))));
                                var_21 = ((/* implicit */long long int) (-(((/* implicit */int) var_11))));
                                var_22 = ((/* implicit */short) ((int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32704))) & (arr_10 [i_0] [i_4 - 1] [i_4] [i_4 + 1]))));
                                var_23 = ((/* implicit */unsigned long long int) 890358495);
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_2] [i_1] [i_2] [i_2])) ? (3570562972U) : (((/* implicit */unsigned int) 32760)))) < (var_0)));
                }
            } 
        } 
    } 
}
