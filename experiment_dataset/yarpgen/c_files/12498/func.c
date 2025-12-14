/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12498
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    var_11 = min((((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_0] [i_2])) <= (((/* implicit */int) arr_8 [i_0] [i_1]))))), (arr_1 [i_0] [i_2]));
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 21; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            {
                                arr_17 [i_0] = ((/* implicit */short) var_2);
                                var_12 ^= ((/* implicit */short) min((min((((/* implicit */long long int) var_3)), (arr_15 [i_3] [i_1] [i_2] [i_3] [i_0]))), (min((arr_11 [i_0] [i_0] [i_3] [i_3 - 1]), (((/* implicit */long long int) min(((signed char)115), (arr_12 [i_0] [8U] [i_2] [i_3 + 2] [i_3] [i_4]))))))));
                                var_13 |= ((/* implicit */unsigned char) (+(((/* implicit */int) arr_5 [i_3] [i_2]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) var_4))));
}
