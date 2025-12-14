/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104617
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) ((unsigned short) (~(((/* implicit */int) arr_1 [i_0])))));
                var_19 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_15))) <= (min((max((arr_2 [i_0] [i_0]), (((/* implicit */long long int) arr_1 [i_0])))), (((/* implicit */long long int) (!(var_15))))))));
                arr_5 [i_0] [i_1] = ((/* implicit */_Bool) ((15102376032311549271ULL) % (((/* implicit */unsigned long long int) (-(31U))))));
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) 3344368041398002326ULL))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 1) 
    {
        for (unsigned char i_3 = 0; i_3 < 11; i_3 += 1) 
        {
            {
                var_20 = ((/* implicit */short) min((min(((-(((/* implicit */int) var_10)))), (((/* implicit */int) (!(((/* implicit */_Bool) 2766778211U))))))), (((((/* implicit */int) ((unsigned short) var_11))) + (max((((/* implicit */int) var_8)), (var_17)))))));
                arr_12 [1U] [i_3] = ((/* implicit */unsigned int) ((signed char) ((max((((/* implicit */unsigned long long int) (short)-14575)), (3344368041398002345ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))));
            }
        } 
    } 
}
