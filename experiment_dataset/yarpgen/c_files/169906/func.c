/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169906
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
    var_17 |= ((/* implicit */long long int) ((unsigned long long int) (~(((((/* implicit */_Bool) var_13)) ? (var_2) : (((/* implicit */unsigned int) var_1)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) min(((~(((/* implicit */int) arr_3 [i_0 - 1])))), (((/* implicit */int) arr_3 [i_0 - 1]))));
                var_18 |= ((/* implicit */short) ((unsigned short) var_11));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) var_4);
    var_20 = ((/* implicit */unsigned short) ((((_Bool) var_3)) ? (var_4) : (((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) var_12))) >> (((/* implicit */int) (_Bool)1)))))));
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (var_14) : (((/* implicit */unsigned long long int) min((((/* implicit */int) ((short) var_0))), (max((var_1), (var_0))))))));
}
