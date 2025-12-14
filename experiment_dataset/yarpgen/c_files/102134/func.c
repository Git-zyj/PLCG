/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102134
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
    var_10 = ((/* implicit */int) var_7);
    var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) ((var_5) ? (max((var_6), (((/* implicit */long long int) (~(((/* implicit */int) var_3))))))) : (((/* implicit */long long int) (~((~(((/* implicit */int) (short)-13247))))))))))));
    var_12 = ((/* implicit */unsigned char) var_1);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (long long int i_1 = 3; i_1 < 12; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_2])) && ((_Bool)1))))));
                                var_14 = ((/* implicit */short) (unsigned char)194);
                                var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) (~(max((((/* implicit */unsigned int) (short)13246)), (797596726U))))))));
                                var_16 = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_3] [i_3] [i_3 - 1] [i_3 - 1] [i_3 - 1])))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */int) max((((/* implicit */unsigned int) arr_8 [i_0])), ((-(max((var_4), (((/* implicit */unsigned int) (unsigned char)194))))))));
                    arr_12 [i_0] [i_1 + 1] [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 11225802208104597033ULL)) ? (((/* implicit */int) (short)13245)) : (((/* implicit */int) (short)-13237))))) || (((/* implicit */_Bool) (-(((/* implicit */int) (short)-24919)))))))) >> ((((+(((((/* implicit */_Bool) arr_8 [i_0])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (short)-13247)))))) - (235)))));
                    var_18 -= ((/* implicit */signed char) (+(max((arr_4 [i_2] [i_1 - 3] [i_0]), (((/* implicit */unsigned int) (unsigned short)42753))))));
                }
            } 
        } 
    } 
}
