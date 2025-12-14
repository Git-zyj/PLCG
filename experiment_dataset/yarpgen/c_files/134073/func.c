/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134073
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
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */long long int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_2 [i_0] [i_1] [i_1])), (var_0))))))), (((unsigned int) (!(((/* implicit */_Bool) 6557855242071460872LL)))))));
                arr_4 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) ((long long int) ((var_8) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 3402486911U)))))))));
                var_16 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_7))));
            }
        } 
    } 
    var_17 = ((/* implicit */int) ((unsigned short) max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (var_14))), ((~(var_9))))));
    var_18 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) ((unsigned short) var_7))) ? (min((var_8), (var_7))) : (max((3101947540U), (var_7)))))));
    var_19 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) -6557855242071460873LL)) ? (6557855242071460863LL) : (((((/* implicit */_Bool) (unsigned short)13224)) ? (9223372036854775790LL) : (((/* implicit */long long int) var_8)))))));
    var_20 = ((((/* implicit */_Bool) (((+(var_0))) << (((((((/* implicit */unsigned int) ((/* implicit */int) var_2))) - (var_9))) - (1538829724U)))))) ? ((((+(var_4))) % (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_14))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) var_13))))))));
}
