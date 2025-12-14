/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10479
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
    var_19 = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_2))))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_20 |= max((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)64)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_7)))) | (arr_2 [i_0 + 1] [i_1]))), (((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned int) arr_3 [i_0] [i_1] [i_1])), (var_7))) << (((min((((/* implicit */unsigned long long int) var_1)), (arr_2 [i_0] [i_0 + 1]))) - (1619702577333254704ULL)))))));
                var_21 = ((/* implicit */unsigned short) var_6);
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        {
                            arr_10 [i_0] [(unsigned char)1] [5LL] = ((/* implicit */_Bool) (((((~(((/* implicit */int) (signed char)127)))) / (min((var_10), (((/* implicit */int) arr_5 [i_3] [5ULL] [i_1] [i_0])))))) + (((/* implicit */int) ((arr_1 [i_3] [i_0]) > (var_8))))));
                            arr_11 [i_0] [1LL] [i_0] [i_3] &= ((/* implicit */unsigned long long int) (-(((/* implicit */int) min((arr_5 [i_0 + 1] [i_0 - 3] [i_1] [i_0 - 3]), (arr_5 [i_0 - 3] [i_0 - 3] [i_1] [i_1]))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
