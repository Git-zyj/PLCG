/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109666
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
    for (short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */short) arr_2 [i_1]);
                arr_6 [i_0] = ((/* implicit */unsigned char) var_0);
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) max((-1902444593), (((/* implicit */int) (unsigned short)0))));
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 12; i_2 += 2) 
    {
        for (unsigned char i_3 = 0; i_3 < 12; i_3 += 4) 
        {
            {
                arr_11 [i_2] [4LL] = ((/* implicit */_Bool) ((short) ((((((/* implicit */_Bool) arr_8 [i_3])) ? (1048448) : (((/* implicit */int) arr_9 [(unsigned short)3] [i_2] [i_2])))) != (max((((/* implicit */int) arr_3 [i_2] [i_2] [i_2])), (arr_2 [i_3]))))));
                var_20 ^= ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_0 [i_2])) ? (max((arr_0 [i_2]), (((/* implicit */unsigned long long int) arr_10 [i_3])))) : (((/* implicit */unsigned long long int) ((int) -1048428))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((max((var_15), (((/* implicit */unsigned int) (_Bool)1)))) < (((/* implicit */unsigned int) max((-1048425), (((/* implicit */int) var_0)))))))))));
            }
        } 
    } 
    var_21 |= ((/* implicit */int) max((var_13), (var_16)));
    var_22 = ((/* implicit */unsigned char) max((((long long int) max((2305843009205305344ULL), (((/* implicit */unsigned long long int) var_14))))), (((/* implicit */long long int) -1048425))));
}
