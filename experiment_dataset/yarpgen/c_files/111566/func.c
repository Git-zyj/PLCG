/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111566
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
    var_10 &= ((/* implicit */unsigned long long int) var_4);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_1] = ((/* implicit */signed char) var_3);
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            {
                                var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1] [i_2] [i_3] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_1]))) : (((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */unsigned long long int) arr_5 [i_2] [i_4])) : (min((arr_4 [i_0] [i_3]), (((/* implicit */unsigned long long int) var_4))))))));
                                var_12 = ((/* implicit */long long int) ((arr_4 [i_4] [i_1]) >= (max((((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [i_1]))) : (arr_10 [i_0] [i_1] [i_2] [i_3]))), (((/* implicit */unsigned long long int) arr_2 [i_3] [i_4]))))));
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */unsigned char) arr_12 [i_0] [i_1] [i_1] [i_1] [i_2]);
                }
            } 
        } 
    } 
}
