/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169310
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
    var_15 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) max(((_Bool)1), ((_Bool)1))))))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_0))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */int) arr_0 [i_1] [i_0]);
                    var_17 = ((/* implicit */unsigned long long int) min((var_17), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) (_Bool)0))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) arr_7 [i_2] [i_2] [i_1] [i_0])) ? (var_7) : (arr_6 [i_1] [i_1] [i_1] [i_1])))))), (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (arr_3 [i_0] [i_0]) : (arr_3 [i_1] [i_0])))))));
                    var_18 = ((/* implicit */unsigned long long int) (-((-(((long long int) arr_8 [i_2] [13ULL] [i_0] [i_0]))))));
                    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -1048576)) ? (((/* implicit */int) (signed char)123)) : (((/* implicit */int) (unsigned short)1408))));
                }
            } 
        } 
    } 
}
