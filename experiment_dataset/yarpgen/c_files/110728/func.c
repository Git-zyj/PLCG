/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110728
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
    var_11 = ((/* implicit */unsigned long long int) ((_Bool) var_5));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) ((unsigned long long int) ((short) arr_0 [i_0] [i_0]))))));
                var_13 = ((/* implicit */short) (~(((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
    var_14 += ((/* implicit */_Bool) (short)-6582);
    var_15 = ((/* implicit */signed char) (~(((/* implicit */int) var_3))));
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 2) 
        {
            {
                arr_12 [i_2] = ((/* implicit */_Bool) arr_6 [i_3]);
                var_16 = ((/* implicit */unsigned char) ((_Bool) (~(((/* implicit */int) ((short) (_Bool)1))))));
            }
        } 
    } 
}
