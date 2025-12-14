/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156891
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
    var_20 = ((/* implicit */signed char) var_19);
    var_21 = ((/* implicit */signed char) max((((/* implicit */int) var_17)), (((((/* implicit */_Bool) ((unsigned char) (_Bool)1))) ? (((/* implicit */int) ((unsigned char) (_Bool)0))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) var_16))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            {
                arr_6 [i_1 + 1] [i_0] [i_0 - 1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((arr_1 [i_0 - 1] [i_0 - 1]), (arr_1 [i_0 - 1] [i_0 - 1]))))));
                var_22 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) max((arr_4 [i_0 - 1] [i_0 - 1] [i_0]), (arr_4 [i_0 - 1] [i_0 - 1] [i_0])))), (arr_3 [(unsigned char)8])));
                var_23 = ((/* implicit */unsigned int) arr_4 [i_1] [i_1] [i_0]);
                var_24 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)10718))))) ? (max((var_4), (((/* implicit */long long int) 2282825850U)))) : (((/* implicit */long long int) (~(var_7)))))));
            }
        } 
    } 
}
