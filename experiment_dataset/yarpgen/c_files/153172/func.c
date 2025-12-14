/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153172
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
    for (int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 9; i_1 += 4) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned short) var_17);
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned int) var_7);
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 17; i_2 += 2) 
    {
        for (unsigned int i_3 = 0; i_3 < 17; i_3 += 3) 
        {
            {
                arr_12 [i_3] [i_3] = ((/* implicit */int) arr_11 [i_2] [i_3] [i_3]);
                var_20 += ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_2]))))) ? (min((var_8), (((/* implicit */unsigned int) (_Bool)0)))) : (arr_6 [i_2] [i_3])))) != (((((/* implicit */long long int) ((/* implicit */int) var_4))) ^ (max((((/* implicit */long long int) arr_10 [i_2] [i_2] [0])), (var_13)))))));
            }
        } 
    } 
    var_21 |= ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_2))))) && (((/* implicit */_Bool) max((((/* implicit */unsigned int) var_4)), (var_6))))))) << (((/* implicit */int) var_10))));
}
