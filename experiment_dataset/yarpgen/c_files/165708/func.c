/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165708
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
    for (int i_0 = 4; i_0 < 21; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */_Bool) max((998546694626539347LL), (-998546694626539360LL)));
                arr_5 [i_1] = ((/* implicit */unsigned int) max((max((max((((/* implicit */long long int) var_4)), (-998546694626539348LL))), (((/* implicit */long long int) min((arr_3 [i_1]), (var_2)))))), (min((max((998546694626539347LL), (((/* implicit */long long int) arr_4 [i_0] [i_1] [i_1])))), (max((var_8), (((/* implicit */long long int) (unsigned char)93))))))));
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */signed char) min((max((min((998546694626539337LL), (-998546694626539347LL))), (max((998546694626539348LL), (-998546694626539338LL))))), (((/* implicit */long long int) max((((/* implicit */unsigned char) min((var_9), (var_9)))), (min(((unsigned char)234), (((/* implicit */unsigned char) var_9)))))))));
            }
        } 
    } 
    var_12 = ((/* implicit */signed char) max((max((((/* implicit */long long int) max((var_1), (var_7)))), (min((((/* implicit */long long int) var_1)), (var_6))))), (max((min((((/* implicit */long long int) var_1)), (var_6))), (((/* implicit */long long int) max((var_7), (((/* implicit */signed char) (_Bool)1)))))))));
}
