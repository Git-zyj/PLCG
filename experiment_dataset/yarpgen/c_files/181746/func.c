/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181746
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
    var_16 = ((/* implicit */signed char) max(((+(((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_12)))))), (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10))))) ? (((var_2) + (((/* implicit */int) (_Bool)1)))) : (((int) -1LL))))));
    var_17 = ((/* implicit */unsigned int) var_3);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_18 = (((((-(0LL))) | (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (arr_0 [i_0]) : (((/* implicit */int) (_Bool)1))))))) >= (((/* implicit */long long int) var_4)));
                arr_4 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) max((597008829), (((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-106))))))) - (((int) arr_3 [i_0]))));
                arr_5 [i_0] [i_1] [(unsigned char)1] = ((((/* implicit */_Bool) ((arr_2 [i_0] [i_1]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1] [i_0]))) : (1372626880U)))) ? (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0] [i_1])) < (((/* implicit */int) arr_2 [i_1] [i_0]))))) : (((/* implicit */int) (_Bool)0)));
                var_19 = ((/* implicit */long long int) (((((~(arr_1 [i_0] [i_1]))) | (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) var_12)))))) | (((((((/* implicit */_Bool) var_10)) ? (var_11) : (((/* implicit */int) (unsigned short)57989)))) ^ (((/* implicit */int) min(((unsigned char)1), (((/* implicit */unsigned char) (_Bool)1)))))))));
            }
        } 
    } 
}
