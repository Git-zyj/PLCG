/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155479
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
    for (unsigned short i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */long long int) max((arr_1 [i_0]), (min((arr_1 [i_0]), (((/* implicit */unsigned short) (signed char)106))))));
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((_Bool) 9096258013811579651LL)))));
                    arr_9 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) & (((/* implicit */int) arr_0 [i_0 - 1]))))) ? ((-(var_19))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 134217726)) ? (((/* implicit */int) (signed char)-114)) : (((/* implicit */int) arr_2 [i_0] [12LL])))))))) ? (max((((((/* implicit */int) (signed char)106)) << (((-4813356978658583606LL) + (4813356978658583625LL))))), (((/* implicit */int) arr_6 [i_0])))) : (((/* implicit */int) ((((/* implicit */int) arr_6 [i_0 - 1])) > (((((/* implicit */_Bool) -3821214043836845668LL)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned short)2784)))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned char) ((((-1) > (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)58952)) : (1126365915))))) ? ((+(((/* implicit */int) (signed char)64)))) : (((/* implicit */int) max((var_5), (var_5))))));
}
