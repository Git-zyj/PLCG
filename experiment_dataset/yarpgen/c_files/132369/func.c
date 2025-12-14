/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132369
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
    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (short)-16968))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                arr_4 [i_1] [(unsigned char)0] [i_1] = ((/* implicit */signed char) arr_0 [i_0]);
                arr_5 [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) max((((/* implicit */unsigned char) ((var_9) < (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1])))))), (min(((unsigned char)255), ((unsigned char)255)))))) < (((/* implicit */int) (((~(4294967284U))) < (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_3 [i_1])), (var_4))))))))));
                arr_6 [i_1] [(unsigned char)7] [i_1] = ((/* implicit */unsigned long long int) (unsigned char)238);
                var_18 = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) arr_2 [i_0] [i_1] [i_1])) / (((/* implicit */int) max(((unsigned short)9265), (((/* implicit */unsigned short) var_7)))))))));
            }
        } 
    } 
}
