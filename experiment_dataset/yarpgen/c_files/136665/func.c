/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136665
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
    var_12 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (signed char)7)), (17266787346187628273ULL)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((-(var_4))) | (((/* implicit */unsigned int) arr_0 [i_0]))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) arr_0 [i_0])) <= (arr_1 [i_0] [i_0])))) : (((/* implicit */int) arr_2 [i_0] [i_1]))));
                var_14 = ((/* implicit */long long int) arr_1 [i_1] [i_0]);
                var_15 = arr_0 [(unsigned short)5];
                var_16 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_0 [i_1]) : (((/* implicit */int) arr_2 [i_1] [i_1]))))) || (((/* implicit */_Bool) arr_2 [i_0] [i_1]))));
            }
        } 
    } 
}
