/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189064
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-60))) <= (arr_5 [i_1] [i_2]))))));
                    var_21 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_2 [i_1]))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_3 = 1; i_3 < 19; i_3 += 2) 
    {
        for (unsigned short i_4 = 0; i_4 < 21; i_4 += 4) 
        {
            {
                arr_13 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-59)) != (((/* implicit */int) (signed char)36))));
                var_22 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((int) ((int) arr_12 [i_3 + 2] [i_3] [i_3])))), (((arr_0 [i_3 + 2]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_3])))))));
                var_23 = ((/* implicit */unsigned short) (~(max((arr_0 [i_3]), (arr_9 [i_4] [i_3])))));
            }
        } 
    } 
    var_24 = var_2;
    var_25 = ((((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_6)) ? (var_18) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-49))))) : (((/* implicit */long long int) 0U)))) + (((/* implicit */long long int) ((/* implicit */int) var_16))));
}
