/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176086
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
    var_10 = ((/* implicit */_Bool) 1963406887);
    var_11 ^= ((/* implicit */unsigned short) var_2);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 10; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 1; i_4 < 12; i_4 += 3) 
                        {
                            {
                                arr_15 [i_0] [i_0] [i_0] [i_3] [10U] = ((/* implicit */_Bool) ((var_4) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_4 - 1] [i_4] [i_4 - 1] [i_4] [i_2] [i_1 + 1]))))) : (((/* implicit */int) ((var_7) <= (arr_8 [i_1] [i_1] [i_1 + 2] [i_1]))))));
                                var_12 = ((/* implicit */long long int) min((var_12), ((((((+(arr_0 [10ULL]))) / (((/* implicit */long long int) ((arr_13 [i_0] [i_1] [i_1] [i_3] [i_3] [i_3] [i_4 - 1]) >> (((var_8) - (7429036150040940396LL)))))))) / (min((((/* implicit */long long int) min((((/* implicit */unsigned short) (_Bool)1)), (arr_5 [(unsigned char)0] [i_1])))), ((~(3984397038490609416LL)))))))));
                                arr_16 [i_0] [i_1] [i_1 + 2] [(unsigned short)1] [i_3] [i_0] = ((/* implicit */long long int) ((unsigned long long int) min((((/* implicit */unsigned int) (unsigned short)29503)), (arr_14 [i_4 - 1] [i_4] [i_0] [(signed char)2] [(signed char)2] [i_4 - 1]))));
                                var_13 |= ((/* implicit */signed char) var_8);
                                var_14 = ((/* implicit */_Bool) (~(var_8)));
                            }
                        } 
                    } 
                    arr_17 [i_0] = ((/* implicit */long long int) arr_8 [i_0] [i_0] [i_1] [(unsigned char)10]);
                    var_15 -= var_9;
                    arr_18 [i_0] [i_0] [i_2] = ((/* implicit */signed char) (+(min((((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_14 [i_0] [(short)1] [i_0] [(_Bool)1] [i_2] [i_1]) : (var_7))), ((~(arr_11 [i_0] [i_0] [(unsigned short)8] [i_0] [i_0])))))));
                }
            } 
        } 
    } 
}
