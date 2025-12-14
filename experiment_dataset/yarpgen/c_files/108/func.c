/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108
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
    var_14 = ((/* implicit */signed char) var_0);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_2] [i_2] = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0])))))));
                    var_15 = ((/* implicit */short) arr_5 [i_0] [i_0] [i_0]);
                    var_16 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */int) var_8)) ^ (((/* implicit */int) (signed char)28)))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (short i_4 = 1; i_4 < 7; i_4 += 4) 
                        {
                            {
                                arr_15 [i_0] [i_0] [i_2] [i_0] [i_0] = var_2;
                                arr_16 [i_0] [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) (_Bool)1))) ? (((/* implicit */int) (signed char)60)) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)27)) || ((_Bool)1))))));
                                var_17 = ((/* implicit */signed char) var_2);
                                arr_17 [i_0] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) max((((/* implicit */int) var_11)), (max((arr_10 [i_4 + 1] [i_4 + 1] [i_4 + 1]), (arr_10 [i_4 + 1] [i_4 + 1] [i_4 + 1])))));
                                arr_18 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) max((((((((/* implicit */_Bool) (signed char)122)) ? (((/* implicit */int) (signed char)-122)) : (((/* implicit */int) (signed char)8)))) >= (arr_13 [i_4 + 1] [i_4 - 1] [i_4 + 1] [i_4 - 1] [i_4 + 1] [i_4 + 3]))), ((!(((/* implicit */_Bool) ((var_2) << (((((/* implicit */int) (signed char)-14)) + (49))))))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((long long int) var_5)))));
                }
            } 
        } 
    } 
}
