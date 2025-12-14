/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134975
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
    var_15 = ((/* implicit */int) var_13);
    var_16 = var_11;
    var_17 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_8)), (((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_8)), ((unsigned short)20)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) < (var_4))))) : (min((var_3), (var_6)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned int i_1 = 4; i_1 < 18; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned short) -735167997);
                arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_0])) ? (((((unsigned int) arr_0 [i_0] [i_1])) * (3031026654U))) : (((/* implicit */unsigned int) -735167972))));
                arr_7 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 17U)) ? (3031026654U) : (((/* implicit */unsigned int) -735167997))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2)))) < (-735167972)))) : ((~(((/* implicit */int) max((((/* implicit */unsigned short) (signed char)96)), ((unsigned short)65515))))))));
            }
        } 
    } 
}
