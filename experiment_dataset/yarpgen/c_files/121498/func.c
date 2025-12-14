/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121498
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
    var_17 = ((/* implicit */short) min(((((!(((/* implicit */_Bool) (unsigned short)42907)))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned short)42907)))), (max((((((/* implicit */int) var_12)) * (((/* implicit */int) var_12)))), (((/* implicit */int) max((((/* implicit */unsigned short) var_10)), ((unsigned short)42907))))))));
    var_18 ^= ((/* implicit */unsigned int) max((var_14), (var_0)));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) max((((/* implicit */int) (_Bool)0)), (var_16))))) ? (arr_5 [i_1] [i_1 - 1] [i_1 + 3]) : (((/* implicit */long long int) ((/* implicit */int) ((short) (unsigned char)176))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 20; i_3 += 1) 
                    {
                        for (short i_4 = 2; i_4 < 23; i_4 += 3) 
                        {
                            {
                                var_19 = ((_Bool) arr_16 [i_0] [21LL] [i_2]);
                                var_20 &= ((/* implicit */long long int) (~(min((arr_9 [i_1] [i_1 - 1] [i_3 + 2] [i_4 - 2]), (((/* implicit */int) arr_6 [i_0] [i_1 - 2]))))));
                                var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */long long int) arr_9 [i_4] [i_4 - 1] [15U] [i_3 - 1])) >= (var_11)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
