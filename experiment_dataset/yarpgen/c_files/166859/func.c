/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166859
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
    var_18 = ((/* implicit */short) max((((/* implicit */unsigned short) (unsigned char)94)), ((unsigned short)24243)));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */long long int) -2147483647);
                var_20 *= ((/* implicit */unsigned short) var_15);
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 13; i_2 += 2) 
    {
        for (short i_3 = 0; i_3 < 13; i_3 += 3) 
        {
            {
                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)41293)) << (((((((/* implicit */_Bool) -342999640)) ? (((/* implicit */int) (unsigned short)41349)) : (((/* implicit */int) (short)14937)))) - (41347)))));
                arr_11 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 342999616)) ? (((/* implicit */int) (signed char)-104)) : (((/* implicit */int) (signed char)-93))));
                arr_12 [i_2] [i_3] [i_3] = ((/* implicit */long long int) ((_Bool) ((_Bool) max((((/* implicit */short) (unsigned char)222)), ((short)-30147)))));
                arr_13 [i_3] [i_2] = ((/* implicit */int) ((short) arr_9 [i_2]));
            }
        } 
    } 
}
