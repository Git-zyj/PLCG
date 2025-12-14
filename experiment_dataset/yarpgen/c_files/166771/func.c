/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166771
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
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : ((((_Bool)1) ? (13382010773249290759ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))) ? (((var_5) ? (((((/* implicit */_Bool) var_1)) ? (13382010773249290764ULL) : (13382010773249290776ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned long long int) -291923212))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) min(((-(((/* implicit */int) max((arr_0 [i_0 + 2]), ((_Bool)1)))))), ((-(((/* implicit */int) ((_Bool) (_Bool)0))))))))));
                var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((int) max((((/* implicit */unsigned int) arr_3 [i_0 - 1] [i_0 + 1])), (246119607U)))))));
                var_17 -= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) max(((_Bool)1), ((_Bool)1)))), (1641307718U)));
                var_18 |= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_3 [i_0] [i_0 + 1]))))), (3697983735225084615ULL)));
            }
        } 
    } 
    var_19 += 1383542159U;
}
