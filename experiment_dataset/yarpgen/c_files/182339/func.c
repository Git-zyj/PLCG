/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182339
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
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) + (((/* implicit */int) (signed char)-99))))) : (var_8)));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned char i_1 = 3; i_1 < 10; i_1 += 3) 
        {
            for (short i_2 = 2; i_2 < 10; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (((-(39195307))) == (((/* implicit */int) (!(((/* implicit */_Bool) 17179868160LL))))))))));
                                arr_14 [i_2] [i_2] [i_2] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+((~(((/* implicit */int) var_9))))))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_4 [i_2 + 1]))))) : (arr_11 [i_1 - 3] [i_1 - 1] [i_2] [i_1])));
                                var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) arr_8 [i_4] [i_1] [i_4] [i_4]))));
                            }
                        } 
                    } 
                    var_20 = 4245621842U;
                    var_21 += (~(((/* implicit */int) arr_13 [i_0] [i_0] [i_1] [i_0] [i_1])));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */short) min((((/* implicit */int) var_14)), (var_13)));
}
