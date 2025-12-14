/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10499
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */_Bool) arr_4 [i_0]);
                var_14 = ((/* implicit */_Bool) var_11);
            }
        } 
    } 
    var_15 ^= ((/* implicit */short) (!(((/* implicit */_Bool) var_4))));
    /* LoopNest 3 */
    for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 1) 
    {
        for (unsigned int i_3 = 0; i_3 < 11; i_3 += 3) 
        {
            for (long long int i_4 = 0; i_4 < 11; i_4 += 3) 
            {
                {
                    var_16 = ((/* implicit */int) ((_Bool) (signed char)-103));
                    var_17 = ((((/* implicit */_Bool) ((int) arr_8 [i_2] [i_2]))) ? (((((_Bool) var_12)) ? (((/* implicit */unsigned int) (+(arr_2 [i_2])))) : (arr_12 [i_2] [i_3] [i_4]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)0))))) <= (((((/* implicit */_Bool) var_12)) ? (arr_13 [i_2] [i_2] [i_2]) : (((/* implicit */long long int) arr_12 [i_2] [i_2] [i_2])))))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_11))))) * (((unsigned long long int) var_12)))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
    var_19 = ((/* implicit */signed char) (-(var_7)));
}
