/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177030
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
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    var_19 += ((/* implicit */unsigned char) ((unsigned long long int) (+(((/* implicit */int) ((unsigned char) 74942861))))));
                    var_20 = (!(((/* implicit */_Bool) 74942861)));
                }
                var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned int) var_12)))));
                arr_7 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (max((2147479552), (arr_3 [7] [i_1] [i_0]))) : ((-(((/* implicit */int) arr_2 [i_0] [i_1 - 1]))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1 - 1] [i_1 - 1])) ? (((/* implicit */int) arr_2 [i_1 - 1] [i_1 + 1])) : (((/* implicit */int) (short)28014)))))));
            }
        } 
    } 
    var_22 = ((/* implicit */short) (-2147483647 - 1));
    var_23 &= ((/* implicit */short) (!(((/* implicit */_Bool) ((var_13) ^ (((/* implicit */unsigned int) max(((-2147483647 - 1)), (((/* implicit */int) var_5))))))))));
}
