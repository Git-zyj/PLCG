/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173562
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    var_19 = ((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [i_1]);
                    arr_8 [i_0] [i_0] [i_2] = ((/* implicit */long long int) arr_5 [i_0] [i_0] [i_1] [i_2]);
                }
                var_20 += ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_0] [i_0])) ? (arr_5 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) var_6)))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((unsigned int) var_11)))));
    var_22 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((var_4) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)22205)))))) : (var_13)));
}
