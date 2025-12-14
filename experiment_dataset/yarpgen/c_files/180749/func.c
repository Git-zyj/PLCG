/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180749
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                arr_13 [(short)17] [(unsigned char)0] [i_2] [(unsigned char)0] [i_4] = ((/* implicit */short) (~(0ULL)));
                                arr_14 [i_0] [(unsigned short)4] [17] [i_3] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_11))))) <= (arr_8 [i_0] [i_1] [7ULL] [7ULL] [i_4])));
                                var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) max((((unsigned long long int) var_9)), (((unsigned long long int) min((14276819685015193842ULL), (((/* implicit */unsigned long long int) var_8))))))))));
                                var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_6 [i_1] [i_3] [i_3])) : (((/* implicit */int) arr_4 [i_1] [i_1] [i_3]))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((18446744073709551615ULL) << (((-1486986837) + (1486986882))))) == (((/* implicit */unsigned long long int) ((var_8) - (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_1] [i_2]))))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) min((((/* implicit */long long int) (+((-(((/* implicit */int) var_6))))))), (var_1))))));
}
