/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110150
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
    var_13 = ((/* implicit */int) max((((long long int) ((long long int) var_1))), ((~(var_5)))));
    var_14 = ((/* implicit */short) 1671432515);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */int) ((((/* implicit */_Bool) var_11)) ? ((+((-(var_6))))) : (var_4)));
                arr_5 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) (short)32764))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 20; i_2 += 4) 
    {
        for (short i_3 = 0; i_3 < 20; i_3 += 3) 
        {
            {
                arr_12 [i_3] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-14414))))) : (1078379298)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_3] [i_3])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))))));
                arr_13 [i_3] = (~(((-7210036624800592818LL) - (((/* implicit */long long int) ((int) -4853320234983713512LL))))));
                arr_14 [i_2] [i_3] = ((/* implicit */short) ((max((((int) -1365891969)), (((((((/* implicit */int) var_0)) + (2147483647))) >> (((var_10) - (2015157991))))))) | ((-((-(arr_9 [i_3])))))));
            }
        } 
    } 
}
