/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142229
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
    for (short i_0 = 4; i_0 < 12; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 1) /* same iter space */
                            {
                                arr_13 [i_4] [(short)7] [i_2] [(short)7] [i_1 - 1] [i_0] = ((/* implicit */unsigned char) min(((-(arr_6 [i_0 - 1] [i_1 + 1] [i_3]))), (((/* implicit */unsigned int) ((unsigned short) arr_6 [i_0 - 3] [i_1 - 1] [i_1 + 1])))));
                                arr_14 [i_0 - 3] = ((/* implicit */short) (+(((/* implicit */int) var_11))));
                                var_20 = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) var_5))) + (((int) var_18))));
                            }
                            for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 1) /* same iter space */
                            {
                                var_21 = ((/* implicit */signed char) min((((/* implicit */long long int) (_Bool)1)), (68719476735LL)));
                                var_22 = ((/* implicit */unsigned short) (+((-(((var_8) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned char)0))))))));
                            }
                            var_23 = ((/* implicit */unsigned int) max((-68719476736LL), (((/* implicit */long long int) -410849321))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */_Bool) (-((+(((((/* implicit */unsigned int) 2147483647)) + (0U)))))));
            }
        } 
    } 
    var_25 = ((/* implicit */int) ((var_14) || (((/* implicit */_Bool) var_18))));
}
