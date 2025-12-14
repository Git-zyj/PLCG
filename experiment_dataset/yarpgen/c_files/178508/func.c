/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178508
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    for (long long int i_3 = 1; i_3 < 21; i_3 += 1) 
                    {
                        {
                            var_13 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_1 + 1] [i_2] [i_3 + 1])) ? (((/* implicit */unsigned long long int) arr_9 [i_1 - 1] [i_2] [i_3 + 1])) : (arr_7 [i_2])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_1 - 1] [i_2] [i_3 - 1])) ? (((/* implicit */int) (short)-18674)) : (((/* implicit */int) var_12))))) : (((((/* implicit */_Bool) arr_7 [i_2])) ? (arr_7 [i_2]) : (arr_7 [i_2])))));
                            arr_13 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_1 - 1] [i_3 - 1]))))) ? ((-(((/* implicit */int) (short)-18693)))) : ((+(((/* implicit */int) max((var_7), (((/* implicit */unsigned short) var_6)))))))));
                            arr_14 [i_0] [i_2] [i_1] [i_1] [i_0] = max((((/* implicit */unsigned long long int) var_3)), (max((var_11), (((/* implicit */unsigned long long int) min((((/* implicit */int) var_0)), (var_1)))))));
                            var_14 = ((/* implicit */unsigned char) min((((/* implicit */long long int) 1415045700U)), (arr_10 [i_2])));
                        }
                    } 
                } 
                arr_15 [i_0] [16ULL] [12U] = ((/* implicit */unsigned short) ((unsigned char) (~(max((arr_12 [i_0] [i_0] [i_0] [i_1 + 2] [i_0]), (((/* implicit */int) (short)-18693)))))));
                var_15 = ((/* implicit */unsigned short) (short)-18674);
            }
        } 
    } 
    var_16 -= ((/* implicit */unsigned long long int) max((var_7), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) > (var_5))))));
}
