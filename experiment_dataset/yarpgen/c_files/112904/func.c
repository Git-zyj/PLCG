/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112904
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
    var_14 = (-(((/* implicit */int) var_3)));
    var_15 = ((/* implicit */unsigned char) max((var_15), (var_5)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) max((((/* implicit */unsigned short) var_10)), ((unsigned short)6305)))), (0U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_6))))) : ((((!(((/* implicit */_Bool) var_8)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_1]))) : (((unsigned long long int) var_0))))));
                arr_7 [i_0] [i_1] = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((unsigned short)59221), ((unsigned short)56)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_2))))))), (min((arr_4 [i_1]), (((/* implicit */unsigned long long int) max(((unsigned short)59217), (((/* implicit */unsigned short) arr_3 [(unsigned short)18] [i_1]))))))));
                var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-((-(((/* implicit */int) var_5))))))) ? (min((min((((/* implicit */int) (short)9)), (1847308820))), (((/* implicit */int) var_4)))) : (((/* implicit */int) ((((/* implicit */int) max((arr_5 [i_0 + 1] [i_0 + 1] [i_1]), (var_4)))) != (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0] [(short)9] [i_1])) < (-625642487)))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) var_11))));
}
