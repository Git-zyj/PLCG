/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164679
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
    var_14 &= ((/* implicit */unsigned short) ((((/* implicit */int) min((var_10), (var_4)))) != (((((/* implicit */_Bool) ((var_9) ^ (var_9)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */_Bool) ((var_12) * (((/* implicit */unsigned long long int) arr_1 [i_0]))))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0])) + (((/* implicit */int) var_8)))))))), (min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_1])))), (((arr_2 [i_0] [i_1]) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_5 [i_0])))))))))));
                var_16 = ((/* implicit */short) arr_0 [i_1]);
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (unsigned char i_3 = 1; i_3 < 19; i_3 += 2) 
                    {
                        {
                            var_17 -= ((/* implicit */unsigned short) var_12);
                            var_18 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_0] [i_0])) * (((/* implicit */int) var_1))))) ? (((/* implicit */int) max((arr_9 [i_3 + 3] [i_0]), (((/* implicit */unsigned short) var_3))))) : (((((/* implicit */int) var_11)) - (((/* implicit */int) var_1)))))) * (((/* implicit */int) ((((/* implicit */int) arr_6 [i_3] [i_3 - 1] [i_3 - 1] [i_3 - 1])) > (((/* implicit */int) var_11)))))));
                        }
                    } 
                } 
                arr_10 [i_0] = ((/* implicit */int) max((((/* implicit */unsigned int) ((((arr_4 [i_1] [(unsigned char)7] [i_0]) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_5 [i_1])))) == (((/* implicit */int) ((((/* implicit */int) arr_2 [(signed char)11] [(signed char)11])) > (arr_1 [i_0]))))))), (max((min((arr_7 [i_1]), (((/* implicit */unsigned int) var_5)))), (((((/* implicit */_Bool) arr_8 [i_0])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))));
                arr_11 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_4))))), (min((var_0), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_0])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_1])))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) var_12);
}
