/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150633
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
    var_13 = ((/* implicit */_Bool) max(((~(max((var_3), (var_3))))), (((/* implicit */long long int) ((unsigned short) (~(var_10)))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 23; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    var_14 = ((((/* implicit */_Bool) ((int) arr_5 [i_2] [i_0]))) ? (13602491699962003442ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))));
                    arr_9 [i_0] [(unsigned short)10] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_1)))) ? (((/* implicit */long long int) min(((~(var_12))), (((int) arr_2 [i_1]))))) : (max((var_1), (((((/* implicit */_Bool) arr_1 [7ULL])) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_8)))))));
                    var_15 = ((/* implicit */long long int) ((unsigned long long int) ((arr_0 [i_0 - 1]) != (arr_0 [i_0 - 1]))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            {
                                arr_14 [i_2] [i_1] [(unsigned short)5] [(unsigned short)21] [i_4] [i_2] = ((/* implicit */unsigned short) min((((((/* implicit */long long int) ((/* implicit */int) var_7))) | (arr_7 [i_1] [i_1] [i_1]))), (((/* implicit */long long int) (_Bool)1))));
                                arr_15 [i_0 + 1] [i_1] [i_2] = ((/* implicit */unsigned short) ((unsigned long long int) var_0));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
