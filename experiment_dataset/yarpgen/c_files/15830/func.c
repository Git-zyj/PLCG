/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15830
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
    for (unsigned int i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 1; i_2 < 9; i_2 += 2) 
                {
                    arr_9 [i_0] [i_0] [i_2] = ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)0))));
                    var_19 = ((/* implicit */signed char) ((arr_0 [i_2]) > (((/* implicit */long long int) (-(arr_1 [i_0]))))));
                    arr_10 [i_2] [i_1] [i_2] = max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (signed char)19)), (4292997171U)))), ((~(arr_2 [i_0]))));
                }
                var_20 = ((/* implicit */int) max((arr_3 [i_0]), (((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) arr_4 [i_0] [i_1])), (arr_7 [i_0 + 1] [i_0]))) != (((/* implicit */unsigned long long int) arr_1 [i_1])))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) (~(((/* implicit */int) var_5)))))));
}
