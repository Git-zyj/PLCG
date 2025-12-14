/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176660
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
    var_15 = ((/* implicit */signed char) ((long long int) var_6));
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 7; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    arr_8 [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-26054)) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (short)15758))))) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-26054))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-26045)))));
                    arr_9 [i_2] [5U] [i_2] [i_0] = ((/* implicit */short) min((((unsigned long long int) (!(((/* implicit */_Bool) 271990672))))), (((/* implicit */unsigned long long int) arr_1 [i_0] [2U]))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((min((((/* implicit */short) (unsigned char)254)), ((short)26060))), (((/* implicit */short) ((((/* implicit */unsigned long long int) 1025497080)) < (17179869183ULL)))))))) <= (((((_Bool) var_8)) ? (((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned int) var_3))))) : (max((var_2), (((/* implicit */unsigned long long int) var_9))))))));
}
