/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147765
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
    var_20 += ((/* implicit */signed char) ((unsigned char) var_8));
    var_21 = ((_Bool) var_1);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_22 = ((/* implicit */short) (_Bool)0);
                var_23 = ((/* implicit */long long int) (unsigned short)35794);
                var_24 = -1940728503;
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    var_25 = (~(-1708901356));
                    var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_4 [i_1]))));
                    arr_8 [i_1] [i_1] [i_1] = arr_2 [i_1] [i_1] [i_2];
                }
                arr_9 [i_1] [(short)4] [i_1] = ((var_2) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */long long int) 1033890442U)) : (arr_2 [i_1] [i_1] [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0]))));
            }
        } 
    } 
    var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) ((((/* implicit */int) (signed char)-11)) < (((/* implicit */int) var_10))))) : (((/* implicit */int) var_11))));
    var_28 = ((/* implicit */signed char) var_13);
}
