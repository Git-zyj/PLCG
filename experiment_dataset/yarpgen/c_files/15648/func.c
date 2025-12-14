/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15648
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
    var_13 *= ((/* implicit */signed char) 2147483647);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) max((max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [1U]))) & (var_11))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (signed char)-50)), (var_0)))))), (min((((/* implicit */unsigned long long int) var_5)), (var_11)))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 3; i_2 < 14; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        {
                            arr_10 [i_0] [i_1 - 2] [13ULL] [i_0] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [(_Bool)1]))) : (var_0)))) || (((/* implicit */_Bool) min(((unsigned short)34785), (((/* implicit */unsigned short) var_12))))))))));
                            var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) arr_9 [i_1] [10U] [4U] [i_3] [i_1 - 1] [i_3]))));
                            var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) max((((/* implicit */unsigned int) max((var_3), (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)124)))))))), (arr_9 [i_1] [i_2 + 1] [i_2 - 1] [i_1 + 1] [i_1 - 1] [i_1]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 ^= ((/* implicit */short) var_6);
}
