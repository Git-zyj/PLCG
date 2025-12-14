/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159633
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
    for (short i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                arr_5 [(_Bool)1] [(unsigned char)14] [(unsigned short)7] |= ((/* implicit */int) min((((max((var_14), (((/* implicit */long long int) arr_4 [i_0 - 1] [(unsigned char)20])))) & (((/* implicit */long long int) ((/* implicit */int) ((short) arr_0 [i_0 + 3] [i_0 + 2])))))), (((/* implicit */long long int) (-(((/* implicit */int) max((((/* implicit */short) arr_0 [i_1] [i_0 + 3])), (arr_4 [i_0] [5LL])))))))));
                arr_6 [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */int) arr_0 [i_1] [i_0 + 2])) - (((/* implicit */int) arr_0 [i_1] [i_0 + 1])))) != (((/* implicit */int) arr_0 [i_0] [i_1]))));
                var_20 = ((/* implicit */long long int) (-(((/* implicit */int) min((arr_2 [i_0 + 3]), (arr_2 [i_0 + 2]))))));
                arr_7 [i_0 - 1] = ((/* implicit */signed char) (((+(((/* implicit */int) arr_3 [i_0 + 3] [i_1])))) % (((/* implicit */int) arr_2 [i_0 + 2]))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_12)), ((-(var_17)))));
}
