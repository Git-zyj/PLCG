/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163886
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
    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) | (((/* implicit */int) var_9)))) - (min((((/* implicit */int) (unsigned char)82)), ((+(((/* implicit */int) (unsigned char)182)))))))))));
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)173)) < (max(((+(((/* implicit */int) (_Bool)0)))), (((/* implicit */int) (unsigned short)49061))))));
    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) ((var_15) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)100))) : (max((((((/* implicit */_Bool) (unsigned char)82)) ? (8134198340720721500ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)8))))), (((/* implicit */unsigned long long int) ((short) var_16)))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 20; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 3; i_3 < 19; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                arr_14 [i_3] [i_1] = ((/* implicit */unsigned char) arr_3 [i_0]);
                                var_23 = ((/* implicit */signed char) ((unsigned long long int) (+(((((/* implicit */int) arr_11 [i_3])) << (((((/* implicit */int) (unsigned char)82)) - (60))))))));
                                var_24 -= ((/* implicit */unsigned short) ((((/* implicit */int) min(((unsigned char)164), (((/* implicit */unsigned char) (signed char)-68))))) / (((/* implicit */int) arr_6 [i_2] [i_3] [9LL]))));
                                arr_15 [i_0] [i_3] [i_2] [i_2] [i_4] = ((/* implicit */_Bool) (-(((((((/* implicit */int) arr_6 [i_0] [i_0] [i_1 - 3])) + (2147483647))) << (((((/* implicit */int) arr_7 [i_1] [i_1])) - (159)))))));
                            }
                        } 
                    } 
                    arr_16 [i_0] = ((/* implicit */unsigned char) ((1405589004) % (((/* implicit */int) arr_5 [i_1 + 1]))));
                    var_25 = ((/* implicit */unsigned long long int) arr_11 [i_2]);
                }
            } 
        } 
    } 
}
