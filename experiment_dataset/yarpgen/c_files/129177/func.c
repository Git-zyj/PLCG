/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129177
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
    var_11 = ((/* implicit */long long int) var_7);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        for (unsigned short i_1 = 4; i_1 < 9; i_1 += 3) 
        {
            {
                var_12 = ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (max((((((/* implicit */_Bool) (unsigned char)0)) ? (arr_2 [i_0] [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned int) var_10)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_10)) ? (var_9) : (((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) var_10))))));
                var_13 ^= ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_1)) ? (arr_4 [i_1 - 1] [i_1]) : (((/* implicit */int) arr_1 [8U]))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        {
                            var_14 = ((signed char) ((((/* implicit */int) arr_3 [i_0 + 1] [i_0 - 3] [i_0])) / ((-2147483647 - 1))));
                            var_15 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((int) arr_8 [i_0 - 2] [i_0 + 1] [i_0 - 1] [i_0 - 3]))) >= (max((3U), (arr_2 [i_0 - 3] [i_0 - 2] [i_1 + 1])))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 *= ((signed char) var_0);
}
