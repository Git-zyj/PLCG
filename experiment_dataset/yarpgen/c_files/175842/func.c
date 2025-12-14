/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175842
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
    var_10 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_4))) ? (max((((/* implicit */unsigned long long int) var_9)), (var_0))) : (18446744073709551615ULL)))) ? (min((var_0), (((/* implicit */unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))));
    var_11 = ((/* implicit */unsigned short) var_7);
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */long long int) (~(((arr_5 [i_0] [i_0] [i_0]) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_4)), (var_2)))) : ((-(var_8)))))));
                    var_13 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((19ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))) + (var_2)));
                    /* LoopNest 2 */
                    for (signed char i_3 = 3; i_3 < 9; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_2]))))), (min((arr_6 [i_0] [i_1] [i_2]), (arr_6 [i_0] [i_1] [i_4])))));
                                arr_12 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((int) ((_Bool) arr_2 [i_0] [i_0 - 1])));
                                var_15 = ((/* implicit */unsigned short) ((min((((/* implicit */long long int) min((arr_7 [i_0] [i_2] [i_4]), (arr_0 [i_0])))), (max((var_2), (var_2))))) | (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_3]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0 - 1] [i_1] [i_0] [i_3] [i_4]))) : (var_6))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
