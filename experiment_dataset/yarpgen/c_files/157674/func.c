/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157674
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
    var_12 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned char) (-(((/* implicit */int) min((((/* implicit */unsigned short) var_3)), (var_6))))));
                arr_5 [i_0] = ((/* implicit */signed char) (+(max((((/* implicit */int) (_Bool)1)), (-1373279829)))));
                arr_6 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0])) ? (arr_4 [i_1]) : (((/* implicit */int) (unsigned char)11))))) ? (min((((/* implicit */unsigned long long int) var_11)), (min((10ULL), (((/* implicit */unsigned long long int) arr_0 [i_0])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_3 [i_0] [i_0] [i_0]) > (((/* implicit */long long int) ((/* implicit */int) var_9)))))))));
                arr_7 [i_0] [i_0] |= ((/* implicit */short) var_1);
            }
        } 
    } 
    var_14 += ((/* implicit */signed char) min((((/* implicit */unsigned short) min((var_3), (min((var_3), (var_3)))))), (var_1)));
}
