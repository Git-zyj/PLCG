/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142178
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 11; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned short) (-(max((((/* implicit */long long int) ((((/* implicit */int) (signed char)-66)) ^ (((/* implicit */int) var_7))))), (((((/* implicit */_Bool) -731525993)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_0)))))));
                var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((_Bool) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_0])) ? (((/* implicit */int) (signed char)126)) : (((/* implicit */int) (unsigned short)44491)))))))))));
                var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((short) arr_1 [i_0] [i_1])))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)6686)) : (((/* implicit */int) var_2))));
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 2; i_2 < 15; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 2; i_3 < 13; i_3 += 3) 
        {
            {
                var_17 = ((/* implicit */_Bool) var_7);
                var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (unsigned char)49))));
                var_19 = ((/* implicit */_Bool) ((var_5) | (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_8 [i_2] [i_2] [(_Bool)1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)125)) : (((/* implicit */int) var_12))))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_6))))) || (((/* implicit */_Bool) var_3))));
}
