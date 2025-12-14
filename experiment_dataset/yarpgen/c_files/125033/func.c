/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125033
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
    var_19 = ((((/* implicit */_Bool) ((var_17) << (((((/* implicit */int) var_13)) + (23303)))))) ? (((/* implicit */unsigned long long int) (-(max((((/* implicit */unsigned int) var_6)), (var_9)))))) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_12)))) : (max((((/* implicit */unsigned long long int) var_2)), (var_3))))));
    var_20 = ((/* implicit */unsigned long long int) (+((+((-(((/* implicit */int) (short)11235))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 3; i_2 < 13; i_2 += 2) 
                {
                    for (signed char i_3 = 1; i_3 < 13; i_3 += 4) 
                    {
                        {
                            var_21 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_2 + 1] [(signed char)0] [i_1 + 2] [i_0] [i_0 + 4])) ? (arr_0 [i_0 + 4]) : (((/* implicit */int) var_7))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)11235)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_2 [5ULL]))))) : (((unsigned long long int) arr_0 [i_3 + 1]))))) ? (((/* implicit */int) ((signed char) arr_4 [i_0] [i_0] [i_2 - 3]))) : (((((/* implicit */int) (short)-11250)) | (((/* implicit */int) (short)-11250))))));
                            var_22 = (+(((((/* implicit */_Bool) arr_9 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 - 1] [i_3 + 1] [i_3 - 1])) ? (arr_9 [i_3 - 1] [i_3 + 1] [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_3 - 1]) : (arr_9 [i_3 + 1] [i_3 - 1] [i_3 + 1] [i_3 + 1] [i_3 - 1] [i_3 + 1]))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) (((~(var_9))) <= (((/* implicit */unsigned int) ((/* implicit */int) min(((short)11237), (((/* implicit */short) (_Bool)0)))))))))));
                var_24 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_7 [i_0 + 3] [i_0 + 1] [i_0] [i_0 - 2]))))), (((unsigned long long int) (short)-11235))));
                var_25 = ((/* implicit */unsigned short) max(((+(((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_4 [4] [4] [i_1 + 1])) : (arr_3 [i_0] [i_1] [i_1]))))), (((/* implicit */int) min(((unsigned short)6), ((unsigned short)6))))));
            }
        } 
    } 
    var_26 = ((/* implicit */_Bool) var_11);
}
