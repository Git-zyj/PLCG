/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151385
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */int) max((((/* implicit */long long int) max((arr_3 [i_1 + 1] [i_1 - 1] [i_1]), (arr_3 [i_1 + 1] [i_1 - 1] [i_1])))), (((((/* implicit */long long int) (+(((/* implicit */int) arr_4 [i_1]))))) ^ (max((var_10), (((/* implicit */long long int) var_0))))))));
                var_12 = ((/* implicit */unsigned int) (((+(arr_3 [i_1] [14ULL] [i_1]))) + (((/* implicit */int) min((((((/* implicit */int) arr_4 [i_1])) <= (var_3))), (((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_1])) || (((/* implicit */_Bool) (short)-1)))))))));
                var_13 = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_1 + 1])));
                /* LoopNest 3 */
                for (long long int i_2 = 1; i_2 < 19; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 19; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2 + 1] [i_1] [i_4] = max((arr_11 [i_2] [17U] [i_1]), (((/* implicit */unsigned long long int) (-(arr_3 [1] [i_3] [i_1])))));
                                arr_13 [i_4] [i_1] [i_1] [i_0] = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) 250592200U)) && (((/* implicit */_Bool) max((arr_10 [i_4] [i_3] [i_1] [i_1] [i_0]), (((/* implicit */unsigned int) var_9))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned int) (_Bool)1);
    var_15 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */int) var_0)), (var_3))))));
}
