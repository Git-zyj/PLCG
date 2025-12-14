/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159349
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
    var_13 *= ((/* implicit */signed char) var_2);
    var_14 = ((/* implicit */unsigned char) ((signed char) var_7));
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) var_12))) / (var_6))) + (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_2))))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 11; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (short i_2 = 4; i_2 < 11; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) min((((/* implicit */long long int) ((((((/* implicit */_Bool) arr_3 [i_0] [(short)11])) && (((/* implicit */_Bool) var_12)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (((unsigned int) var_12))))), ((+(min((arr_2 [(signed char)4] [i_1] [i_1]), (((/* implicit */long long int) var_5)))))))))));
                    /* LoopNest 2 */
                    for (short i_3 = 4; i_3 < 8; i_3 += 4) 
                    {
                        for (short i_4 = 1; i_4 < 9; i_4 += 4) 
                        {
                            {
                                var_17 = max((((/* implicit */unsigned char) var_8)), (((unsigned char) ((unsigned int) arr_0 [i_0]))));
                                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_8 [i_4] [i_4] [i_4] [i_4 + 2] [i_4]), (((/* implicit */signed char) arr_11 [i_0] [i_4] [i_4 + 2] [i_4 + 3] [i_4 - 1]))))) ? (max((((/* implicit */unsigned int) var_5)), (arr_7 [i_4 - 1] [7] [i_4] [i_4 + 1] [i_4]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) arr_10 [i_4] [i_4] [i_0] [i_4 + 1] [i_4])) <= (arr_7 [i_4] [i_4] [i_4 + 2] [i_4 - 1] [i_4 - 1])))))));
                                arr_12 [i_0 - 1] [i_1] [i_2] [i_3] [i_0] = ((/* implicit */signed char) arr_1 [6LL]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
