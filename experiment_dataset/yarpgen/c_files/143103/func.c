/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143103
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
    for (int i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) max((-3), ((+(((/* implicit */int) (_Bool)1))))));
                arr_5 [(unsigned char)20] [i_0] [i_0] = ((/* implicit */int) arr_2 [5]);
                arr_6 [(short)13] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_14))));
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) (((-((-(((/* implicit */int) (unsigned short)56893)))))) - (var_11)));
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 17; i_2 += 1) 
    {
        for (unsigned short i_3 = 1; i_3 < 15; i_3 += 3) 
        {
            {
                var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) 8188))));
                arr_13 [i_3] [i_3] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((-(arr_7 [16ULL]))), (arr_7 [i_2])))) ? (33550336) : ((-(((/* implicit */int) arr_1 [i_3 - 1] [i_3 + 2]))))));
                var_23 ^= (-(33550315));
            }
        } 
    } 
}
