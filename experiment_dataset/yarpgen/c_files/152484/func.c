/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152484
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
    for (int i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (unsigned short i_2 = 2; i_2 < 9; i_2 += 2) 
            {
                {
                    var_16 += ((/* implicit */unsigned long long int) var_11);
                    arr_10 [i_0] [i_2] [10LL] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) min((var_7), (66060288U)))), ((((!(((/* implicit */_Bool) var_10)))) ? (min((((/* implicit */unsigned long long int) arr_3 [i_0] [i_1] [i_2])), (arr_1 [i_0]))) : (((/* implicit */unsigned long long int) arr_3 [i_0 - 2] [i_1] [i_1]))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 9; i_3 += 4) 
                    {
                        for (signed char i_4 = 4; i_4 < 8; i_4 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [(unsigned char)1])))))));
                                arr_16 [i_1] [i_1] [i_3 + 1] [i_1] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_6 [i_2 - 1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_2 + 1]))))) : (((int) arr_6 [i_2 - 2]))));
                                var_18 -= ((/* implicit */unsigned long long int) arr_2 [i_1] [i_0]);
                                var_19 = ((/* implicit */unsigned short) -4242592729435535834LL);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned int) (+(((((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_9))))) << ((((+(((/* implicit */int) var_2)))) - (55621)))))));
}
