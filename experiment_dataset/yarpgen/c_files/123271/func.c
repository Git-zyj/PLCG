/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123271
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
    var_20 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_10))));
    var_21 |= ((/* implicit */short) min((((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)250))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_18)), (var_9)))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) var_10)))))), (((/* implicit */int) var_6))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    arr_8 [i_0] = max((var_2), (((/* implicit */long long int) (!(((/* implicit */_Bool) 68702699520ULL))))));
                    arr_9 [(signed char)7] = ((/* implicit */unsigned short) min((((arr_3 [i_0]) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_3 [i_0])))), (((/* implicit */int) arr_3 [i_0]))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_14 [i_4] [i_4] [i_4] = ((/* implicit */signed char) (unsigned char)251);
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((var_16) | (((/* implicit */long long int) min(((-(((/* implicit */int) arr_1 [4])))), (((/* implicit */int) arr_2 [i_0] [i_1] [i_3])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
