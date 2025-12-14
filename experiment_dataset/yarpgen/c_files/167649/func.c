/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167649
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */int) var_7);
                    arr_9 [i_0] [i_0] [i_2] = max((min((((/* implicit */int) (!(var_2)))), (((-286662183) / (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) (!((!((_Bool)0)))))));
                }
            } 
        } 
    } 
    var_14 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)158)) ? (min((1795116992), (((/* implicit */int) (short)-6608)))) : (-286662183)))) ? ((((_Bool)0) ? (((((/* implicit */_Bool) 286662182)) ? (-2147483645) : (286662179))) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (short)25927)));
}
