/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14121
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
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) ((signed char) (unsigned short)19719)))) ? (max((((unsigned int) -14)), (min((((/* implicit */unsigned int) 13)), (var_16))))) : (((/* implicit */unsigned int) ((((((/* implicit */int) var_11)) > (((/* implicit */int) (_Bool)0)))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((-17) == (((/* implicit */int) var_4))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            for (unsigned short i_2 = 3; i_2 < 11; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1 - 2] [i_0] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) (short)(-32767 - 1)))) ? (((/* implicit */long long int) ((int) var_3))) : (-6861001091103025939LL)));
                    var_19 -= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (13) : (((/* implicit */int) (signed char)(-127 - 1)))))) != (var_8)));
                }
            } 
        } 
        arr_8 [i_0] = ((/* implicit */_Bool) ((int) var_16));
        var_20 = ((/* implicit */signed char) 22);
    }
    var_21 = ((/* implicit */int) var_10);
}
