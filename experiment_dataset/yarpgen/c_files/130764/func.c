/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130764
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
    var_16 = min(((~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) < (var_2)))))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) max((((/* implicit */unsigned char) var_0)), (var_5)))) : ((~(((/* implicit */int) (_Bool)0)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 1; i_4 < 16; i_4 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned char) var_0);
                                var_18 ^= ((/* implicit */unsigned short) ((unsigned int) (~(arr_10 [i_0] [i_2] [i_4]))));
                                arr_16 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((unsigned short) arr_13 [i_1] [i_4 + 1] [i_4 + 1] [i_4] [i_4 + 2] [i_4] [i_4 - 1]));
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (-((((_Bool)1) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (_Bool)0))))));
                    var_19 = ((/* implicit */unsigned short) max(((-(((((/* implicit */_Bool) 33554431)) ? (-33554417) : (997632779))))), (((/* implicit */int) arr_4 [i_1]))));
                    var_20 |= ((/* implicit */_Bool) arr_5 [i_1]);
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */long long int) var_2);
    var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_0) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_4)))) ? (((/* implicit */long long int) ((/* implicit */int) min((var_3), (var_1))))) : ((~(var_6)))))) ? (var_6) : (((/* implicit */long long int) (~(((/* implicit */int) ((var_11) > (((/* implicit */long long int) var_4)))))))))))));
}
