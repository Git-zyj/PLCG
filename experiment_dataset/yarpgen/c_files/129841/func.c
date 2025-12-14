/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129841
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
    var_13 = ((/* implicit */_Bool) max((var_12), (((/* implicit */unsigned int) ((short) (short)-1)))));
    var_14 = ((/* implicit */unsigned short) max(((+(var_6))), (((/* implicit */unsigned int) var_5))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */short) arr_0 [i_0] [i_1]);
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_2 = 1; i_2 < 10; i_2 += 3) 
                {
                    var_15 = ((/* implicit */unsigned char) arr_1 [i_2 + 1]);
                    var_16 = (-(var_9));
                    arr_9 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) (-(var_12)));
                    arr_10 [i_2] = ((/* implicit */long long int) (-(((/* implicit */int) (signed char)-59))));
                }
            }
        } 
    } 
    var_17 = ((/* implicit */short) 65535U);
}
