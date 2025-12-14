/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113170
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
    var_19 = ((/* implicit */unsigned char) ((long long int) (unsigned short)58578));
    var_20 = ((/* implicit */int) var_4);
    var_21 += ((/* implicit */unsigned int) ((unsigned char) var_2));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_22 = ((long long int) ((((/* implicit */_Bool) (unsigned short)44633)) ? (((/* implicit */int) (_Bool)0)) : (1475989057)));
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 18; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_23 = (i_2 % 2 == zero) ? (((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_18), (((/* implicit */unsigned char) var_16))))) ? (((((/* implicit */int) (unsigned short)37736)) << (((((arr_6 [i_3 + 1] [i_2]) + (1468605541))) - (20))))) : ((-(((/* implicit */int) arr_1 [i_1] [i_0 + 1]))))))) : (((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_18), (((/* implicit */unsigned char) var_16))))) ? (((((/* implicit */int) (unsigned short)37736)) << (((((((((arr_6 [i_3 + 1] [i_2]) + (1468605541))) - (20))) + (674891690))) - (20))))) : ((-(((/* implicit */int) arr_1 [i_1] [i_0 + 1])))))));
                                arr_13 [(short)2] [i_2] [i_2] = var_10;
                                var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) ((long long int) var_9)))));
                                arr_14 [i_4] |= ((/* implicit */signed char) (!((_Bool)1)));
                                var_25 = ((/* implicit */_Bool) (+(1475989057)));
                            }
                        } 
                    } 
                    var_26 |= ((/* implicit */int) ((long long int) (+(((/* implicit */int) (_Bool)1)))));
                    var_27 -= ((/* implicit */int) var_16);
                }
            } 
        } 
    } 
}
