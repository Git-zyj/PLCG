/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12460
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
    var_13 -= ((/* implicit */_Bool) max((((/* implicit */int) max((((/* implicit */unsigned char) ((signed char) var_3))), (var_8)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_7) : (((/* implicit */unsigned long long int) var_1))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2)))) : (((/* implicit */int) (signed char)2))))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            {
                var_14 += (+(min((var_12), (((/* implicit */unsigned long long int) arr_3 [i_1 + 1] [i_0 + 1] [i_0 - 3])))));
                var_15 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_1 [i_0 - 1]))))), (((((((/* implicit */int) arr_0 [i_0])) > (((/* implicit */int) (_Bool)1)))) ? (((((/* implicit */_Bool) arr_2 [i_0 - 2] [i_1 + 1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))) : (var_12))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (signed char)-4))))))));
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 12; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_12 [i_2] [i_1] [i_1 + 2] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) < (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (signed char)-23))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 2550854914U))))) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_0 [i_2])), (var_2))))))));
                            var_16 = ((/* implicit */_Bool) ((2550854914U) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */_Bool) arr_8 [i_0 - 1] [i_0] [i_0] [i_0 - 3] [i_0 - 3] [i_0])) ? (arr_11 [i_0] [i_1] [i_0 + 1] [i_3]) : (((/* implicit */int) arr_10 [i_2] [i_2 + 1] [i_1 + 2] [i_2])))) : (((/* implicit */int) arr_3 [i_2] [i_0 - 3] [i_2 + 1])))))));
                            arr_13 [i_0 - 1] [i_0] [i_0] [i_0 - 2] [i_2] = ((/* implicit */unsigned int) arr_0 [i_0 + 1]);
                            arr_14 [i_3] [i_2] [i_1] [i_2] [i_0 - 1] = ((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0] [i_0]))))) | (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (2147483620))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) min((((((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_6)))) * (((long long int) var_8)))), (((/* implicit */long long int) var_5)))))));
}
