/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180571
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
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)98)) : (var_5))), (((/* implicit */int) ((arr_3 [i_0]) <= (((/* implicit */int) var_19))))))))));
                arr_6 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (var_18) : (((/* implicit */long long int) 1993768269U))));
                var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_2 [6LL])) | (1395165464)))))))));
                arr_7 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) max((((unsigned short) var_10)), (((/* implicit */unsigned short) var_3))))) <= (((/* implicit */int) var_19))));
                arr_8 [i_0] = ((/* implicit */unsigned long long int) arr_2 [i_0]);
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) max(((~(((/* implicit */int) var_3)))), (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) var_19)), (var_15)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (-14) : (((/* implicit */int) (short)19865))))))))));
}
