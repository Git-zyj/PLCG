/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152907
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
    var_10 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (-2021925540))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */unsigned int) (_Bool)1);
                    var_12 = ((/* implicit */int) ((((-635419870) < (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(_Bool)1] [i_2]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_7) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) -2021925563)) : (3249162013U)))));
                    var_13 = ((/* implicit */unsigned int) (+(((arr_5 [i_0] [i_1 + 1] [i_2]) ? (((/* implicit */int) arr_5 [9] [i_1 - 1] [i_2])) : (((/* implicit */int) arr_5 [i_0] [i_1 + 2] [i_2]))))));
                }
            } 
        } 
    } 
    var_14 = min(((-(((((/* implicit */_Bool) 4026289895U)) ? (1045805261U) : (268677374U))))), (((/* implicit */unsigned int) (_Bool)1)));
}
