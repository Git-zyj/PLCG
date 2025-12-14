/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10960
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */unsigned char) (~(((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)1432))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_0] [i_2] [i_3] [i_4] = ((((/* implicit */int) var_7)) + (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (short)16383)))))))));
                                var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(4294967281U)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)1432))))))) : (min((max((((/* implicit */unsigned long long int) var_13)), (var_1))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_4] [i_3] [i_0] [i_0])) >> (((var_10) - (1839312238U))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 10; i_5 += 3) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 10; i_6 += 3) 
                        {
                            {
                                arr_21 [i_0] [i_2] [i_5] [i_0] = ((/* implicit */_Bool) (unsigned char)7);
                                arr_22 [i_5] [i_6] [i_2] [0] [i_6] [(_Bool)1] [i_5] |= ((/* implicit */unsigned char) var_12);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */short) max((((((/* implicit */unsigned int) min((134217727), (((/* implicit */int) (short)1432))))) + (((14U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)168))))))), (((/* implicit */unsigned int) ((short) (-(((/* implicit */int) var_3))))))));
}
