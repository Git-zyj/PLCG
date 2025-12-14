/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107718
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
    var_10 *= max((min((var_1), ((~(var_1))))), (((/* implicit */unsigned int) var_3)));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        {
                            var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_3]))) ^ (var_7)))) ? (((((/* implicit */int) var_4)) ^ (((/* implicit */int) var_4)))) : (((/* implicit */int) arr_7 [i_3] [i_1]))));
                            /* LoopSeq 1 */
                            for (long long int i_4 = 1; i_4 < 20; i_4 += 3) 
                            {
                                var_12 = arr_0 [i_0];
                                var_13 = ((/* implicit */_Bool) arr_6 [i_4 - 1] [i_4 - 1]);
                                var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 102536088U)) ? (4005202856U) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_5 [i_0] [i_1] [i_1] [i_4]), (arr_8 [i_0] [i_1] [i_2] [i_3] [i_4])))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((var_6) ? (((/* implicit */int) arr_3 [i_4] [i_1] [i_1])) : (((/* implicit */int) var_6)))))))) : (((((/* implicit */int) ((4005202856U) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)106)))))) - (((((/* implicit */int) var_3)) / (((/* implicit */int) var_9)))))))))));
                            }
                        }
                    } 
                } 
                var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((0ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))))));
                var_16 *= ((/* implicit */unsigned int) (-(((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))) & (((var_7) & (var_7)))))));
            }
        } 
    } 
}
