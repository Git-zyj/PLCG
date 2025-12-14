/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174398
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
    var_18 += ((/* implicit */short) var_2);
    var_19 = ((/* implicit */_Bool) ((short) var_5));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 17; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((unsigned short) arr_0 [(unsigned char)0])))));
                arr_4 [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((arr_3 [i_0 + 2]) <= (arr_3 [i_0 + 1]))))));
                arr_5 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_11)), (arr_2 [i_0])));
                var_21 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_0]) : (arr_2 [i_0]))));
            }
        } 
    } 
    var_22 = ((/* implicit */int) var_13);
}
