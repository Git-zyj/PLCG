/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122972
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
    var_15 = ((/* implicit */int) min((min((var_3), (var_0))), (((/* implicit */signed char) var_4))));
    var_16 ^= ((/* implicit */short) min((var_5), (((/* implicit */unsigned int) ((var_5) <= (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) % (var_11)))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 3; i_0 < 16; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_13) < (arr_5 [i_0] [i_0 - 1] [i_0]))))) - (min((((/* implicit */unsigned int) (_Bool)1)), (2280957571U)))));
                    var_17 += ((/* implicit */int) max((min((1230273752U), (3U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) || ((_Bool)1))))));
                    /* LoopSeq 4 */
                    for (short i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        var_18 = ((/* implicit */_Bool) min((max((arr_5 [i_1] [i_2] [i_0]), (((/* implicit */long long int) (short)-11499)))), (((/* implicit */long long int) ((((/* implicit */int) (signed char)-4)) >= (((/* implicit */int) var_3)))))));
                        arr_10 [i_0] [i_2] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((727522593) / (((/* implicit */int) (short)-9759))))), (((arr_6 [i_1] [i_1] [i_0 - 1]) % (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-22)))))));
                        var_19 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) arr_3 [i_0])) <= (var_13))))) >= (min((arr_9 [i_2] [i_0] [i_0 - 1] [i_0]), (((/* implicit */unsigned int) arr_4 [i_0]))))));
                        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) max((((/* implicit */long long int) min((((/* implicit */unsigned int) arr_4 [i_1])), (4294967295U)))), (((var_13) / (((/* implicit */long long int) ((/* implicit */int) var_10))))))))));
                    }
                    for (unsigned int i_4 = 3; i_4 < 13; i_4 += 3) 
                    {
                        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((min((((/* implicit */long long int) (short)4)), (144115188075855872LL))) > (min((var_13), (((/* implicit */long long int) arr_12 [i_4] [i_1] [i_1] [i_1])))))))));
                        arr_14 [i_0] [i_4 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((-478366693946008524LL), (((/* implicit */long long int) arr_4 [i_0]))))) || (((/* implicit */_Bool) ((arr_5 [i_0] [i_0 - 3] [i_0]) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))));
                        var_22 = ((/* implicit */unsigned char) min((max((min((arr_5 [i_0] [i_1] [i_0]), (((/* implicit */long long int) var_3)))), (arr_2 [i_1] [i_0 - 2]))), (((/* implicit */long long int) min((arr_8 [i_4 - 2] [i_2] [i_0 - 1] [i_0]), (((/* implicit */short) (_Bool)1)))))));
                    }
                    for (int i_5 = 0; i_5 < 17; i_5 += 2) 
                    {
                        arr_18 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */int) max(((signed char)-5), (arr_16 [15U] [i_1] [i_0] [i_2] [i_5])))), (min((((/* implicit */int) arr_13 [i_0])), (var_11)))));
                        var_23 = ((/* implicit */signed char) min((min((arr_1 [i_1] [i_0 - 2]), (arr_1 [i_1] [i_0 - 2]))), (((/* implicit */unsigned int) max((arr_8 [(_Bool)1] [i_0] [i_0] [i_0 + 1]), (((/* implicit */short) min((((/* implicit */signed char) arr_4 [i_0])), (arr_16 [i_0] [i_1] [i_0] [i_2] [i_5])))))))));
                    }
                    for (unsigned int i_6 = 1; i_6 < 15; i_6 += 4) 
                    {
                        var_24 = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned int) (signed char)21)), (4078149349U))) >= (min((((/* implicit */unsigned int) -1301190553)), (4294967295U)))));
                        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_3)), (arr_1 [i_0 - 3] [i_0 - 3])))) && (((((/* implicit */_Bool) arr_1 [i_0 - 3] [i_0 - 3])) && (((/* implicit */_Bool) arr_1 [i_0 - 3] [i_0 - 3]))))));
                    }
                }
            } 
        } 
    } 
}
