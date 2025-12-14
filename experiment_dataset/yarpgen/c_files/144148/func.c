/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144148
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
    var_13 = ((/* implicit */unsigned int) var_8);
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */signed char) max((max((16086301636495811976ULL), (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (signed char)-102)), (0U))))));
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) max((((/* implicit */long long int) min((arr_1 [i_0 + 2] [i_0 + 2]), (((/* implicit */unsigned char) max(((signed char)-6), ((signed char)80))))))), (max((var_2), (((/* implicit */long long int) 4294967295U))))));
                arr_6 [0U] [i_1] [i_1] = ((/* implicit */unsigned short) max((((/* implicit */long long int) max((arr_4 [i_0] [i_0] [i_0 + 2]), (arr_4 [(unsigned char)9] [(unsigned char)9] [i_0 + 2])))), (min((((/* implicit */long long int) var_1)), (var_8)))));
                var_15 = ((/* implicit */unsigned char) max((min((var_6), (((/* implicit */unsigned long long int) var_12)))), (((/* implicit */unsigned long long int) max(((signed char)10), ((signed char)-101))))));
            }
        } 
    } 
}
