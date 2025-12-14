/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113653
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
    var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1))))), (var_3))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) > (var_3)))), (max((var_6), (((/* implicit */unsigned long long int) (unsigned char)22))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 24; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 1; i_2 < 22; i_2 += 4) 
                {
                    for (int i_3 = 1; i_3 < 24; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 4; i_4 < 22; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_3 - 1] [i_0] [i_0] [i_4] = ((/* implicit */unsigned long long int) ((unsigned char) var_9));
                                var_12 = ((/* implicit */signed char) min(((+(((/* implicit */int) arr_11 [i_0] [i_3 + 1] [i_4] [i_4] [i_4 - 2])))), (((((/* implicit */_Bool) arr_13 [(unsigned char)13] [i_3 + 1])) ? (((/* implicit */int) arr_11 [i_1] [i_4 - 2] [i_4 - 2] [i_4] [i_4 - 4])) : (arr_6 [i_3] [i_1])))));
                            }
                        } 
                    } 
                } 
                arr_15 [i_0] [i_0] [(short)3] = ((/* implicit */signed char) (-(((/* implicit */int) arr_1 [i_0]))));
                var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) arr_8 [i_0] [i_1 + 1] [24LL]))));
                var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)1)), (arr_11 [i_0] [i_1] [i_0] [i_1] [i_1 - 1])))) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) ((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) <= (arr_5 [i_0] [i_1]))))))))));
                arr_16 [17U] [i_1 - 1] [i_1 - 1] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((unsigned char) arr_8 [i_1 - 1] [i_1 - 1] [i_1 - 1]))), (((((/* implicit */_Bool) ((unsigned short) var_0))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0]))) : (max((arr_5 [i_0] [i_1]), (((/* implicit */unsigned long long int) var_8))))))));
            }
        } 
    } 
}
