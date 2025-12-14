/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168135
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
    var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) (-(min((-7292980403775547884LL), (7292980403775547861LL))))))));
    var_15 = ((/* implicit */short) min((((((/* implicit */_Bool) min((-4975264598303283179LL), (((/* implicit */long long int) var_9))))) ? ((-(var_1))) : (((/* implicit */unsigned int) (-(var_0)))))), (var_6)));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            for (short i_2 = 2; i_2 < 19; i_2 += 3) 
            {
                {
                    var_16 -= ((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [i_1 + 2]))));
                    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) arr_1 [i_2 - 2]))) ? (min((min((((/* implicit */unsigned int) var_8)), (1658367448U))), (((/* implicit */unsigned int) var_7)))) : (((arr_0 [i_1 + 2]) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1 - 2])))))));
                }
            } 
        } 
    } 
}
