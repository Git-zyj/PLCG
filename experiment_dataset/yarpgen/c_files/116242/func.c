/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116242
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
    var_11 = ((/* implicit */unsigned int) max((((var_7) & (max((((/* implicit */unsigned long long int) var_10)), (var_7))))), (((/* implicit */unsigned long long int) (-(1022795334U))))));
    var_12 = ((/* implicit */short) ((_Bool) ((((var_1) != (((/* implicit */long long int) 3272171962U)))) ? (((/* implicit */int) var_0)) : (min((((/* implicit */int) var_8)), (-647262349))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned char) arr_2 [i_1])))));
                    var_14 = ((/* implicit */unsigned short) max((((unsigned int) ((long long int) 647262366))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1 + 1] [i_2]))) : (arr_0 [i_2])))) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_1 [i_0] [i_0])))))));
                }
            } 
        } 
    } 
}
