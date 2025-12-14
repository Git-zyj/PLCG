/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149682
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
    for (short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (long long int i_1 = 3; i_1 < 23; i_1 += 1) 
        {
            {
                arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (((!((_Bool)1))) ? (min((((/* implicit */long long int) arr_1 [13U])), (274877906943LL))) : (max((((/* implicit */long long int) 251596447U)), (274877906943LL)))))) ? (((((/* implicit */_Bool) ((long long int) arr_1 [i_0]))) ? (((var_5) ^ (((/* implicit */unsigned long long int) 33423360)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1])))));
                arr_5 [i_0] [i_1 - 3] [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (arr_3 [i_1 - 3] [i_1 - 2] [i_1]))))));
                var_12 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((unsigned int) (short)0))) >= (min((((/* implicit */long long int) arr_3 [i_0] [i_0] [i_0])), (arr_2 [i_0] [(_Bool)1] [i_0]))))))) >= (arr_2 [i_0] [i_0] [i_0])));
            }
        } 
    } 
    var_13 = ((/* implicit */int) max((var_11), (((/* implicit */long long int) (-(((/* implicit */int) ((_Bool) (short)0))))))));
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((var_3) >= (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-16)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_4)))))))) << (((((((/* implicit */_Bool) max((((/* implicit */int) var_8)), (var_7)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) var_4)), (var_7)))) : (max((17433941848495459303ULL), (var_5))))) - (17433941848495459292ULL)))));
    var_15 = ((/* implicit */_Bool) max(((+((-(((/* implicit */int) (short)-2)))))), ((~(((((/* implicit */_Bool) (short)-29)) ? (((/* implicit */int) (signed char)-62)) : (var_2)))))));
}
