/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108266
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
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (unsigned short i_1 = 3; i_1 < 11; i_1 += 3) 
        {
            {
                var_18 += ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_2 [i_0 + 1] [i_1 - 3]), (arr_2 [i_0 + 1] [i_1 - 2]))))) - (max(((-(var_6))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (short)7151)), (var_3))))))));
                var_19 = ((/* implicit */unsigned short) (short)-7581);
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 11; i_2 += 2) 
                {
                    for (unsigned int i_3 = 3; i_3 < 11; i_3 += 3) 
                    {
                        {
                            arr_9 [i_2] [i_3] [i_3] [i_3] [i_0] = ((/* implicit */unsigned short) arr_0 [i_3]);
                            arr_10 [i_2 + 1] [i_2 + 1] [i_3] [i_0] [i_2 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_0] [i_0] [i_3])) ^ (((/* implicit */int) var_1))))) : (arr_1 [i_1 - 3])))) && (((/* implicit */_Bool) ((arr_6 [i_2 + 1] [i_3 + 1]) ^ (arr_6 [i_0] [i_1 - 1]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 &= ((/* implicit */unsigned long long int) var_5);
}
