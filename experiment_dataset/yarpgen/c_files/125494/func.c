/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125494
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
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned short) arr_5 [i_1] [i_1] [i_2])))));
                    var_20 *= ((unsigned char) (~(669233182U)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_21 -= ((/* implicit */_Bool) ((signed char) (+(((/* implicit */int) (_Bool)1)))));
                                var_22 = ((/* implicit */unsigned int) ((long long int) ((unsigned int) var_16)));
                                var_23 = ((/* implicit */short) ((unsigned char) (+((+(((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [i_3] [i_4])))))));
                                var_24 = ((/* implicit */unsigned int) (-((+((~(((/* implicit */int) var_18))))))));
                                var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) arr_13 [i_4 + 1] [i_4 + 2] [(signed char)8] [(signed char)10] [i_4])))))))));
                            }
                        } 
                    } 
                    var_26 *= ((/* implicit */_Bool) (+((-(((/* implicit */int) var_18))))));
                }
            } 
        } 
    } 
    var_27 = (~(((/* implicit */int) ((short) ((signed char) var_4)))));
}
