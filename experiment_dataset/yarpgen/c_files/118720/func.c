/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118720
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
    var_10 -= ((/* implicit */short) ((min((((/* implicit */long long int) (+(((/* implicit */int) var_9))))), ((((_Bool)0) ? (((/* implicit */long long int) var_2)) : (var_8))))) != (((/* implicit */long long int) ((/* implicit */int) var_9)))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 11; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        {
                            arr_13 [i_0] [i_1] [5] [i_1 - 1] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((long long int) max((((/* implicit */int) (short)4620)), (var_1)))))));
                            var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) (-(max((arr_10 [i_2] [(unsigned short)6] [i_2] [(unsigned short)6]), ((-(((/* implicit */int) (short)-31757)))))))))));
                        }
                    } 
                } 
                var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1 - 1] [i_1 - 1])) ? (((/* implicit */int) arr_8 [i_1 + 1] [i_1])) : (((/* implicit */int) arr_8 [i_1 - 1] [(signed char)3]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1 + 2] [(unsigned short)6])) ? (((/* implicit */int) arr_8 [i_1 + 3] [i_0])) : (((/* implicit */int) arr_8 [i_1 + 3] [i_1]))))))))));
            }
        } 
    } 
}
