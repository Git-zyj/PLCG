/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161560
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
    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) max((((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)-1))))), (max((var_15), (((/* implicit */unsigned int) var_19))))))), (max((((/* implicit */long long int) ((short) var_7))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (var_17))))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_0] [i_2] [i_2] [i_1 - 1])) ? (((/* implicit */int) arr_5 [i_2])) : (((/* implicit */int) arr_5 [i_2])))))));
                    var_22 = ((/* implicit */_Bool) arr_6 [i_1 + 1] [i_0] [i_0] [i_1]);
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) arr_1 [i_0]);
                    arr_9 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_5 [i_0])) : ((-(((/* implicit */int) (short)10684))))));
                }
                var_23 = ((/* implicit */unsigned int) max((var_23), (var_15)));
            }
        } 
    } 
    var_24 -= ((unsigned char) (-(((/* implicit */int) ((short) var_12)))));
    var_25 += ((/* implicit */unsigned char) var_13);
}
