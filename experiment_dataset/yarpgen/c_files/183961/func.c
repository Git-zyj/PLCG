/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183961
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
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (short i_1 = 4; i_1 < 12; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_1])) ? (min((((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_1 [i_1 - 2]) : (((/* implicit */int) arr_0 [i_1])))), (var_7))) : ((-((~(arr_1 [i_0]))))))))));
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        for (long long int i_4 = 2; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) max((arr_11 [i_4] [i_4] [i_4 + 2] [i_4 - 1] [i_4 - 1] [i_4 + 1]), (((/* implicit */long long int) arr_7 [i_4 - 2] [9U] [i_4 + 2] [i_4] [i_4 + 1])))))));
                                var_13 = ((/* implicit */signed char) (+(-2941940383140817766LL)));
                                var_14 = ((/* implicit */signed char) max((((((/* implicit */_Bool) -7293542178373404135LL)) ? (min((var_10), (arr_6 [i_1]))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)49828)) / (arr_2 [i_2])))))), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)98)))))));
                                var_15 = ((/* implicit */unsigned int) var_9);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_16 = ((/* implicit */int) (!(((/* implicit */_Bool) var_3))));
    var_17 += ((/* implicit */long long int) var_9);
}
