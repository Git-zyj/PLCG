/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189571
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
    var_20 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_10))));
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)239)) ? (((/* implicit */int) (unsigned short)45068)) : (((/* implicit */int) (unsigned short)45068))))), (7245414242844537020ULL)))) ? (min((var_19), (((/* implicit */unsigned long long int) max((var_14), (((/* implicit */short) var_7))))))) : (((/* implicit */unsigned long long int) (+(min((((/* implicit */int) var_2)), (1051659159))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_22 = ((/* implicit */int) ((long long int) min((arr_1 [i_0]), (((/* implicit */long long int) arr_3 [i_0] [i_0])))));
                var_23 = ((/* implicit */unsigned int) 11201329830865014596ULL);
                var_24 = var_17;
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            {
                                arr_16 [i_2] = ((/* implicit */int) ((max((((/* implicit */unsigned long long int) var_15)), (var_19))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_2] [i_1])) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_7 [i_2] [i_1] [i_2]))))) : (((((/* implicit */unsigned int) var_1)) - (arr_4 [(_Bool)1] [i_3] [i_1]))))))));
                                var_25 += (((+(1073741312LL))) - (((/* implicit */long long int) (-(((((/* implicit */int) (unsigned short)14283)) + (((/* implicit */int) (unsigned short)47388))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
