/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113586
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
    var_12 = ((/* implicit */long long int) (!(var_7)));
    var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) (~(-1152921504606846976LL)))) ? ((-(549739036672ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 += ((/* implicit */unsigned long long int) arr_4 [(signed char)16] [i_0]);
                var_15 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (var_6)))) ? (min((arr_1 [7U] [i_1]), (var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))));
                var_16 += ((/* implicit */short) ((long long int) ((_Bool) (signed char)-82)));
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) (-(min(((-(var_9))), (((/* implicit */unsigned int) (unsigned short)4096))))));
    /* LoopNest 2 */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            {
                arr_12 [i_2] [(_Bool)1] [i_2] = ((/* implicit */unsigned int) max((((/* implicit */int) var_0)), (((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) - (((/* implicit */int) ((signed char) var_2)))))));
                arr_13 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) max((var_2), (arr_3 [i_2] [i_3] [0U])))), (max((((/* implicit */long long int) var_1)), (-7609368427495682756LL)))))) ? ((+(((unsigned int) var_1)))) : ((+(((((/* implicit */_Bool) arr_2 [i_2 - 1] [9ULL])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [17ULL] [(_Bool)1]))) : (var_3)))))));
            }
        } 
    } 
}
