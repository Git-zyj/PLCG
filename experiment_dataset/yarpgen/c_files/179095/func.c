/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179095
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
    var_19 ^= (_Bool)0;
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 14; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (-((((-(((/* implicit */int) (unsigned char)236)))) + (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_1 [(unsigned short)4])))))))))));
                    arr_7 [i_2] [i_0] [i_0] = ((/* implicit */int) (-(((arr_3 [i_2]) ? (((((/* implicit */_Bool) (signed char)51)) ? (8858788916568853433LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)23))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)19)) && (((/* implicit */_Bool) 3747987088U))))))))));
                    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (~(3747987088U)))), (max((6959303333997261612LL), (((/* implicit */long long int) (_Bool)0))))))) ? (1147567004) : (((/* implicit */int) arr_3 [i_0]))));
                    arr_8 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)0))));
                }
            } 
        } 
    } 
}
